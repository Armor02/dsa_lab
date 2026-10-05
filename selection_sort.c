#include<stdio.h>
int main(){
    int arr[]={5,3,2,4,1};
    int n= 5;
    int miniindex,temp;
    for(int i=0;i<n-1;i++){
        miniindex =i;
        for(int j =i+1;j<n;j++){
            if(arr[j]>arr[miniindex]){
                miniindex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[miniindex];
        arr[miniindex]=temp;
    }
    printf("Soreted array:  ");
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}