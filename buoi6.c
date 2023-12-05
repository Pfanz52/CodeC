#include<stdio.h>
int main()
{
    // int n[10];
    // int i, j;
    // for(i = 0;i<10;i++){
    //     n[i]= i + 100;
    // }
    // for(j =0; j<10;j++){
    //     printf("Element[%d] = %d\n", j, n[j]);
    // }
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    printf("A[0][2] = %d\n", A[0][2]);
    printf("A[0][3] = %d\n", A[0][3]);
    printf("A[1][0] = %d\n", A[1][0]);
    printf("A[1][2] = %d\n", A[1][2]);
    printf("A[0][4] = %d\n", A[0][4]);
    printf("A[1][4] = %d\n", A[1][4]);
    printf("A[2][4] = %d\n", A[2][4]);
    printf("A[3][0] = %d\n", A[3][0]);
    printf("A[3][1] = %d\n", A[3][1]);
    printf("A[3][2] = %d\n", A[3][2]);
    printf("A[3][3] = %d\n", A[3][3]);
    printf("A[3][4] = %d\n", A[3][4]);
    printf("A[3][5] = %d\n", A[3][5]);
    printf("A[3][6] = %d\n", A[3][6]);
    printf("A[3][7] = %d\n", A[3][7]);


    return 0;
}