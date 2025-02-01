// Implement push and pop algoriths of stack using array.

#include<stdio.h>
#define n 5

int stack[n], top = -1;  // int stack[n], top=1; (Mistack)

void push();
void pop();
void show();
void peek();

int main(){
    int choice=0;
    printf("**********Stack Operation using array**********");
    printf("\n---------------------------------------------\n");
        while(choice!=5){
            printf("\n Chose one from the below options..\n");
            printf("\n1.Push\n 2.Pop\n 3.Show\n 4.Peek\n 5.Exit\n");
            printf("\n Enter your choice\n");
            scanf("%d", &choice);
            
                switch(choice){

                case 1:{
                    push();
                break;
                }

                 case 2:{
                    pop();
                break;
                 }

                 case 3:{
                    show();
                break;
                 }

                 case 4:{
                    peek();
                break;
                 }

                 case 5:{
                    printf("Exiting...\n");
                break;
                 }

               default:{
                printf("\n Please Enter valid choice..");
               }
                }
        }
        return 0;
}
void push() {
    int x;
    printf("Enter the value to push: ");
    scanf("%d", &x);
    
    if (top == n - 1) {
        printf("\nStack Overflow\n");
    } else {
        top = top + 1;
        stack[top] = x;
        printf("Element %d pushed successfully.\n", x);
    }
}

void pop() {
    if (top == -1) {
        printf("\nStack Underflow\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top = top - 1;
    }
}

void show() {
    if (top == -1) {
        printf("\nStack is empty.\n");
    } else {
        printf("\nStack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

void peek() {
    if (top == -1) {
        printf("\nStack is empty.\n");
    } else {
        printf("Topmost element is: %d\n", stack[top]);
    }
}

// void push(){
//     int x;
//     printf("Enter the value !\n");
//     scanf("%d", &x);
//         if(top == n-1){
//             printf("\n Overflow");
//         } else {
//             top= top+1;
//             stack[top]= x;
//         }
// }

// void pop(){
//     int num;
//     if(top==1){
//         printf("Underflow");
//     } else {
//         num=stack[top];
//         top= top-1;
//         printf("Deleted number..%d\n", num);
//     }
// }

// void show(){
//     int i;
//     for(i=top;i>=0;i--){
//         printf("%d\n", stack[i]);
//     } if(top==-1) {
//         printf("Stack is empty..\n");
//     }
// }

// void peek(){
//     if(top==-1){
//         printf("Stack is empty..\n");
//     } else {
//         printf("Top most element is..%d\n", stack[top]);
//     }
// }
