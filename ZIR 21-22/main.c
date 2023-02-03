#include <stdio.h>
#include <stdlib.h>

struct record_s {
    int x;
    int y;
    int quadrant;
};


_Bool setQuadrants(char *fileName){
  FILE *tok=fopen(fileName, "r+b");
    if(tok==NULL){
        return 0;
    }
struct record_s r;
while(fread(&r, sizeof(r),1 , tok)==1){
    if(r.x>0 && r.y>0){
        r.quadrant=1;
    }else if(r.x<0 && r.y>0){
        r.quadrant=2;
    }
    else if(r.x<0 && r.y<0){
        r.quadrant=3;
    }else{
        r.quadrant=4;
    }
    fseek(tok, -1L*sizeof(r), SEEK_CUR);
    fwrite(&r, sizeof(r),1 , tok);
}
fclose(tok);
return 1;
}










int main(void)
{
    printf("Hello world!\n");
    return 0;
}
