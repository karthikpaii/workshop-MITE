#include <stdio.h>

int main(){
    int arr[20];
    
    printf("Enter array Elements:");
    for(int i=0;i<10;i++){
     scanf("%d",&arr[i]);
    }
    
    int lar=arr[0];
    
    for(int i=0;i<10;i++){
        if (arr[i]>lar)
            lar=arr[i];
    }
    
    printf("%d",lar);
}
