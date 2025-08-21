/*#include<stdio.h>
int main()
{
    /*int limit,i,a[6],b[6];
    printf("Enter the limit:\t");
    scanf("%d",&limit);
    printf("Enter the A value: \t");
    scanf("%d",&a[]);
    printf("Enter the B value: \t");
    scanf("%d",&b[6]);
    //for(i=0;i<limit;i++){*/
    /*int limit;
    int a[]={10,20,30,40,50}
    int b[]={15,25,35,45,55}

        a[]=a[]+b[];
        b[]=a[]-b[];
        a[]=b[]-a[];
    printf("%d\n",a[]);
    printf("%d\n",b[]);
  //  }
}*/




#include <stdio.h>

#define SIZE 5  
int arr1[SIZE], arr2[SIZE];  


void read_data() {
    printf("Enter elements of first array:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr2[i]);
    }
}


void print_data() {
    printf("First array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nSecond array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr2[i]);
    }

    printf("\n");
}


void swap_arrays() {
    for (int i = 0; i < SIZE; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}


int main() {
    read_data();
    
    printf("\nBefore swapping:\n");
    print_data();

    swap_arrays();

    printf("\nAfter swapping:\n");
    print_data();
}
