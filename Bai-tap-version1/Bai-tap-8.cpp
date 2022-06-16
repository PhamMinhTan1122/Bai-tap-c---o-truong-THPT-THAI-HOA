#include "../include.cpp"
int main()
{
    float a,tong_trung_cong=0;
    printf("Nhap so a: \n");
    cin >> a;
    tong_trung_cong += a;
    printf("Nhap so b: \n");
    cin >> a;
    tong_trung_cong += a;
    printf("Nhap so c: \n");
    cin >> a;
    tong_trung_cong += a;
    printf("Nhap so d: \n");
    cin >> a;
    tong_trung_cong += a;
    printf("Trung binh cong cua 4 so la: %.2f\n", tong_trung_cong/4);
}