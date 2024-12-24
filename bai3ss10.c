#include <stdio.h>
int main(){
    int arr[]={2,5,6,9,8,7,1,3}, size=sizeof(arr)/sizeof(arr[0]);
    for (int i=1;i<size;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;

        }
        arr[j+1]=key;
    }
    for (int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}