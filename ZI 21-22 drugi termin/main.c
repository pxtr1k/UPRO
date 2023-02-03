#include <stdio.h>
#include <stdlib.h>

int nulovanje(int *polje, int brred, int brstup){

int ind_max_redak=0;
int ind_max_stup=0;
int max=*(polje+0);

//nalazenje elementa s najvecoj vrijednosti, i retka i stupca
for(int i=0;i<brred;i++){
for(int j=0;j<brstup;j++){
    if(*(polje+brstup*i+j)>max){
            max=*(polje+brstup*i+j);
            ind_max_redak=i;
            ind_max_stup=j;
    }else if(*(polje+brstup*i+j)==max){
        if(i>ind_max_redak){
            ind_max_redak=i;
            ind_max_stup=j;
        }
    }
}
}

int suma=0;
//zamjena elemenata s 0
for(int i=0;i<brred;i++){
    for(int j=0;j<brstup;j++){
        if(i==ind_max_redak || j==ind_max_stup){
            suma+=*(polje+brstup*i+j);
            *(polje+brstup*i+j)=0;
        }
    }
}


return suma;
}



int main(void)
{

    int brred, brstup;
    int rez;
    printf("Unesite dimenziju polja > ");
    scanf("%d %d", &brred, &brstup);

    int polje[brred][brstup];
    printf("Unesite clanove polja:\n");
    for(int i=0;i<brred;i++){
        for(int j=0;j<brstup;j++){
            scanf("%d", &polje[i][j]);
        }
    }

    nulovanje(&polje[0][0], brred, brstup);
    printf("Novo polje:\n");
    for(int i=0;i<brred;i++){
        for(int j=0;j<brstup;j++){
            printf("%d ", polje[i][j]);
        }
        printf("\n");
    }
    rez=nulovanje(&polje[0][0], brred, brstup);
    printf("Suma je %d", rez);

    return 0;
}
