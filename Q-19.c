#include<stdio.h>

main(){

    int r,c,s;

    for(r=5; r>=1; r--){

        for(c=1; c<=r; c++){

            printf("%d ", c);

        }

        for(s=1; s<(6-r); s++){

            printf("  ");
 
        } 

        for(s=1; s<(6-r); s++){

            printf("  ");
 
        } 

        for(c=r; c>=1; c--){

            printf("%d ", c);

        }

        printf("\n");

    }

    for(r=1; r<=5; r++){

         if(r==1){
            continue;
        }

        for(c=1; c<=r; c++){ 
 
            printf("%d ", c);

        }

        for(s=1; s<(6-r); s++){

            printf("  ");
 
        } 

        for(s=1; s<(6-r); s++){

            printf("  ");
 
        } 

        for(c=r; c>=1; c--){

            printf("%d ", c);

        }

        printf("\n");

    }
}