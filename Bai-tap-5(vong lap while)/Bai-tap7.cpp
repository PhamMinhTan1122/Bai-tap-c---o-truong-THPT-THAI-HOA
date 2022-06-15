#include "../include.cpp"
int main()
{
    int InPut, sum = 0, result;
    char bin;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
    result = InPut;
    while (InPut >= 0)
    {
        bin = InPut%2;
        InPut = InPut/2;
        cout << bin;
    }
    cout << bin << endl;
}
