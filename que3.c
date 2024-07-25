#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void reverse(char s[]){

  int len=strlen(s);
  int start=0;
  int end=len-1;

  while(start<=end){
      char temp=s[start];
      s[start]=s[end];
      s[end]=temp;
      start++;
      end--;
  }
}

int main(){
   char str[100]="abcde";

   printf("original string: %s\n",str);

   reverse(str);
    printf("Reverse string: %s\n",str);

}
