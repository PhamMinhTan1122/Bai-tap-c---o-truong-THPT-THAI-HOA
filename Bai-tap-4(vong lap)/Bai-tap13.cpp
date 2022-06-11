#include "../include.cpp"
int main()
{
    int InPut;
    printf("Nhap so nguyen to: ");
    cin >> InPut;
    if (InPut % InPut == 0 && InPut % 1 == 0)
    {
        printf("%d la so nguyen to", InPut);
    }
    else
    {
        printf("%d khong phai la so nguyen to", InPut);
    }
}