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

