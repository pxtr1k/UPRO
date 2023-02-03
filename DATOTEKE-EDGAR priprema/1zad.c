void analyzeGrades(const char *studentsFilename, const char *reportFilename){

FILE *tok=fopen(studentsFilename, "rb");
FILE *tok2=fopen(reportFilename, "w");

struct Student s;

int najvecasuma=0;
int suma;
int indexstudenta=0;

while(fread(&s, sizeof(s), 1, tok)==1){
suma=s.points[0]+s.points[1]+s.points[2]+s.points[3]+s.points[4];
if(suma>najvecasuma){
   najvecasuma=suma;
   indexstudenta++;
}
fprintf(tok2, "%s %s %d\n", s.firstName, s.lastName, suma);
}
fseek(tok, (long)(indexstudenta+1)*sizeof(s), SEEK_SET);
fread(&s, sizeof(s), 1, tok);
fprintf(tok2,"Najbolji rezultat: %s %s\n", s.firstName, s.lastName);




fclose(tok);
fclose(tok2);


return;
}
