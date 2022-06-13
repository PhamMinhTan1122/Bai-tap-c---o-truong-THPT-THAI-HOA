#include <bits/stdc++.h>
using namespace std;
int main()
{
    int InPut, sum = 1, count = 1;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
    while (InPut >= count)
    {
        sum = sum * count;
        
        count++;
    }
    cout << sum << endl;
}