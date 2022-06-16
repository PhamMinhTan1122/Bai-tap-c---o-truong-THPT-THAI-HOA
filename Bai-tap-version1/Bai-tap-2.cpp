//nhập vào độ dài của cạnh hình lập phương a(so thuc).Tính diện tích xung quanh, diện tích toàn phần, thể tích
#include "../include.cpp"
using namespace std;
int main()
{
    float a; //co the doi kieu du lieu float
    printf("Nhap do dai canh a: \n");
    cin >> a;
    printf("Dien tich xung quanh la: %.2f\n", 4*(a*a));
    printf("Dien tich toan phan la: %.2f\n",6*(a*a));
    printf("The tich la: %.2f\n", a*a*a);
    
}