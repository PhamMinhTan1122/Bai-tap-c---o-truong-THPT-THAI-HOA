#include "../include.cpp"
int main()
{
    int fibonacy = 0, InPut, temp_1 = 1, temp_2 = 1, Count = 3;
    printf("Nhap so lan hien thi Fibonacy tren man hinh: ");
    cin >> InPut;
    printf("So fibonacy la %d %d ", temp_1, temp_2);
    while (InPut >= Count)
    {
        fibonacy = temp_1 + temp_2;
        temp_1 = temp_2;
        temp_2 = fibonacy;
        printf("%d ", fibonacy);
        Count++;
    }
}