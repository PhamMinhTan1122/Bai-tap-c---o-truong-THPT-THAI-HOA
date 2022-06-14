#include "../include.cpp"
int main()
{
    
    int InPut, a;
    printf("Nhap so: ");
    cin >> InPut;
    int i = 2;
    bool result = true;
    if (InPut == 1)
    {
        result = false;
    }
    else if (InPut < 4)
    {
        result = true;
    }
    else if (i < InPut)
    {
        for (i = 2; i <= sqrt(InPut); i++)
        {
            if (InPut % i == 0)
                result = false;
        }
        if (result == true)
        {
            printf("%d la so nguyen to\n", InPut);
        }
        else
        {
            printf("%d khong phai so nguyen to\n", InPut);
        }
    }
}
