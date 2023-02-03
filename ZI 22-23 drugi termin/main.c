float zamijeniGlavnaD(float *p, int n) {
   float suma = 0.;
   float pom;
   for (int i = 0; i < n; i++) {
      suma += *(p + n * i + (n - i - 1));
      if (i < (n / 2)) {
         pom = *(p + n * i + i);
         *(p + n * i + i) = *(p + n * (n - 1 - i) + (n - 1 - i));
         *(p + n * (n - 1 - i) + (n - 1 - i)) = pom;
      }
   }
   return suma;
}
