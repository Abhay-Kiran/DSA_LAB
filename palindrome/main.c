// main file
// name:abhay Kiran
// regno : 261100620002
//

#include "header.h"

int main(){

int n;
int i;
int j;

printf("enter array size\n");
scanf("%d",&n);


  if(n==0 | n>1000){
   printf("array is invalid");
   return 1;
  }


int usrarr[n];

  for(i=0;i<n;i++){

   printf("enter elemnt %d",i+1);
   scanf("%d",&usrarr[i]);

  }

  if(palindrome(usrarr,n) ) {
    printf("1\n");

  }
  else{
    printf("0\n");
  }



return 0;


}
