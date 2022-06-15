#include "../include.cpp"
int main()
{
    int fibonacy = 0, InPut, temp_1 = 1, temp_2 = 1;
    printf("Nhap so: ");
    cin >> InPut;
    if (InPut != 1)
    {
        printf("So fibonacy nho hon %d la %d %d ", InPut, temp_1, temp_2);
        do
        {
            fibonacy = temp_1 + temp_2;
            temp_1 = temp_2;
            temp_2 = fibonacy;
            if (fibonacy < InPut)
            {
                printf("%d ", fibonacy);
            }
        } while (InPut > fibonacy);
    }
    else
        printf("So fibonacy nho hon %d la %d %d", InPut, temp_1, temp_2);
}