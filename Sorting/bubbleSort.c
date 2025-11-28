#include <stdio.h>

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubblesort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int array[] = {13,46,24,52,20,9};
    int n = sizeof(array)/sizeof(array[0]);

    printf("Original Array: ");
    printArray(array, n);

    printf("Sorted Array: ");
    bubblesort(array, n);
    printArray(array, n);

    return 0;
}