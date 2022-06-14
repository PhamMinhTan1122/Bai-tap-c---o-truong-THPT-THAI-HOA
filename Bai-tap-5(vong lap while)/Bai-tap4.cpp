#include "../include.cpp"
int main()
{
    int InPut, count = 1;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
    cout << "So le nho hon hoac bang\n";
    while (InPut >= count)
    {
        if (InPut % count == 0)
        {
            printf("%d\t", count);
        }
        count++;
    }
}