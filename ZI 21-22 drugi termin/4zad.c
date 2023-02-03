_Bool txt2bin(char *inputFile, char *outputFile){
struct record r;
FILE *tokulaz=fopen(inputFile, "r");
FILE  *tokizlaz=fopen(outputFile, "wb");
if(tokulaz==NULL){
    return 0;
}
if(tokizlaz==NULL){
    return 0;
}

 while(fscanf(tokulaz, "%2d%3d%3d", &r.code, &r.x, &r.y)==3){
    fseek(tokizlaz, (r.code-1)*sizeof(r), SEEK_SET);
    fwrite(&r, sizeof(r), 1, tokizlaz);
 }
fclose(tokulaz);
fclose(tokizlaz);

return 1;
}

