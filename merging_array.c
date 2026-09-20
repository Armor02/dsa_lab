#include<stdio.h>
int main(){
    int arr1[100],arr2[100],arr3[200];
    int n1,n2;
    printf("Enter the size of arr1 : ");
    scanf("%d",&n1);
    
    printf("Enter the elemensts of arr1 : ");
     for(int i = 0;i<n1;i++){
        scanf("%d",&arr1[i]);
     }
    printf("Enter the size of arr1 : ");
    scanf("%d",&n2);
    
    printf("Enter the elemensts of arr2 : ");
    for(int i =0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    int i =0;
    int j =0;
    int k =0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    printf("Printing the sorted array: ");
    for(int i = 0;i<n1+n1;i++){
        printf("%d ",arr3[i]);
    }
    return 0;
    

}