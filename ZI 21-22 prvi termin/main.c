#include <stdio.h>
#include <stdlib.h>

void generirajLozinku (unsigned int sjeme, const char *znakoviZaLozinku, int duljLoz, char *lozinka){

int duljinaniza=0;
srand((unsigned)sjeme);
while(*(znakoviZaLozinku+duljinaniza)!='\0'){
duljinaniza++;
}

for(int i=0;i<duljLoz;i++){
    *lozinka=*(znakoviZaLozinku+rand()%duljinaniza);
    ++lozinka;
}
*lozinka='\0';



return;
}





int main()
{
    unsigned int sjeme;
    scanf("%u", &sjeme);
    char znakoviZaLozinku[sjeme+1], lozinka[sjeme+1];
    fgets(znakoviZaLozinku, sjeme+1, stdin);
    return 0;
}
