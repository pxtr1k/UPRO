void danMjesec(int rbrDanGodina, int *dan, int *mjesec)
{
   int mjeseci[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   int mj = 1;
   for (int i = 0; i < 12; i++)
   {
      if (rbrDanGodina > mjeseci[i])
      {
         mj++;
         rbrDanGodina -= mjeseci[i];
      }
      else
      {
         *mjesec = mj;
         *dan = rbrDanGodina;
         break;
      }
   }
}
