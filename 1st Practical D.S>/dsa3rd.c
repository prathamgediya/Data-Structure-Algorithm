// Write program to search an element using binary search method.

#include <stdio.h>
    int main(){
        int low, high,mid,n,i,num,a[100];
        printf("Enter the size of the list");
        scanf("%d", &n);

        printf("Enter %d Integer values in ascending order\n", n);;

        for(i=0;i<n;i++){
            scanf("%d", &a[i]);
            printf("Enter value to be search:");
            scanf("%d", &num);
        }

        low = 0;
        high = n - 1;

        while(low<=high){
            mid=(low+high)/2;
            if(num<a[mid]){
                high = mid -1;
            } else {
                if(num>a[mid]){
                    low = mid + 1;
                } else if(num == a[mid]){
                    printf("\n Search is Done...\n");
                    printf("\n Search value : %d at Location: %d", num, mid +1);
                    break;
                }
            }
        }

        if(low>high){
            printf("Element not found in the list");
        }
        return 0;
    }
