#include<stdio.h>
int main(){
    int a[10][10],b[10][10],arr[10][10];
    int r,c;
    printf("Enter the no of rows: ");
    scanf("%d",&r);
    printf("Enter the no of columns: ");
    scanf("%d",&c);
    printf("Enter the elements of 1st array: ");
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second array: ");
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for (int i= 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
        arr[i][j] = 0;
        for (int k = 0; k < c; k++) {
            arr[i][j] = arr[i][j] + a[i][k] * b[k][j];
        }
    }
}
    printf("The multiplied array is: ");
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
    }
    return 0;

}