#include <stdio.h>
int main(){
    int arr[]={3,5,7,6,8,9,1,2}, size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min = j;   
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    for (int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    return 0;
    
}