#include "include.cpp"
int main()
{
    float a,b;
    printf("Nhap so a: \n");
    cin >> a;
    printf("Nhap so b: \n");
    cin >> b;
    float temp =a; // temp la trung gian
    a = b;
    b = temp;
    printf("Sau khi hoan doi la: a = %.f , b = %.f", a,b);
}