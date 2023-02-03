int brojJednakih(char *trgovina1, char *trgovina2) {
   FILE *trg1 = fopen(trgovina1, "r");
   FILE *trg2 = fopen(trgovina2, "r");

   int brojac = 0;
   if (trg1 != NULL && trg2 != NULL) {
      int sif1, sif2;
      while (fscanf(trg1, "%d%*c%*f", &sif1) == 1) {
         fseek(trg2, 0L, SEEK_SET);
         while (fscanf(trg2, "%d%*c%*f", &sif2) == 1) {
            if (sif1 == sif2) {
               ++brojac;
               break;
            }
         }
      }
   }
   else {
      brojac = -1;
   }
   if (trg1 != NULL) fclose(trg1);
   if (trg2 != NULL) fclose(trg2);

   return brojac;
}
