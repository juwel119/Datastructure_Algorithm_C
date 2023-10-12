#include<stdio.h>
int main()
{
    int arr[]={12,2,-5,3,-10};
    int i,j,size=5;
    for(i=0;i<size-1-i;i++){
        for(j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf(" \nafter sorting: \n");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
