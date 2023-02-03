void delCharFromName(char *name, char c) {

   int i = 0;
   int noviniz = 0;
   while (*(name + i) != '\0') {
      if (!(*(name + i) == c)) {
         *(name + noviniz) = *(name + i);
         noviniz++;
      }
      i++;
   }
   *(name + noviniz) = '\0';

   return;
}
