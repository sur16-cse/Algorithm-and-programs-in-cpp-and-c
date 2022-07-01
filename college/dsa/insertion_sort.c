#include<stdio.h>

#define size 5
void insertionSort(int arr[], int n);
int main(){
    int arr[size],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertionSort(arr,n);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}

void insertionSort(int arr[],int n){
    int i, j, temp;
    for(i=1;i<n;i++)
    {
    temp = arr[i];
    j = i-1;
        while((temp < arr[j]) && (j>=0))
        {
            arr[j+1] = arr[j];
            j--;
        }
    arr[j+1] = temp;
    }
}