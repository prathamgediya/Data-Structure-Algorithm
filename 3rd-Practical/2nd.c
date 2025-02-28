// Write a program to insert a node at beginning and at end in singly linked list.

#include <stdio.h>
#include <stdlib.h>

  struct node{
    int info;
    struct node *next;
  }

  struct node *head, *ptr, *temp;
  void beginsert();
  void lastinsert();
  void show();

  int main(){
    int choice = 0;
    while(choice != 4){
      printf("\n Choose one option from the following list..\n");
      printf("\n 1. Insert node at beginnning \n 2. Insert node at end \n 3. Display \n 4. Exit\n");
      scanf("\n%d", &choice);

      switch(choice){

        case 1:
          beginsert();
          break;

        case 2:
          lastinsert();
          break;

        case 3:
          show();
          break;

        case 4:
          exit(0);
          break;

        default:
          printf("Please enter valid choice...");
      }
    }
    return 0; // Maybe this in not in code.
  }

void beginsert(){
  ptr = (struct node*) malloc(sizeof(struct node));
    if(ptr == NULL){
      printf("\n Overflow");
    } else {
        printf("\n Enter the first node:");
        scanf("%d", &ptr->info);
        ptr->next = head;
        head = ptr;
        printf("\n Node inserted\n");
    }
}

void lastinsert(){
  ptr = (struct node*) malloc(sizeof(struct node));
  printf("\n Enter the last node");
  scanf("%d", &ptr->info);
  ptr->next = 0;
  temp = head;
  while(temp->next != NULL){
    temp = temp->next;
  }
  temp->next = ptr;
}

void show(){
  if(head == 0){
    printf("Listy is empty...");
  } else {
      printf("\n Printing values...\n");
      temp = head;
      while(temp != 0){
        printf("%d\n", temp->info);
        temp = temp->next;
      }
  }
}
