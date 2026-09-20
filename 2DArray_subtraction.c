#include<stdio.h>
int main(){
    int a[10][10],b[10][10],arr[10][10];
    int r,c,n1,n2;
    printf("Enter the  no of rows: ");
    scanf("%d",&r);
    printf("Enter the no of coloumns: ");
    scanf("%d",&c);
    printf("Enter the elements of first matrix: ");
    for(int i = 0 ;i<r;i++){
        for(int j =0;j<c;j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second matrix: ");
    for(int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            arr[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("Array after subtraction: ");
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
    }
    return 0;


}