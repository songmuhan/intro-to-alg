#include<stdio.h>
int main(){
   int A[] = {1,2,3,4,5,6};
   printf("Unsorted:");
   for (int i=0;i<6;i++) printf("%d",A[i]);
   int flag = 0;
   for(int i = 0;i<6;i++){
       int key = A[i];
        flag = i;
       for( int j = i+1;j<6;j++){
           if(key > A[j]){
               key = A[j];
               flag = j;
           }   
       }
       A[flag] = A[i];
       A[i] = key;
   }
   printf("\nSorted:  ");
   for (int i=0;i<6;i++) printf("%d",A[i]);
   
}