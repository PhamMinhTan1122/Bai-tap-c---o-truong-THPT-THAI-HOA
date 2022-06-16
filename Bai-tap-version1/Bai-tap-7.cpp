// tính trung bình cộng của bốn số.
#include "../include.cpp"
int main()
{
    float a,b,c,d; //co the doi kieu du lieu "short"
    printf("Nhap so a: \n");
    cin >> a;
    printf("Nhap so b: \n");
    cin >> b;
    printf("Nhap so c: \n");
    cin >> c;
    printf("Nhap so d: \n");
    cin >> d;
    printf("Trung binh cong cua 4 so la: %.2f\n", (a+b+c+d)/4);
}