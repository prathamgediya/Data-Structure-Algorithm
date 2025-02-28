// Write a program to create a node in singly linked list

#include <stdio.h>
#include <stdlib.h>
    struct Node
    {
        int data;
        struct Node* next;
    };
    struct Node* createNode(int data);
    void displayList(struct Node* head);
    
    int main()
    {
       struct Node* head=NULL;
       struct Node* temp=NULL;
       int choice,data;
       
       while(1)
       {
        printf("\n1.Create a node\n2.Display list\n3.Exit\n");
        
        printf("Enter your choice");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
            printf("Enter data for the node:");
            scanf("%d",&data);
            
            if(head==NULL)
            {
                head=createNode(data);
            }
            else
            {
                temp=head;
                while(temp->next !=NULL)
                {
                    temp=temp->next;
                }
                temp->next=createNode(data);
            }
            printf("Notde created successfull!\n");
            break;
                
            case 2:
              
            printf("Linked list:");
            displayList(head);
            break;
                    
            case 3:
                
            printf("Exiting....\n");
            exit(0);
                
            default:
            printf("Invalid choice ! please try agine.\n");
            }
        }
        return 0;
    }
        struct Node* createNode(int data)
        {
            struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
            if(!newNode)
            {
                printf("memory allocation failed\n");
                exit(1);
            }
            newNode->data=data;
            newNode->next=NULL;
            return newNode;
        }
        void displayList(struct Node* head)
        {
            if(head==NULL)
            {
                printf("list is empty\n");
                return ;
            }
            struct Node* temp=head;
            while(temp!=NULL)
            {
                printf("%d->",temp->data);
                temp=temp->next;
            }
            printf("NULL\n");
        }
       
    
