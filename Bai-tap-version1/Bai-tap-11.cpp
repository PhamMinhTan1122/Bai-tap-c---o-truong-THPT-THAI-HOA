//Viết chương trình cho phép tính trung bình cộng của bốn số với điều kiện chỉ được sử dụng hai biến(Tức không được dùng thêm biến tạm)
#include "../include.cpp"
int main()
{
    float a,b;
    printf("Nhap so a: \n");
    cin >> a;
    printf("Nhap so b: \n");
    cin >> b;
    a = a +b;
    b = a - b;
    a = a - b;
    printf("Sau khi hoan doi la: a = %.f , b = %.f", a,b);
}