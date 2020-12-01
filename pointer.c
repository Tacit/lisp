#include <stdio.h>

int main()
{
   const char d = 'a';
   char *b = (char *)&d;

   printf("const d is: ");
   putchar(d);
   putchar('\n');
   *b = 'c';
   printf("const d changed to : ");
   putchar(d);
   putchar('\n');
}