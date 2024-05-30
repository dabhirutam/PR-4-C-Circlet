#include<stdio.h>

main(){

    int r,c;

    for(r=5; r>=1; r--){

        for(c=(6-r); c<=5; c++){

            printf("%d ", c);

        }

        printf("\n");

    }

}