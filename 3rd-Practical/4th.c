// Write a program to insert a node at beginning and at end in doubly linked list


#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* prev;
  struct node* next;
};

void insertbeginning (struct node** head, int data);
void insertend (struct node** head, int data);
void display (struct node* head);

int main(){
  struct node* head = NULL;
  int choice, data;
  while(1){
    printf("\n1. Insert at beginning \n2. Insert aT end \n3. Display \n4. Exit \n");
    printf("Enter your choice");
    scanf("%d", &choice);
    switch(choice){
      
      case 1:
        printf("Enter data to insert at the beginning:");
        scanf("%d", &data);
        insertbeginning(&head, data);
      break;

      case 2:
        printf("Enter data at the End:");
        scanf("%d", &data);
      break;

      case 3:
        printf("Doubly linked list:");
        display(head);
      break;

      case 4:
        printf("Exiting..\n");
        exit(0);
      default:
          printf("Invalid choice ! Please enter againg///\n");
    }
  }
  return 0;
}

void insertbeginning(struct node** head, int data){
  struct node* newnode= (struct node*) malloc (sizeof (struct node));
    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = *head;
      if(*head != NULL){
          (*head)-> prev = newnode;
      } *head = newnode;
          printf("node inserted at the beginning,\n");
}

void insertend(struct node** head, int data){
  struct node* newnode = (struct node*) malloc (sizeof(struct node));
    struct node* temp = *head;
    newnode->data = data;
    newnode->next = NULL;
      if(head == NULL){
          newnode->prev = NULL;
          *head = newnode;
          printf("node inserted at the end.\n");
          return;
    }
    while(temp->next != NULL){
      temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
    printf("node inserted at the end.\n");
}

void display (struct node* head){
  if(head == NULL){
    printf("List is empty..\n");
    return;
  }
    struct node* temp = head;
        while(temp != NULL){
          printf("%d", temp->data);
          temp = temp->next;
          }
}
