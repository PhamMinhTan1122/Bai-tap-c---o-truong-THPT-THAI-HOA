#include "../include.cpp"
int main()
{
    int InPut;
    cout << "Moi ban nhap cuu chuong n\n";
    cin >> InPut;
    // xu li
    for (int i = 1; i <=10; i++)
    {
        printf("%d x %d = %d\n", InPut, i, InPut * i);
    }
}