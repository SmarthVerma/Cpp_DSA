#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    scanf("%d",&n);
      int arr[n];  

    printf("Enter %d arrays:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Selection Sort
    for(int i = 0; i < n - 1; i++) {
        int min = INT_MAX;
        int index = -1;
        for(int j = i; j < n; j++) {
            if(arr[j] < min) {
                min = arr[j];
                index = j;
            }
        }
        swap(&arr[i], &arr[index]);
    }

    printf("Selection Sort: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Bubble Sort
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

    printf("Bubble Sort: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insertion Sort
    for(int i = 1; i < n; i++) {
        int j = i;
        while(j >= 1 && arr[j] < arr[j - 1]) {
            swap(&arr[j], &arr[j - 1]);
            j--;
        }
    }

    printf("Insertion Sort: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
