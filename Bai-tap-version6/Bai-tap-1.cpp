#include "../include.cpp"
int main()
{
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
            Sum += InPut_Loop;
            Count++;
        }
        printf("Tong tu 1 den %d la %d", InPut, Sum);
    }
    
}