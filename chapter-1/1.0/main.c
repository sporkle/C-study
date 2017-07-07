#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    while((c = getchar()) != EOF)
       putchar(c);                 // putchar() can eat the space that fallow char
    return 0;
}
