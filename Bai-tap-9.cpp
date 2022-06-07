// tính trung bình nhân của bốn số với điều kiện chỉ được sử dụng hai biến.
#include "include.cpp"
int main()
{
    // tinh trung binh nhan cua 4 so
    float a, tong_trung_nhan = 1.0;
    printf("Nhap so a: \n");
    cin >> a;
    tong_trung_nhan = tong_trung_nhan * a;
    printf("Nhap so b: \n");
    cin >> a;
    tong_trung_nhan = tong_trung_nhan * a;
    printf("Nhap so c: \n");
    cin >> a;
    tong_trung_nhan = tong_trung_nhan * a;
    printf("Nhap so d: \n");
    cin >> a;
    tong_trung_nhan = tong_trung_nhan * a;
    a = 1.0 / 4.0;
    printf("Trung binh nhan cua 4 so la: %.2f\n", pow(tong_trung_nhan, a));
}