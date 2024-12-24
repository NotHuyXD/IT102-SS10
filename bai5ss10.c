#include <stdio.h>
int main(){
    int arr[]={1,4,5,3,2,78,65,32}, size=sizeof(arr)/sizeof(arr[0]);
    for (int i=1;i<size;i++){
        int key=arr[i];
        int j =i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=key;
    }
    int N, l=0, r=size-1;
    printf("Hãy nhập phần tử cần tìm:");
    scanf("%d", &N);
    while (l<=r){
        int m=(l+r)/2;
        if (arr[m]==N){
            printf("Phần tử nằm ở arr[%d]", m);
            return 1;
        }
        else if(arr[m]>N){
            r=m-1;
        }
        else {
            l=m+1;
        }
    }
    printf("Phần tử không tồn tại");
    return 0;
}