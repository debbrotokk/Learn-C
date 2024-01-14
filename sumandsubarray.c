
#include <stdio.h>

int main() {

int row,col,i,j;
printf("Enter the number of row and col : ");
scanf("%d%d",&row,&col);

int mat1[row][col],mat2[row][col],sum[row][col],sub[row][col];
printf("Enter Your Matrix 1 :\n ");


for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        scanf("%d",&mat1[i][j]);
    }
}


printf("Enter Your Matrix 2 : \n");
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        scanf("%d",&mat2[i][j]);
        sum[i][j]=mat1[i][j]+mat2[i][j];
        sub[i][j]=mat1[i][j]-mat2[i][j];
    }
}


printf("Matrix addition : \n");
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        printf("%d ",sum[i][j]);
    }
    printf("\n");
}

printf("Matrix subtraction  : \n");
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        printf("%d ",sub[i][j]);
    }
    printf("\n");
}








    return 0;
}
