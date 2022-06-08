#include "c:\Users\Admin\Desktop\Bai-tap-c---o-truong\include.cpp"
int main()
{
    // kiem tra tam giac can
    int a,b,c;
    printf("Nhap canh a:\n");
    cin >> a;
    printf("Nhap canh b:\n");
    cin >> b;
    printf("Nhap canh c:\n");
    cin >> c;
    if (a == b || b == c || c== a)
    {
        printf("Day la tam giac can:\n");
    }
    else
    {
        printf("Day ko phai la tam giac can\n");
    } 
}