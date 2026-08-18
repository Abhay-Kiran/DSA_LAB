#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>


struct Student{
    char name[50];
    int std_id;
    float marks;
    struct Student *next;
};


void insert(struct Student **Head);






#endif 
