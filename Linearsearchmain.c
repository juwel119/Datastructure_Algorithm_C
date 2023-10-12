#include<stdio.h>
int main()
{
    int a[]={-3,4,1,88,5,7};
    int searchitem=88;
    int i;
    for(i=0;i<6;i++){
        if(a[i]==searchitem){
            printf("Item found at index: %d\n",i);
            return 0;
        }
    }
    printf("Item not found.\n");
    return 0;
}
