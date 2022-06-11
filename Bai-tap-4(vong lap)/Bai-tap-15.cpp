#include "../include.cpp"
int main()
{
    int InPut, sum = 0,result_1 = 0,result_2,i=1;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
    while (true)
    {
        result_1 = InPut%2;
        sum = sum + (1*result_1);
        result_2 = InPut/2;
        if (result_2 / 2 == 0 )
        {
            break;
        } else 
        {
            i = i*10;
        }
        cout << sum << endl;
    }
}