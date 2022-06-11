#include "../include.cpp"
int main()
{
    int InPut, sum = 0;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
    // xu li
    for (int i = 1; i < InPut; i++)
    {
        if (InPut % i == 0)
        {
            cout << i << endl;
            sum = sum + i;
        }
    }
    if (sum == InPut)
    {
        printf("So %d la so hoan chinh\n", InPut);
    }
    else
    {
        printf("So %d khong phai la so hoan chinh\n", InPut);
    }
}