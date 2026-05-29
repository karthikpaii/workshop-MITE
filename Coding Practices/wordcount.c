#include<stdio.h>
#include <string.h>

int main(){
    char str[50];
    
    printf("Enter a String:");
    
    fgets(str,sizeof(str), stdin);
    
     int count=0;
     int i=0;
    
     
   for(i=0;i<strlen(str);i++)
       {
         if(str[i]==' ')
         {
         count=count+1;
       
         }
     }
     
     if (strlen(str)>0)
     {
         count=count+1;
     }
     
     printf("%d",count);
}
