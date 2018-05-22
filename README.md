# C pointer 

Created a instance.

&---&

```c
    char *my_strcat(char *str,const char *src){
        char *temp = str;
+        while(*temp++);
+         --temp;
+         while((*str++ = *src) != '\0');
        return str;
    }
```