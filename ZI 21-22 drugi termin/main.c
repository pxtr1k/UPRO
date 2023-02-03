#include <stdio.h>
#include <stdlib.h>

void igra(int seed, int brojBacanja, int *pobjednik, int *razlika){
srand(seed);
int r1=0, r2=0;
for(int i=0;i<brojBacanja;i++){
    r1+=rand()%6+1;
    r2+=rand()%6+1;
}
 *razlika=r1-r2;
if(*razlika>0){
  *pobjednik=1;
}else if(*razlika==0){
*pobjednik=0;
}else{
*pobjednik=2;
   *razlika=-1* *razlika;
}

return;
}



int main()
{
    printf("Hello world!\n");
    return 0;
}
