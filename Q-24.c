#include<stdio.h>

main(){

    int r,c,s;

    for(r=1; r<=5; r++){

        for(s=1; s<(6-r); s++){

            printf("  ");
 
        } 

        for(c=5; c>=(6-r); c--){

            printf("%d ", c);

        }

        for(c=(7-r); c<=5; c++){

            printf("%d ", c);

        }

        printf("\n");

    }

}