#include "../include.cpp"
int main()
{
    long long InPut, sum = 0;
    cout << "Nhap so\n";
    cin >> InPut;
    for (int i = 1; i < InPut; i++)
    {
        sum =0;
        for (int z = 1; z<i; z++)
        {
            if (i % z == 0)
            {
                sum += z;
            }
        }
        if (sum == i)
        {
            cout << i << endl;
        }
    }
}