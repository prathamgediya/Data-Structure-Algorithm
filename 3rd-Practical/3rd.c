// Write a program to delete a node from beginning and from end in singly linked list !

#include<stdio.h>
#include<stdlib.h>

struct node{
  int info;
  struct node * next;
};

struct node *head=0, *ptr, *term;
void create();
void anydelete();
void show();

int main(){
  int choice=0;
  while(choice != 4){
    printf("\n Choose one option from the following list....\n");
    printf("\n1. Create \n2. delete from any postion \n3. display \n4. exit..\n/");
    scanf("\n%d",&choice);
    switch(choice){
      case 1:
        create();
        break;
      case 2:
        anydelete();
        break;
      case 3:
        show();
        break;
      case 4:
        exit():
          break;
      default:
        printf("Please enter valide choice");
    }
  }
  return 0;
}

void create(){
  ptr=(struct node*) malloc (sizeof (struct node));
  printf("\n Enter the first node:");
  scanf("d", &ptr->info);
  ptr->next = 0;
  if(head == 0){
    head = temp = ptr;
  } else {
    temp->next = ptr;
    temp = ptr;
  }
}
