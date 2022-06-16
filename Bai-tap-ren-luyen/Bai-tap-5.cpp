#include "../include.cpp"
int main()
{
    int kw_InPut,gia;
    cout << "Nhap so kw cua thang: ";
    cin >> kw_InPut;
    if (kw_InPut >= 1 && kw_InPut <= 100)
    {
        gia = 5;
        printf("Gia: %d",gia);
    }
    else if (kw_InPut >= 101 && kw_InPut <= 150)
    {
        gia = 7;
        printf("Gia: %d",gia);
    }
    else if (kw_InPut >= 151 && kw_InPut <= 200)
    {
        gia = 10;
        printf("Gia: %d",gia);
    }
    else if (kw_InPut >= 201 && kw_InPut <= 300)
    {
        gia = 15;
        printf("Gia: %d",gia);
    }
    else if (kw_InPut > 300)
    {
        gia = 20;
        printf("Gia: %d",gia);
    }
    else
    {
        printf("INVALID");
    }
    
}