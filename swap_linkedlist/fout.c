/* all the function logics are written here along with strucutre definition*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

 struct Student{
    char name[50];
    int std_id;
    float marks;
    struct Student *next;
};

 

void insert(struct Student **Head){
struct Student *node = malloc(sizeof(struct Student));

if (node==NULL){
  printf("memoory allocation failed \n");
  return;
}
node->next=NULL;

printf("enter name\n");
scanf("%[ ^\n]",node->name);
printf("enter id");
scanf("%d",&node->std_id);
printf("enter marks");
scanf("%f",&node->marks);

if(*Head==NULL){
 *Head=node;
 printf("inserted successfully\n");
 return;
}

struct Student *temp;
temp=*Head;
while(temp->next != NULL){

 if(temp->std_id==node->std_id){
    printf("copied entry\n");
    return;
 } 
  temp=temp->next;
  printf("successfully inserted\n");


}

}



void switch(struct Student *Head,int value){

struct Student *temp=Head;
  if(Head==NULL){
  printf("no database found\n");
  return;
  }
  
  while(temp != NULL){

    if(temp->std_id=student_id_usr){
      

    }
  }







}
