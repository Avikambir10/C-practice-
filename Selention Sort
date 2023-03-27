#include<stdio.h>
void selection_sort(int* arr,int n){
    int indexofmin,temp,j;
    for (int i = 0; i < n-1; i++){
        indexofmin = i;
        for ( j = i+1; j < n; j++){
            if (arr[j]<arr[indexofmin]){
                indexofmin = j;
            }
        }
        temp  = arr[i];
        arr[i] = arr[indexofmin];
        arr[indexofmin]  = temp ; 
    }
}
void printarray(int* arr, int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    
}

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printarray(arr,n);

    selection_sort(arr, n);
    printf("\nAfter selection Sort: ");
    printarray(arr,n);
    return 0;
}
