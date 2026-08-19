#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    int std_id;
    float marks;
    struct Student *next;
};


void insert(struct Student **Head);

void update(struct Student *Head,int value);

void print(struct Student *head);
 

void swap(struct Student *Head);
#endif 
