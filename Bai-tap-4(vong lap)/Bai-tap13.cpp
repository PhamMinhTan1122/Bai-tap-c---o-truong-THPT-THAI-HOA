#include "../include.cpp"
int main()
{
    int InPut, a;
    printf("Nhap so nguyen to: ");
    cin >> InPut;
    int i = 2;
    bool result;
    int c = (int)sqrt(InPut);
    cout << c<<endl;
    if (InPut == 1)
    {
        printf("%d khong phai so nguyen to\n", InPut);
    }
    else if (InPut < 4)
    {
        printf("%d la so nguyen to\n", InPut);
    }
    else if (i < c)
    { 
        result=true;
        for (i = 2; i <= c; i++)
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
