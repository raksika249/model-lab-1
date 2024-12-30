#include <stdio.h>

int main()
{
   char a;
   printf("enter an uppercase alphabet:");
   scanf(" %c",&a);
   a=(char)(a+32);
   printf("the corresponding lowercase alphabet is:");
   printf("%c",a);
}
