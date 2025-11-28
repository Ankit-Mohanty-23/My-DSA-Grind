#include <stdio.h>

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void insertionsort(int arr[], int n){
    for(int i = 1; i<n; i++){
        int curr = arr[i];
        int j = i-1;

        while(j>=0 && curr<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
}

int main(){
    int array[] = {13,46,24,52,20,9};
    int n = sizeof(array)/sizeof(array[0]);

    printf("Original Array: ");
    printArray(array, n);

    printf("Sorted Array: ");
    insertionsort(array, n);
    printArray(array, n);

    return 0;
}