int main()
{
    
    int arr[]={10,20,30,40,50};
    
    printf("sizeof(arr) is %d \n",sizeof(arr));
    printf("sizeof(arr[0]) is %d \n",sizeof(arr[0]));
    
    int size=sizeof(arr)/ sizeof(arr[0]);
    
    printf("Number of Elements %d \n",size);
    
}
