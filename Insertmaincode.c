#include<stdio.h>
int main()
{
    int a[]={-8, 4, 5, 6, 2, 9};
    int i,value,hole;
    for(i=0;i<6;i++){
        value=a[i];
    hole=i;
    while(hole>0 &&a[hole-1]>value)
    {
        a[hole]=a[hole-1];
        hole--;
    }
    a[hole]=value;
    }
    printf("sorted array:\n\n");
    for(i=0;i<6;i++){
            printf("%d ",a[i]);
    }

    printf("\n\n");
    return 0;
}
