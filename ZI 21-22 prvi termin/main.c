void increaseLowest(char *fileName, int percentage){
struct record r;
FILE *tok=fopen(fileName, "r+b");
int pos=0;
int minsalary;
int minpos;
while(fread(&r, sizeof(r), 1, tok)==1){
if(pos==0 || r.salary<minsalary){
    minsalary=r.salary;                        //trazi na indeksu najmanju placu
    minpos=pos;
}
pos++;
}

fseek(tok, minpos*sizeof(r), SEEK_SET);           //inicijalizator na najmanju placu
fread(&r, sizeof(r),1, tok);
r.salary*=1+percentage/100.;
fseek(tok, -1L*sizeof(r), SEEK_CUR);
fwrite(&r, sizeof(r), 1, tok);
fclose(tok);


}



