//chương trình tính chu vi và diện tích hình tròn có bán kính r 
#include "../include.cpp"
int main()
{
    float r; //co the doi kieu du lieu float
    printf("Nhap ban kinh r:\n");
    cin >> r;
    printf("Chu vi hinh tron la: %.2f\n", r*2*pi);
    printf("Dien tich hinh trong la: %.2f\n", r*r*pi);
}