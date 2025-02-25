// Today I don't have time to code !
// 25/02 again i don't have much more time today.
// Implement insert, delet algorithms of queue using array
// This correct code !!!

#include <stdio.h>
#include <stdlib.h>
#define N 5  // Correct macro definition

int queue[N];
int front = -1;
int rear = -1;

void insert();
void delet();
void display();
void peek();

int main() {
    int choice;
    while (1) {
        printf("\n1. Insert an element\n2. Delete an element\n3. Display the queue\n4. Peek\n5. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delet();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                exit(0);
            default:
                printf("\nEnter a valid choice!\n");
        }
    }
    return 0;
}

void insert() {
    int x;
    printf("\nEnter the element: ");
    scanf("%d", &x);
    
    if (rear == N - 1) {
        printf("Overflow...\n");
        return;
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = x;
    printf("Inserted: %d\n", x);
}

void delet() {
    if (front == -1 || front > rear) {
        printf("\nUNDERFLOW\n");
        return;
    } else {
        printf("Deleted element: %d\n", queue[front]);
        front++;
        if (front > rear) { // Reset queue when all elements are deleted
            front = rear = -1;
        }
    }
}

void display() {
    int i;
    if (front == -1 || front > rear) {
        printf("\nEmpty queue\n");
    } else {
        printf("\nQueue elements:\n");
        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

void peek() {
    if (front == -1 || front > rear) {
        printf("\nEmpty queue\n");
    } else {
        printf("Front element: %d\n", queue[front]);
    }
}
