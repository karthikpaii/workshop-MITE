#include <stdio.h>

int main(){
    int arr[20];
    
    printf("Enter array Elements:");
    for(int i=0;i<10;i++){
     scanf("%d",&arr[i]);
    }
    
    printf("ELements are:");
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
}
