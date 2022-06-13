#include "../include.cpp"
int main()
{
    int InPut, sum = 0, result;
    char bin;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
    result = InPut;
    while (result >= 0)
    {
        if (result % 2 == 0)
        {
            bin = '0';
        }
        else 
        {
            bin = '1';
        }
        result = result/2;
        bin = bin *10;
        cout << bin;
        return result;
    }
    cout << bin << endl;
}