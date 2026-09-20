#include<stdio.h>
int main(){
    int arr1[100][100],arr2[100][100],arr3[100][100];
    int rows,cols;
    printf("Enter the no of rows :");
    scanf("%d",&rows);
    printf("Enter the no of columns : ");
    scanf("%d",&cols);
    printf("Enter the elements of first matrix: ");
    for(int i = 0;i<rows;i++){
        for(int j =0;j<cols;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the elements of second matrix: ");
    for(int i =0;i<rows;i++){
        for(int j =0;j<cols;j++){
            scanf("%d",arr2[i][j]);
        }
    }
    for(int i = 0;i<rows;i++){
        for(int j =0;j<cols;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("The addition matrix is :");
    for(int i = 0;i<rows;i++){
        for(int j =0;j<cols;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;

}