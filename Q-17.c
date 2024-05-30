#include<stdio.h>

main(){

    int r,c,s;

    for(r=1; r<=5; r++){

        if(r==5){
            continue;
        }

        for(s=r; s<5; s++){

            printf("  ");

        }

        for(c=1; c<=r; c++){

            printf("%d ", c);

        }

        printf("\n");

    }

     for(r=5; r>=1; r--){

        for(s=1; s<(6-r); s++){

            printf("  ");

        }

        for(c=(6-r); c<=5; c++){

            printf("%d ", c);

        }

        printf("\n");
     }
}