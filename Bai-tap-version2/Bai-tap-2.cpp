#include "C:\Users\Admin\Desktop\Bai-tap-c---o-truong\include.cpp"
int main()
{
    // in ra số lớn nhất trong bốn số nhập từ bàn phím.
    int a, b, c, d;
    printf("Nhap so thu nhat: \n");
    cin >> a;
    printf("Nhap so thu hai: \n");
    cin >> b;
    printf("Nhap so thu ba: \n");
    cin >> c;
    printf("Nhap so thu tu: \n");
    cin >> d;
    if (a > b && a > c && a > c)
    {
        printf("So lon nhat la: %d\n", a);
    }
    if (b > a && b >> c && b > d)
    {
        printf("So lon nhat la: %d\n", b);
    }
    if (c > a && c > b && c > d)
    {
        printf("So lon nhat la: %d\n", c);
    }
    if (d > a && d > b && d>c)
    {
        printf("So lon nhat la: %d\n", d);
    }
    return 0;
}