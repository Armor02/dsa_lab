#include<stdio.h>
int main(){
    int arr[10][10],b[10][10];
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    printf("The array is : ");
    for(int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",arr[i][j]);
        }
    }
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            b[i][j]=arr[j][i];
        }
    }
    printf("The array after trnaspose: ");
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    return 0;

}