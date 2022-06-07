//tính chu vi và diện tích của hình chữ nhật 
#include <iostream>
using namespace std;

int main()
{
    short a,b; //a la chieu dai b la chieu rong
    printf("Nhap chieu dai: \n");
    cin >> a;
    printf("Nhap chieu rong: \n");
    cin >> b;
    printf("Chu vi hinh chu nhat la: %d\n", 2*(a+b));
    printf("Dien tich hinh chu nhat ka: %d\n", a*b);
    return 0;
}