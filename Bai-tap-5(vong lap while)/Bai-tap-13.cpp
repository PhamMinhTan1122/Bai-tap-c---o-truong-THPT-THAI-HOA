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
        printf("%d khong phai so nguyen to\n", InPut);
    }
    else if (InPut < 4)
    {
        printf("%d la so nguyen to\n", InPut);
    }
    else if (i < InPut)
    {
        while (sqrt(InPut) >= i)
        {
            if (InPut % i == 0)
                result = false;
            if (result == true)
                printf("%d la so nguyen to\n", InPut);
            else
                printf("%d khong phai so nguyen to\n", InPut);
            i++;
            break;
        }
    }

    /*         for (i = 2; i <= sqrt(InPut); i++)
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
            } */
}
