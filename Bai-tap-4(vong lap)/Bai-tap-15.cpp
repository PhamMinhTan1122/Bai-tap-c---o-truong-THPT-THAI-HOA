#include "../include.cpp"
int main()
{
    long long InPut, sum = 0, so_mu = 1;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
/*     while (InPut > 0)
    {
        sum += (InPut % 2) * so_mu;
        InPut /= 2;
        so_mu *= 10;
    } */
    for (; InPut > 0;)
    {
        sum += (InPut % 2) * so_mu;
        InPut /= 2;
        so_mu *= 10;
    }
    cout << sum << endl;
}