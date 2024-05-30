#include<stdio.h>

main(){

    int r,c;

    for(r=1; r<=5; r++){

        for(c=5; c>=(6-r); c--){

            printf("%d ", c);

        }

        printf("\n");

    }

}