#include "../include.cpp"
int main()
{
    int InPut,temp =0;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
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