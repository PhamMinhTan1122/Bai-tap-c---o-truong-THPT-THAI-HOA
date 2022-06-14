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
    if( a == b && b == c && c == a)
    {
        printf("Day la tam giac deu\n");
    }
    else
    {
        printf("Day ko phai la tam giac deu");
    }
}