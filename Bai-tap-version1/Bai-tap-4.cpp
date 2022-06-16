//tính chu vi, diện tích hình vuông có cạnh a (được nhập từ bàn phím).
#include "../include.cpp"
int main()
{
    short canh_a; //co the doi kieu du lieu "short"
    printf("Nhap canh a(don vi): \n");
    cin >> canh_a;
    printf("Chu vi hinh vuong canh %d(don vi) la: %d\n(don vi)", canh_a, 4*canh_a);
    printf("Dien tich hinh vuong canh %d(don vi) la: %d\n(don vi)", canh_a, canh_a*canh_a);
}
