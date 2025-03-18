// Write a program to delete a node from beginning and from end in singly linked list !

#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *next;
};

struct node *head = NULL, *ptr, *temp;
void create();
void anydelete();
void show();

int main() {
    int choice = 0;
    while (choice != 4) {
        printf("\n Choose one option from the following list....\n");
        printf("\n1. Create \n2. Delete from any position \n3. Display \n4. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
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
                exit(0);
                break;
            default:
                printf("Please enter a valid choice\n");
        }
    }
    return 0;
}

void create() {
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    printf("\nEnter the first node: ");
    scanf("%d", &ptr->info);
    ptr->next = NULL;
    if (head == NULL) {
        head = temp = ptr;
    } else {
        temp->next = ptr;
        temp = ptr;
    }
}

void anydelete() {
    struct node *nextnode;
    int pos, i;

    if (head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos == 1) {  // Delete from beginning
        temp = head;
        head = head->next;
        free(temp);
        printf("\nDeleted node from beginning.\n");
        return;
    }

    temp = head;
    for (i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("\nThere are fewer than %d elements in the list...\n", pos);
        return;
    }

    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
    printf("\nDeleted node at position %d.\n", pos);
}

void show() {
    int count = 0;
    if (head == NULL) {
        printf("List is empty..\n");
        return;
    }
    printf("\nPrinting values ...\n");
    temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->info);
        temp = temp->next;
        count++;
    }
    printf("Number of Nodes = %d\n", count);
}
