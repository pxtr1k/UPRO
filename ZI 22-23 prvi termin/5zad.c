#include <stdio.h>
#include <math.h>
int postaviBitove(unsigned short int *pokNaBroj, int n)
{
   int count = 0;
   unsigned short int broj, brtemp;
   broj = 0;
   for (int i = 0; i < 16; i++)
   {
      brtemp = (*pokNaBroj >> i) & 1;
      if (i < n)
      {
         if (brtemp == 0)
         {
            brtemp = 1;
            count++;
         }
      }
      broj += brtemp * (int)(pow(2, i));
   }
   *pokNaBroj = broj;
   return count;
}
