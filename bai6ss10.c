#include <stdio.h>
int main(){
    int arr[]={1,2,3,2,1,5,6,7,6,5,4,2,3,4}, j=0, N, size=sizeof(arr)/sizeof(arr[0]);
    printf("Hãy nhập phần tử cần tìm");
    scanf("%d", &N);
    int search[size];
    for (int i=0;i<size;i++){
        if (arr[i]==N){
            search[j]=i;
            j++;
        }
    }
    printf("Phần tử cần tìm nằm ở:\n");
    for(int i=0;i<j;i++){
        printf("arr[%d] ", search[i]);
    } 
    return 0;  

}