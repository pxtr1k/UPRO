#include <stdio.h>
#include <stdlib.h>

struct vektor_s {
    int komp_i;
    int komp_j;
};

void SumaVektora(struct vektor_s *pok, int n, struct vektor_s *rez){

(*rez).komp_i=0;
(*rez).komp_j=0;

for(int i=0;i<n;i++){
    (*rez).komp_i+=pok[i].komp_i;
    (*rez).komp_j+=pok[i].komp_j;
}

 return;
}

int main(void)
{
    printf("Hello world!\n");
    return 0;
}
