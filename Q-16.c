#include<stdio.h>

main(){

    int r,c,s;

    for(r=1; r<=5; r++){

        for(c=r; c>=1; c--){

            printf("%d ", c);

        }

        printf("\n");

    }

     for(r=5; r>=1; r--){

        if(r==5){
            continue;
        }

    for(c=r; c>=1; c--){

            printf("%d ", c);

        }

        printf("\n");
     }
}