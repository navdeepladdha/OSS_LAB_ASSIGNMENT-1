#include<stdio.h>
#include<stdlib.h>

int main(){

   int n;
   printf("enter value of n= ");
   scanf("%d",&n);

   int arr[n];

   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   float sum=0;

   for(int i=0;i<n;i++){
    sum=sum+arr[i];
   }
   float avg=sum/n;

   printf("avg= %f",avg);




}
