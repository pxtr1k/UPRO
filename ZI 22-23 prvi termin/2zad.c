void danMjesec(int rbrDanGodina, int *dan, int *mjesec)
{
   int mjeseci[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   int mjes = 1;
   for (int i = 0; i < 12; i++)
   {
      if (rbrDanGodina > mjeseci[i])
      {
         mjes++;
         rbrDanGodina -= mjeseci[i];
      }
      else
      {
         *mjesec = mjes;
         *dan = rbrDanGodina;
         break;
      }
   }
}
