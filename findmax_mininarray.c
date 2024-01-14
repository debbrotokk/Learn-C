#include<stdio.h>
int main()
{
   int a[100],i,n;
        printf("Enter the values of array: ");
        scanf("%d",&n);

    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int max = a[0];
    int min = a[0];


    for(i=1; i<n; i++)
            if (max < a[i]){
            max = a[i];

    
    if (min >a[i]){
        min = a[i];
    }
}

    printf("The maximum value:%d\n",max);
    printf("The minimum value:%d\n",min);
    
    return 0;
    
    
}
