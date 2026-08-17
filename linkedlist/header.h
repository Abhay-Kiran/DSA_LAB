#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include<stdlib.h>
struct student
{
    int id;
    char name[30];
    int age;
    char course[30];
    int marks;
    struct student *next;
};

void insert(struct student **head);
void delete(struct student **head,int value);
void find(struct student *head,int value);
void print(struct student *head);
void save_db(struct student *head);
void load_db(struct student **head);
#endif // HEADER_H

