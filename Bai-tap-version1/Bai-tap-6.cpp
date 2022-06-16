//tính diện tích của tam giác có ba cạnh là a,b,c (được nhập từ bàn phím)

#include "../include.cpp"
int main()
{
    short a,b,c,p; // a,b,c la canh cua tam giac (co the doi kieu du lieu "short")
    printf("Nhap canh a: \n");
    cin >> a;
    printf("Nhap canh b: \n");
    cin >> b;
    printf("Nhap canh c: \n");
    cin >> c;
    p = (a+b+c)/2; //theo cong thuc luong giac trong tam giac lop 10
    printf("Dien tich tam giac cua ba canh a,b va c la: %.2f\n", sqrt(p*(p-a)*(p-b)*(p-c)));
}