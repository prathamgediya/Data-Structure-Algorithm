// Pratham Gediya 
// implement array row major order and column major order.

#include<stdio.h>

#define ROWS 3
#define COLS 3

void printRowMajor(int arr[ROWS][COLS]){
    printf("Row-Major Order..\n");
        for(int i=0;i<ROWS;i++){
            for(int j=0;j<COLS;j++){
                printf("%d", arr[i][j]);
            }
printf("\n");
        }
}

void printColsMajor(int arr[ROWS][COLS]){
    printf("Column-MAjor Order..\n");
        for(int j=0;j<COLS;j++){
            for(int i=0;i<ROWS;i++){
                printf("%d", arr[i][j]);
            }
printf("\n");
        }
}

int main(){
    int arr[ROWS][COLS];

        printf("Enter element of a %dx%d array:\n", ROWS, COLS);
            for(int i=0;i<ROWS;i++){
                for(int j=0;j<COLS;j++){
                    printf("ELement [%d][%d]", i,j);
                    scanf("%d", &arr[i][j]);
                }
            }

printRowMajor (arr);
printColsMajor (arr);

return 0;
}
