#include<stdio.h>

main(){

    int r,c,s;

    for(r=4; r>=1; r--){

        for(c=r; c>=1; c--){

            if(c==1){
                printf("* ");
            }else{
                printf("  ");
            }

        }

        for(s=1; s<(5-r); s++){

            printf("  ");
 
        } 

        for(s=1; s<(4-r); s++){

            printf("  ");
 
        } 

        for(c=1; c<=r; c++){

            if(r==4){
                continue;
            }

            if(c==1){
                printf("* ");
            }else{
                printf("  ");
            }

        }

        printf("\n");

    }

}