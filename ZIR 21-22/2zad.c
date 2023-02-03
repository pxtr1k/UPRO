int unosKonverzija(char *niz, int *dulj){
int duljinaniza=0;
int brojacupitnika=0;
char zn;

while(zn!='!' && duljinaniza<10){
scanf("%c", &zn);
if(zn!='!'){

if(zn>='A' && zn<='Z'){
zn+=32;
}else if(zn>='0' && zn<='9'){
zn='?';
brojacupitnika++;
}
  *(niz+duljinaniza)=zn;
}else{
break;
}
duljinaniza++;
}



*(niz+duljinaniza)='\0';
*dulj=duljinaniza;



return brojacupitnika;

}
