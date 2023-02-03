int najstudenti(char *txtdat, char *bindat){

    FILE *ulaz = fopen(txtdat, "r");
    FILE *izlaz = fopen(bindat, "wb");

    if (ulaz == NULL || izlaz == NULL)
        return -1;

    int brojac = 0;

    struct rezultat s;

    while(fscanf(ulaz, "%s %d", s.ime, &s.bodovi) == 2){

        if (s.bodovi >= 80){
            fwrite(&s, sizeof(s), 1, izlaz);
            brojac++;
        }
    }

    fclose(ulaz);
    fclose(izlaz);

    return brojac;
}
