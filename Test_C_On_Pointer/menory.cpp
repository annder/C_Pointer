#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

extern int *bouble_array(int array_[]);

void *alloc(size_t size)
{
	void *new_mem;
	new_mem = malloc(size);
	if (new_mem == NULL)
	{
		printf("Out of memory \n");
		exit(1);
	};
	return new_mem;
};

int compare_integers(void const *a, void const *b)
{
	register int const *pa = (int *)a;
	register int const *pb = (int *)a;
	return *pa > *pb ? 1 : *pa < *pb ? -1 : 0;
};

void free_moeny()
{
	int *p;
	p = (int *)alloc(100);
	free(p);
	char *v = (char *)alloc(25 * sizeof(int));
	free(v);
};

int menory_main()
{
	int *array_;
	//lenght of arrays.
	int n_values;
	int i;
	printf("How many values are there?");
	if (scanf("%d", &n_values) != 1 || n_values <= 0)
	{
		printf("Illegal number of values.\n");
		// exit children progress.
		exit(EXIT_FAILURE);
	};
	array_ = (int *)malloc(n_values * sizeof(int));
	if (array_ == NULL)
	{
		printf("Can't get memory for that many values.\n");
		exit(EXIT_FAILURE);
	};
	for (i = 0; i < n_values; i++)
	{
		printf("?");
		//??? WTF opreate??
		if (scanf("%d", array_ + i) != 1)
		{
			free(array_);
		};
	};
	bouble_array(array_);
	for (i = 0; i < n_values; i++)
	{
		printf("%d\n", array_[i]);
	}
	free(array_);
	return EXIT_SUCCESS;
};


char *strdup(char const *string) {
	char *new_string;
	new_string = (char *)malloc(strlen(string) +1);
	if (new_string != NULL) {
		strcpy(new_string, string);
	}
	return new_string;
}




typedef struct {
	int cost;
	int supplier;
} Partinfo;

typedef struct {
	int n_parts;
	struct SUBASSYPART
	{
		char partno[10];
		short quan;
	} *part;
} Subassyinfo;

typedef struct {
	char partno[10];
	int quan;
	enum {PART,SUBASSY} type_;
	union {
		Partinfo *part;
		Subassyinfo *subassy;
	} info;
} Invrec;

Invrec *create_subassy_record(int n_parts) {
	Invrec *new_rec;
	new_rec = (Invrec*)malloc(sizeof(Invrec));
	if (new_rec) {
		//Automate assgins memony
		new_rec->info.subassy = (Subassyinfo*)malloc(sizeof(Subassyinfo));
		Subassyinfo Nio;
		new_rec->info.subassy->n_parts = (int)malloc(n_parts * sizeof(Nio.part));
		if (new_rec->info.subassy->part != NULL) {
			new_rec->info.subassy->n_parts = n_parts;
			return new_rec;
		};
		free(new_rec->info.subassy);
	};
	free(new_rec);
	return NULL;
};

//destory all about automate assgins memony...

void discard_inventory_record(Invrec *record) {
	if (record->SUBASSY) {
		free(record->info.subassy->part);
		free(record->info.subassy);
	}
	if (record->SUBASSY) {
		free(record->info.part);
	};
	free(record);
};

//Rewirte a functiom that is usage malloc function to obtain memory.
// Like calloc!!

