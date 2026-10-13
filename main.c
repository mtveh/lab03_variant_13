#include <stdio.h>
int main (void)
{   
    int F,R,P,K;
    int cndD=0;
    int cndE=0;
    int cndR=0;
    int cndO=0;
    int iter=0;
    printf("введите F R P K.\n");
    if(scanf("%d %d %d %d",&F, &R, &P, &K)!=4) {
        printf("Oшибка ввода.\n");
        return 1;
    }
    if(F<1 || F>20 || R<1 || R>20 || P<1 || P>20){
        printf("Ошибка: F, R, P должны быть от 1 до 20.\n");
        return 1;
    }
    if (K<1){
        printf("Ошибка: K должно быть не меньше 1.\n");
        return 1;
    }
    for(int f=1;f<=F;f++){
        printf("\nэтаж: %d \n", f);
        for(int r=1;r<=R;r++){
            printf("ряд: %d  ", r);
            for(int p=1;p<=P;p++){
                iter ++;
                if (r==1 && p<=2){
                    printf("D");
                    cndD++;
                }    
                else if (p % 5 == 0){
                    printf("E");
                    cndE++;
                }
                else if((f+r+p) % K == 0){
                    printf("R");
                    cndR++;
                }
                else{
                    printf("O");
                    cndO++;
                }
            }
            printf("\n");
       }

    }
    printf("\n D= %d \n", cndD);
    printf("\n E= %d \n", cndE);
    printf("\n O= %d \n", cndO);
    printf("\n R= %d \n", cndR);
    printf("\n iter= %d \n", iter);
    return 0;
}