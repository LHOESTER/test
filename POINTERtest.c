#include <stdio.h>
int stringlen(char *string)
{
    char *c = string;
    while(*c)
    {
        c++;
    }
    return c-string;
}
void stringcopy(char *to, char *from)
{
    while(*to++ = *from++);
}

 typedef struct
 {
    char x;
    int y;
    char z;
 }Point;


typedef struct 
{
    char djname[10];
    int djage;
}NEWMORE;
 
int add(int *a, int *b)
{
    return *a+*b;
}


int main() {
   Point root[10];
   root[0].x = 'c';
   root[0].y = 23;
   root[0].z = 'a';
   printf("%d",root[0].y);
    
    return 0;
}