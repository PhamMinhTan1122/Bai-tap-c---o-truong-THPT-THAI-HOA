#include "../include.cpp"
int main()
{
<<<<<<< HEAD
    int a, tong = 0, InPut = 0;
    cin >> InPut;
    if (InPut == 0)
    {
        printf(".......");
    }
    else
    {
        while (InPut != 0)
        {
            cin >> a;
            tong += a;
            InPut--;
        }
        cout << tong << endl;
    }
=======
    int InPut,Sum = 0, Count = 1, InPut_Loop;
    cout << "Nhap gioi han so lan nhap: ";
    cin >> InPut;
    if (InPut == 0)
    {
        printf("INVALID");
    } 
    else 
    {
        while (InPut >= Count)
        {
            printf("Nhap so thu %d: ",Count);
            cin >> InPut_Loop;
            Sum += Count;
            Count++;
        }
        printf("Tong tu 1 den %d la %d", InPut, Sum);
    }
    
>>>>>>> c8d04a92ae3bd7e4b6d031e7a4208b0a3dd2929e
}