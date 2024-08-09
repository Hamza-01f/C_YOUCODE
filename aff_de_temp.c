#include <stdio.h>

int main()
{
  int Feh , Cel;
   printf("--------bienvenue------------\n");
   printf("entrer la température en Fahrenheit ; ");
   scanf("%d",&Feh);
   Cel = (Feh-32)/1.8;
   printf("la degré Celsius est %d°;",Cel);
   
return 0;
}