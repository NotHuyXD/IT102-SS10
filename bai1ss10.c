#include <stdio.h>
    int main(){
        int x;
        int arr[]={2,5,7,8,3}, size=sizeof(arr)/sizeof(arr[0]);
        printf("Hãy nhập phần tử muốn tìm trong mảng: ");
        scanf("%d", &x);
        for(int i=0;i<size;i++){
            int check=0;
            if (arr[i]==x){
                printf("Phần tử nằm ở arr[%d]", i);
            }
        }
        return 0;
        }