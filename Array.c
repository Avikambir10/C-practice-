/*Max and min element in an array
#include<stdio.h>
int main(){
    int n;
    printf("Enter Size of array:");
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf(" %d\n ", arr[i]);
    }
    int max;
    max = arr[0];
    for (i=0;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    printf("Maximum Element of Array is %d\n",max);
    int min;
    min = arr[0];
    for (i=0;i<n;i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    printf("Minimimum Element of Array is %d",min);
    return 0;
}*/

/*Print sum of all element in array
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elments of array=");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    printf("Sum of elements in array is = %d",sum);
    return 0;
}*/

/*Print all negative and postive elements in array
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elemnts in Array\n");
    for ( int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements of you Array are:\n");
    for ( int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\nPostive Elements in Array are:\n");
    for ( int i = 0; i <n; i++){
        if(arr[i]>0){
            printf("%d ",arr[i]);
        }
    }
    printf("\nNegative Elements in Array are:\n");
    for ( int i = 0; i <n; i++){
        if(arr[i]<0){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}*/

/*Reverse elements of array then print array
#include<stdio.h>
void main(){
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter elemnts in Array: ");
    for ( int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    
    printf("\nReverse Elements of you Array are:");
    for ( int i=n-1; i>=0 ; i--){
        printf("%d ",arr[i]);
    }
}*/

/*Print sum of all subarray
#include<stdio.h>
int main(){
    int n;
    printf("Enter Size of Array:");
    scanf("%d",&n);
    printf("Enter Elements of Array:");
    int arr[n];
    for  (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);   
    }
    int total =0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i]*((n-i)+((n-i)*i));
    }
    printf("Total of Sub Array is: %d",total);
    
    
    return 0;
}

*/
