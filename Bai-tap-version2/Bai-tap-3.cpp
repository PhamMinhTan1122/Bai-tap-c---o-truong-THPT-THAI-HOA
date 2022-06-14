
#include "../include.cpp"
int main()
{
    // in ra số lớn nhất trong bốn số nhập từ bàn phím bang 2 bien
    int a, max;
    printf("Nhap so thu nhat: \n");
    cin >> a;
    max = a;
    if (a > max)
    {
        max = a;
    }
    printf("Nhap so thu hai: \n");
    cin >> a;
    if (a > max)
    {
        max = a;
    }
    printf("Nhap so thu ba: \n");
    cin >> a;
    if (a > max)
    {
        max = a;
    }
    printf("Nhap so thu tu: \n");
    cin >> a;
    if (a > max)
    {
        max = a;
    }
    printf("kq la: %d", max);
    return 0;
}
