#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 1000

int isUnique(int num, int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return 0;  
        }
    }
    return 1;  
}
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }
        if (max_index != i) {
            int temp = arr[i];
            arr[i] = arr[max_index];
            arr[max_index] = temp;
        }
    }
}
int main() {
    int arr[ARRAY_SIZE];
    srand(time(NULL));

    for (int i = 0; i < ARRAY_SIZE; i++) {
        int num;
        do {
            num = rand() % 9999 + 1;  
        } while (!isUnique(num, arr, i));  
        arr[i] = num;
    }
    selectionSort(arr, ARRAY_SIZE);
    printf("Sorted Array in Reverse Order:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
