#include <stdio.h>
float zamijeniRetke(float *polje, int brRed, int brStup, int indRed1, int inRed2)
{
   float(*mat)[brStup] = (void *)polje;
   float sum1 = 0, sum2 = 0;
   float t;
   for (int i = 0; i < brStup; i++)
   {
      sum1 += mat[indRed1][i];
      sum2 += mat[inRed2][i];
   }

   for (int i = 0; i < brStup; i++)
   {

      t = mat[indRed1][i];
      mat[indRed1][i] = mat[inRed2][i];
      mat[inRed2][i] = t;
   }
   if (indRed1 > inRed2)
   {
      return sum2 - sum1;
   }
   else
   {
      return sum1 - sum2;
   }
}
int main(void)
{
   int brojRedaka, brojStupaca, indeksRetka1, indeksRetka2;
   printf("Upisi broj redaka i stupaca > ");
   scanf("%d %d", &brojRedaka, &brojStupaca);
   printf("Upisi indekse redaka za zamjenu > ");
   scanf("%d %d", &indeksRetka1, &indeksRetka2);
   float polje[brojRedaka][brojStupaca];
   printf("Upisi elemente matrice > \n");
   for (int i = 0; i < brojRedaka; ++i)
      for (int j = 0; j < brojStupaca; ++j)
         scanf("%f", &polje[i][j]);

   float razlikaSuma = zamijeniRetke(&polje[0][0], brojRedaka, brojStupaca, indeksRetka1, indeksRetka2);

   for (int i = 0; i < brojRedaka; ++i)
   {
      for (int j = 0; j < brojStupaca; ++j)
      {
         printf("%8.3f ", polje[i][j]);
      }
      printf("\n");
   }
   printf("Razlika suma: %8.3f", razlikaSuma);

   return 0;
}
