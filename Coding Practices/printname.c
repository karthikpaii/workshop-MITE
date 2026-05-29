#include<stdio.h>

void main(){
    char college[50];
    
    printf("Enter the College Name:");
    scanf("%s",&college);
    printf("College is: %s \n",college);
}

//version 2


#include<stdio.h>

int main(){
    char str[50];
    
    printf("Enter a String:");
    
    if(fgets(str,sizeof(str), stdin)!=NULL){
        printf("You Entered: %s",str);
    }else
    printf("error");
}
