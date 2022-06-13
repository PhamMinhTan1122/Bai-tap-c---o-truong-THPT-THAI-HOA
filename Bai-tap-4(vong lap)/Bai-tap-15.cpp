#include "../include.cpp"
int main()
{
    int InPut, sum = 0, result,bin;
    bool DS =  true;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
    result = InPut;
    while (result > 0)
    {
        if (result % 2 == 0)
        {
            DS = true;
        }
        else 
        {
            DS = false;
        }
        result = InPut/2;
        if(DS = true)
        {
            bin = 0;
        }
        else 
        {
            bin = 1;
        }
        bin = bin * 10;
        return result;
    }
    cout << bin << endl;
}