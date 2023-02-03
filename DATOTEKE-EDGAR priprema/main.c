void generateReport(const char *employeesFilename, const char  *positionsFilename, const char *outputFilename){
    FILE *tok = fopen(employeesFilename, "rb");
    FILE *tok2 = fopen(positionsFilename, "rb");
    FILE *izlaz = fopen(outputFilename, "w");
    struct Employee z;
    struct Position p;

    while(fread(&z, sizeof(z), 1, tok) == 1 && (fread(&p, sizeof(p), 1, tok2) == 1)){
            if(p.idPosition == z.positionId){
                if(z.employedSinceYear > 2007){
                    fprintf(izlaz, "%s;%s;%d;%s", z.firstName, z.lastName, z.employedSinceYear, p.positionName);
                }
            }

    }
    fclose(tok);
    fclose(tok2);
    fclose(izlaz);
}
