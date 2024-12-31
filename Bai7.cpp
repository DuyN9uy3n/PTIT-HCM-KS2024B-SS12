#include <stdio.h>  

#define MAX_HANG 100
#define MAX_COT 100

void tao_ma_tran(int hang, int cot, double ma_tran[MAX_HANG][MAX_COT]) {  
    for (int i = 0; i < hang; i++) {  
        for (int j = 0; j < cot; j++) {  
            printf("Nhap gia tri cho phan tu o dong %d, cot %d: ", i + 1, j + 1);  
            scanf("%lf", &ma_tran[i][j]);  
        }  
    }  
}  

void in_ma_tran(int hang, int cot, double ma_tran[MAX_HANG][MAX_COT]) {  
    printf("Ma tran da nhap:\n");  
    for (int i = 0; i < hang; i++) {  
        for (int j = 0; j < cot; j++) {  
            printf("%-8.2lf", ma_tran[i][j]);  
        }  
        printf("\n");  
    }  
}  

int main() {  
    int hang, cot;  
    double ma_tran[MAX_HANG][MAX_COT]; 

    printf("Nhap so hang (toi da %d): ", MAX_HANG);  
    scanf("%d", &hang);  
    printf("Nhap so cot (toi da %d): ", MAX_COT);  
    scanf("%d", &cot);  

    if (hang > MAX_HANG || cot > MAX_COT || hang <= 0 || cot <= 0) {  
        printf("So hang hoac so cot khong hop le!\n");  
        return 1;
    }  

    tao_ma_tran(hang, cot, ma_tran);  
    in_ma_tran(hang, cot, ma_tran);  

    return 0;  
}