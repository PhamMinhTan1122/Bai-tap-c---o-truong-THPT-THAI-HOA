#include "../include.cpp"
int main()
{
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
}