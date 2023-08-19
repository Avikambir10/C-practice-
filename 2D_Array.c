#include<stdio.h>
int main(){
    printf("Enter value of first matrix: ");
    int a[3][3];
    for (int  i = 0; i < 3; i++){
        for (int j = 0; j< 3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter value of second matrix: ");
    int b[3][3];
    for (int  i = 0; i < 3; i++){
        for (int j = 0; j< 3; j++){
            scanf("%d",&b[i][j]);
        }
    }
    int c[10][10];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("The product of the two matrices is: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j< 3; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;

}
