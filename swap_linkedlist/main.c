/*Main file for swapping infromation 
  1.if list is empty nothing to update
  2.ask user which student id they want to update
  3.var temp will traverse list till temp==null to find req data
  4.when temp==id temp will point directly to the data
  5.make the application menu based*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "header.h"


int main()
{
struct Student *Head=NULL;

int select;

while(select != 6) {
  
 printf("select preffered action (1)insert data\n");
 printf("(2)case\n");
 scanf("%d",&select);
  switch(select){
    case 1:
      insert(&Head);
      break;
    case 2:
      break;
  }
}

    

    



  return 0;
}
