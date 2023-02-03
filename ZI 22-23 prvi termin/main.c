int najstudenti(char *txtdat, char *bindat)
{
   FILE *filetxt = fopen(txtdat, "r");
   FILE *filebin = fopen(bindat, "wb");
   if (filetxt == NULL || filebin == NULL)
   {
      return -1;
   }

   int brojac = 0;
   struct rezultat s;
   while (fscanf(filetxt, "%s %d", s.ime, &s.bodovi) == 2)
   {
      if (s.bodovi >= 80)
      {
         fwrite(&s, sizeof(s), 1, filebin);
         brojac++;
      }
      fseek(
   }
   return brojac;
}
