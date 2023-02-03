#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
double x;
double y;
}tocka_t;
//najmanja udaljenost
tocka_t *pokNaNajblizuTocku(tocka_t *tocka, int n){
double min_udalj=sqrt(pow((tocka -> x), 2) + pow((tocka -> y), 2)); //prvielement
int min_ind=0;
for(int i=0;i<n;i++){
    double udalj=sqrt(pow(((tocka+i) -> x), 2) + pow(((tocka+i) -> y), 2));
    if(udalj<=min_udalj){
        min_udalj=udalj;
        min_ind=i;
    }
}

return (tocka+min_ind);

}

int main()
{
    printf("Hello world!\n");
    return 0;
}
