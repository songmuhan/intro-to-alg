#include<stdio.h>
// n binary add
int main(){
    int A[] = {1,1,1,1,1,1};
    printf("A: ");
    for(int i = 0;i<6;i++) printf("%d",A[i]);
    int B[] = {1,1,1,1,1,1};
    printf("\nB: ");
    for(int i = 0; i<6;i++) printf("%d",B[i]);
    printf("\n");
    int C[7] = {};
    C[6] = (A[5]+B[5])%2;
    C[5] = (A[5]+B[5])/2;
    for (int i = 4; i>=0 ;i--){
        C[i] = (A[i]+B[i]+C[i+1])/2;
        C[i+1]= (A[i]+B[i]+C[i+1])%2;
    }
     printf("\nC:");
    for(int i = 0;i<7;i++) printf("%d",C[i]);
}