#include "../include.cpp"
int main()
{
    int InPut;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
    cout << "So le nho hon hoac bang\n";
    while (InPut >= 0)
    {
        if (InPut % 2 != 0)
        {
            //dao nguoc thu tu so
            printf("%d\t", InPut);
        }
        InPut--;
    }
}