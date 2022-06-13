#include "../include.cpp"
int main()
{
    // Tính N!
    int InPut, sum = 1;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
    for (int i = 1; i <= InPut; i++)
    {
        sum = sum*i;
    }
        cout << sum << endl;
}