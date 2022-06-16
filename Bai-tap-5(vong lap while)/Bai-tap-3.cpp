#include "../include.cpp"
int main()
{
    int InPut,sum = 0;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
    cout << "So le nho hon hoac bang\n";
    while (InPut >= 0)
    {
        if (InPut % 2 != 0)
        {
            sum += InPut;
        }
        InPut--;
    }
    printf("%d\n", sum);
}