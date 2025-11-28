#include <stdio.h>

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionsort(int arr[], int n){
    for(int i = 0; i<n; i++){
        int min = i;
        for(int j = i; j<n; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int array[] = {13,46,24,52,20,9};
    int n = sizeof(array)/sizeof(array[0]);

    printf("Original Array: ");
    printArray(array, n);

    printf("Sorted Array: ");
    selectionsort(array, n);
    printArray(array, n);

    return 0;
}