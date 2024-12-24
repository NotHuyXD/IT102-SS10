#include <stdio.h>

int main() {
    int r, c;
    printf("Mời nhập số hàng cho mảng: ");
    scanf("%d", &r);
    printf("Mời nhập số cột cho mảng: ");
    scanf("%d", &c);
    int arr[r][c];
    int temp[r * c];
    int index = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Phần tử của arr[%d][%d]:\n", i, j);
            scanf("%d", &arr[i][j]);
            temp[index++] = arr[i][j];
        }
    }

    for (int i = 0; i < index - 1; i++) {
        for (int j = i + 1; j < index; j++) {
            if (temp[i] > temp[j]) {
                int t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }

    index = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            arr[i][j] = temp[index++];
        }
    }

    printf("Mảng tăng dần là: \n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}