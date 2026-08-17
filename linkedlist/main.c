//name: abhayKiran M , 26110062002




#include "header.h"
int main()
{
    struct student *head=NULL;
    load_db(&head);
    int choice,value1,value2;
    while(choice != 6)
    {
        printf("welcome student database \n");
        printf("1.Inserting a student data \n");
        printf("2.Delete a student data \n ");
        printf("3.Find a student from database \n ");
        printf("4.Print all the students \n ");
        printf("5. Save database\n");
        printf("6.Exit \n");
    
        printf("enter the choice: ");
        scanf("%d",&choice);
        if(choice==2)
        {
            printf("give the student id to be deleted \n");
            scanf("%d",&value1);
        }
        if(choice==3)
        {
            printf("give the student id to be found in database \n");
            scanf("%d",&value2);
        }
        switch(choice)
        {
            case 1:insert(&head);
                break;
            case 2:delete(&head,value1);
                break;
            case 3:find(head,value2);
                break;
            case 4:print(head);
                break;
            case 5:save_db(head);
                break;
            case 6:
                break;
        }
    }
    
}

    void insert(struct student **head)
    {
            struct student *newnode=malloc(sizeof(struct student));
        if(newnode==NULL)
        {   printf("Memory allocation failed\n");
            return;
        }

        newnode->next = NULL;

        printf("enter student id: ");
        scanf("%d",&newnode->id);
        printf("enter student name: ");
        scanf(" %[^\n]",newnode->name);
        printf("enter student age: ");
        scanf("%d",&newnode->age);
        printf("enter student course: ");
        scanf(" %[^\n]",newnode->course);
        printf("enter student marks: ");
        scanf("%d",&newnode->marks);

        if(*head==NULL)
        {
            *head=newnode;
            printf("inserted succesfully\n");
            return;
        }
        struct student *temp;
        temp=*head;
        while(temp->next!=NULL)
        {
            if(temp->id==newnode->id)
            {
                printf("duplicate entries\n");
                return;
            }
            temp=temp->next;
        }
        temp->next=newnode;
        printf("inserted succesfully\n");
    }

    void print(struct student *head)
    {
        if(head==NULL)
        {
            printf("no data is in the database\n");
            return;
        }
        while(head!=NULL)
        {
            printf("Student id: %d  student name :%s  student age: %d  student course:%s  student marks:%d\n", head->id,head->name,head->age,head->course,head->marks);
            head=head->next;
        }
    }   
    void delete(struct student **head,int value)
    {
        struct student *temp=*head;
        struct student *prev=NULL;
        if(temp==NULL)
        {
            printf("No database found\n");
            return;
        }
        if (temp != NULL && temp->id==value) 
        {
        *head = temp->next;
        free(temp);
        return;
        }
        while (temp != NULL && temp->id!=value) 
        {
        prev = temp;
        temp = temp->next;
        }
        prev->next = temp->next;
        free(temp);
    }
    void find(struct student *head,int value)
    {
        struct student *temp=head;
        if(head == NULL)
        {
            printf("No database found\n");
        }
        while(temp!=NULL)
        {
            if(temp->id==value)
            {
                printf("Student id: %d  student name :%s  student age: %d  student course:%s  student marks:%d\n", temp->id,temp->name,temp->age,temp->course,temp->marks);
                return;
            }
            temp=temp->next;
        }
        printf("student id is not found\n");
    }

    
    void save_db(struct student *head)
    {
        if(head==NULL)
        {
            printf("The database is empty\n");
            return;
        }
        FILE *ptr;
        ptr=fopen("database.txt","w");
        if(ptr==NULL)
        {
            printf("No such file is present\n");
            return;
        }
        while(head!=NULL)
        {
            fprintf(ptr,"%d,%s,%d,%s,%d\n",head->id,head->name,head->age,head->course,head->marks);
            head=head->next;
        }
        printf("saved database succesfully\n");
        fclose(ptr);
    }

    void load_db(struct student **head)
    {
        FILE *ptr=fopen("database.txt","r");
        if(ptr==NULL)
        {
            printf("No such file is present\n");
            return;
        }

        struct student *newnode = NULL;

        while(1)
        {
            newnode = malloc(sizeof(struct student));
            if(newnode==NULL)
            {
                printf("memory allocation failed\n");
                return;
            }
            

            int ret = fscanf(ptr,"%d,%[^,],%d,%[^,],%d",&newnode->id,newnode->name,&newnode->age,newnode->course,&newnode->marks);
            if(ret == EOF)
            {
                free(newnode);
                break;
            }
            if(ret != 5)
            {
                printf("Invalid data\n");
                free(newnode);
                return;
            }
            newnode->next = NULL;

            if(*head == NULL)
            {
                *head = newnode;
            }
            else
            {
                struct student *temp = *head;

                while(temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = newnode;
            }
        }
        
        printf("Loaded database successfully\n");
        fclose(ptr);
    }
