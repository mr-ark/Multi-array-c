#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,j,a[3][3];

    printf("Enter The Values:\n");
    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("\t%d",&a[i][j]);
        }
    }

    printf("Entered Values are:\n");
    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    } 
return EXIT_SUCCESS;
}
