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

