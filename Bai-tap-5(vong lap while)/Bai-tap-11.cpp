#include "../include.cpp"
int main()
{
    int InPut,count = 1;;
    cout << "Moi ban nhap cuu chuong n\n";
    cin >> InPut;
    // xu li

    while (count <= 10)
    {
        printf("%d x %d = %d\n", InPut, count, InPut * count);
        count++;
    }
}