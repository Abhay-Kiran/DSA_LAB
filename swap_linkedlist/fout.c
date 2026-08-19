/* all the function logics are written here along with strucutre definition*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

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
scanf(" %[^\n]",node->name);
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

temp->next=node;

}



void update(struct Student *Head,int value){

  struct Student *temp=Head;
   if(Head==NULL){
    printf("no database found\n");
    return;
   }
  int stid;
  int data;
  int choice;
  int new_id;
  int new_marks;
  char new_name[50];
    struct Student *val_temp;

   printf("enter student id you want to update\n") ;
   scanf("%d",&stid);


    if(Head==NULL){
      printf("no matching data found");

        }
      while(temp!=NULL){
        if(temp->std_id==stid){
          printf("enter which value to update:1name 2:id 3:marks 4: swap");
          scanf("%d",&choice);
          switch(choice){
           
            case 1:
              printf("enter new name");
              scanf(" %49[^\n]",new_name);
              strcpy(temp->name,new_name);
              break;
            case 2:
             printf("enter new id");
              scanf("%d",&new_id);
              temp->std_id=new_id;
              break;
            case 3:
              printf("enter new marks");
              scanf("%d",&new_marks);
              temp->marks=new_marks;
              break;



          }
        }
        temp=temp->next;
      }
    
}      

  void print(struct Student *head){
    {
        if(head==NULL)
        {
            printf("no data is in the database\n");
            return;
        }
        while(head!=NULL)
        {
            printf("Student id: %d  student name :%s  student marks:%f\n", head->std_id,head->name,head->marks);
            head=head->next;
        }
    }   
  }  



void swap(struct Student *Head)
{
    int id1, id2;
    int choice;

    struct Student *temp1 = Head;
    struct Student *temp2 = Head;

    printf("Enter first student ID: ");
    scanf("%d", &id1);

    printf("Enter second student ID: ");
    scanf("%d", &id2);

    /* Find first student */
    while (temp1 != NULL)
    {
        if (temp1->std_id == id1)
        {
            break;
        }

        temp1 = temp1->next;
    }

    /* Find second student */
    while (temp2 != NULL)
    {
        if (temp2->std_id == id2)
        {
            break;
        }

        temp2 = temp2->next;
    }

    /* Check if first student exists */
    if (temp1 == NULL)
    {
        printf("Student with ID %d not found\n", id1);
        return;
    }

    /* Check if second student exists */
    if (temp2 == NULL)
    {
        printf("Student with ID %d not found\n", id2);
        return;
    }

    printf("\nWhat do you want to swap?\n");
    printf("1. Name\n");
    printf("2. ID\n");
    printf("3. Marks\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
        {
            char temp_name[50];

            strcpy(temp_name, temp1->name);
            strcpy(temp1->name, temp2->name);
            strcpy(temp2->name, temp_name);

            printf("Names swapped successfully\n");
            break;
        }

        case 2:
        {
            int temp_id;

            temp_id = temp1->std_id;
            temp1->std_id = temp2->std_id;
            temp2->std_id = temp_id;

            printf("IDs swapped successfully\n");
            break;
        }

        case 3:
        {
            float temp_marks;

            temp_marks = temp1->marks;
            temp1->marks = temp2->marks;
            temp2->marks = temp_marks;

            printf("Marks swapped successfully\n");
            break;
        }

        default:
            printf("Invalid choice\n");
    }
}
      


