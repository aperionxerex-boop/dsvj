#include<stdio.h>
#include<stdlib.h>
 struct Node
 {
    int data ;
    struct Node *next;
    
 };
 int main()
 {
   struct Node *head = NULL;
   struct Node *newNode;
   struct Node *temp;

   newNode = malloc(sizeof(struct Node));
   newNode->data = 10;
   newNode->next = NULL;
   head = newNode;

   newNode = malloc(sizeof(struct Node));
   newNode->data = 20;
   newNode->next = NULL;
   head->next = newNode;

   newNode = malloc(sizeof(struct Node));
   newNode->data = 30;
   newNode->next = NULL;
   head->next->next = newNode;

   newNode = malloc(sizeof(struct Node));
   newNode->data = 40;
   newNode->next = NULL;
   head->next->next->next = newNode;

   temp = head;

   while(temp != NULL)
   {
    if(temp->data = 30)
    {
      printf("FOUND");
      break;
    }
    temp = temp->next;
   }
   return 0;
   
   
 }