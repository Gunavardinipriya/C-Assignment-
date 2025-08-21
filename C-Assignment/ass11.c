#include <stdio.h>

int main() {
    int arr[100], limit, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &limit);
    printf("Enter %d numbers:\n", limit);
    for(int i = 0; i < limit; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Even numbers are:\n");
    for(int i = 0; i < limit; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            count++;
        }
    }
    printf("\nTotal count of even numbers: %d\n", count);
}
