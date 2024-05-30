#include<stdio.h>

main(){

    int r,c,s;

    for(r=5; r>=1; r--){

        for(s=r; s<5; s++){

            printf("  ");

        }

        for(c=(6-r); c<=5; c++){

            printf("%d ", c);

        }

        printf("\n");

    }

}