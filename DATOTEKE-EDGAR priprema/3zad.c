void generateReport(const char *employeesFilename, const char  *positionsFilename, const char *outputFilename){
    FILE *tok = fopen(employeesFilename, "rb");
    FILE *tok2 = fopen(positionsFilename, "rb");
    FILE *izlaz = fopen(outputFilename, "w");
    struct Employee z;
    struct Position p;

while(fread(&z, sizeof(z), 1, tok) == 1 ){
   if(z.employedSinceYear > 2007){
      while(fread(&p,sizeof(p),1, tok2)== 1 ){
         if(p.idPosition==z.positionId){
            fprintf(izlaz, "%s,%s;%d;%s\n", z.lastName, z.firstName, z.employedSinceYear, p.positionName);
         }
    }
    }
    fseek(tok2, 0, SEEK_SET);
}

    fclose(tok);
    fclose(tok2);
    fclose(izlaz);
}
