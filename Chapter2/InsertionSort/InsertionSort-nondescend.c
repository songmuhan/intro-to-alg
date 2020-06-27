#include<stdio.h>
//INSERTION-SORT(A)
int INSERTION-SORT(int *A,int n) // array A[n]
{
  int i = 0,key = 0;
  for(int j = 1 ; j < n ; j++){
  	key = A[j];
    i = j - 1;
    while(i>=0 && A[i]>key){
      A[i+1] = A[i];
        i = i - 1;
    }
    A[i+1] = key;
  }
}  

int main(){
    int A[] = {31,41,59,26,41,58};
    printf("Unsorted: ");
    for(int i = 0 ; i < 6;i++){
        printf("%d ",A[i]);
    }
    printf("\nSorted: ");
 /*   for (int j = 1; j < 6;j++){
        int key = A[j];
        int i = j - 1;
        while(i>=0&&A[i]>key){
            A[i+1] = A[i];
            i = i - 1;
        }
        A[i+1] = key; 
    }
  */

    INSERTION-SORT(A,6);

    for(int i = 0 ; i < 6;i++){
        printf("%d ",A[i]);
    }
    
}

