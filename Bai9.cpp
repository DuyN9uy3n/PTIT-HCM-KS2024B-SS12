#include <stdio.h>  
#include <stdlib.h>  
#include <stdbool.h>  

#define MAX_SIZE 100  

void nhapMang(int arr[MAX_SIZE][MAX_SIZE], int n, int m) {  
    printf("Nhap gia tri cac phan tu cua mang:\n");  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) {  
            printf("arr[%d][%d] = ", i, j);  
            scanf("%d", &arr[i][j]);  
        }  
    }  
}  

void inMang(int arr[MAX_SIZE][MAX_SIZE], int n, int m) {  
    printf("Gia tri cac phan tu cua mang:\n");  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) {  
            printf("%d ", arr[i][j]);  
        }  
        printf("\n");  
    }  
}  

void inGoc(int arr[MAX_SIZE][MAX_SIZE], int n, int m) {  
    printf("Cac phan tu o goc:\n");  
    printf("%d ", arr[0][0]);           
    printf("%d ", arr[0][m-1]);      
    printf("%d ", arr[n-1][0]);        
    printf("%d\n", arr[n-1][m-1]);       
}  

void inBien(int arr[MAX_SIZE][MAX_SIZE], int n, int m) {  
    printf("Cac phan tu nam tren bien:\n");  
    for (int j = 0; j < m; j++) printf("%d ", arr[0][j]);    
    for (int i = 1; i < n - 1; i++) printf("%d ", arr[i][0]);
    for (int j = 0; j < m; j++) printf("%d ", arr[n-1][j]); 
    for (int i = 1; i < n - 1; i++) printf("%d ", arr[i][m-1]); 
    printf("\n");  
}  

bool isPrime(int num) {  
    if (num < 2) return false;  
    for (int i = 2; i * i <= num; i++) {  
        if (num % i == 0) return false;  
    }  
    return true;  
}  

void inSoNguyenTo(int arr[MAX_SIZE][MAX_SIZE], int n, int m) {  
    printf("Cac phan tu la so nguyen to:\n");  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) {  
            if (isPrime(arr[i][j])) {  
                printf("%d ", arr[i][j]);  
            }  
        }  
    }  
    printf("\n");  
}  
void inDuongCheo(int arr[MAX_SIZE][MAX_SIZE], int n, int m) {  
    printf("Cac phan tu nam tren duong cheo chinh va cheo phu:\n");  
    for (int i = 0; i < n; i++) {  
        printf("%d ", arr[i][i]);       
        printf("%d ", arr[i][m - 1 - i]); 
    }  
    printf("\n");  
}  

int main() {  
    int n, m;  
    int arr[MAX_SIZE][MAX_SIZE];  

    printf("Nhap so dong (n): ");  
    scanf("%d", &n);  
    printf("Nhap so cot (m): ");  
    scanf("%d", &m);  

    int choice;  
    do {  
        printf("\nMENU\n");  
        printf("1. Nhap gia tri cac phan tu cua mang\n");  
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");  
        printf("3. In ra cac phan tu o goc theo ma tran\n");  
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");  
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");  
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");  
        printf("7. Thoat\n");  
        printf("Nhap lua chon: ");  
        scanf("%d", &choice);  

        switch (choice) {  
            case 1:  
                nhapMang(arr, n, m);  
                break;  
            case 2:  
                inMang(arr, n, m);  
                break;  
            case 3:  
                inGoc(arr, n, m);  
                break;  
            case 4:  
                inBien(arr, n, m);  
                break;  
            case 5:  
                inDuongCheo(arr, n, m);  
                break;  
            case 6:  
                inSoNguyenTo(arr, n, m);  
                break;  
            case 7:  
                printf("Thoat!\n");  
                break;  
            default:  
                printf("Lua chon khong hop le. Vui long nhap lai.\n");  
                break;  
        }  
    } while (choice != 7);  

    return 0;  
}