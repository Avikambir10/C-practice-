#include<stdio.h>
void quicksort(int arr[], int low,int high) {

    int partitionIndex;

    if (low <= high) {
        partitionIndex = partition(arr,low,high);
        quicksort(arr,low ,partitionIndex - 1);
        quicksort(arr,partitionIndex + 1,high); 
    }
}
void printarray(int *arr, int n) {
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main() {

    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    
    quicksort(arr , 0, n - 1);
    printarray(arr, n);
    return 0;
}    
