#include "../include.cpp"
int main()
{
    int a,b,c;
    printf("Nhap canh a:\n");
    cin >> a;
    printf("Nhap canh b:\n");
    cin >> b;
    printf("Nhap canh c:\n");
    cin >> c;
    if ( a*a == b*b+c*c || b*b == a*a +c*c || c*c == a*a+ b*b)
    {
        printf("Day la tam giac vuong\n");
    }
    else
    {
        printf("Day ko phai la tam giac vuong\n");
    }
}