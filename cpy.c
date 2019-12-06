#include "cpy.h"
void my_strcpy(char *obj, char *str)
{
    while(str)
        obj++=str++;
    *obj='\0';
}
