#include<stdio.h>
int main(){
    int arr[]={5,3,6,2,7};
    int n =5;
    int key,j;
    for(int i =1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printf("Sorted array: ");
    for(int i =0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}