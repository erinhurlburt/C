#include <stdio.h>
#include <stdlib.h>


int main(int tableNum, char *argv[] ) {

    int j;
    int num;
    num = atoi(argv[1]);

    for (int j = 1; j <= num; j++) {
        for (int i = 1; i < num + 1; i++){
            printf("  %3d  ", i * j);
        }
        printf("\n");
        
        printf("\n");
    }



} 