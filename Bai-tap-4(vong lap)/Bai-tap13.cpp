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
<<<<<<< HEAD
    else if (i < InPut)
    {
        for (i = 2; i <= sqrt(InPut); i++)
=======
    else if (i < c)
    { 
        result=true;
        result = false;
        for (i = 2; i <= c; i++)
>>>>>>> c8d04a92ae3bd7e4b6d031e7a4208b0a3dd2929e
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
