#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long InPut, sum = 0, count = 1, count_1 = 1;
    cout << "Nhap so\n";
    cin >> InPut;
    while (InPut > count)
    {
        sum = 0;
        while (count > count_1) 
        {
            if (count_1 % count == 0)
            {
                sum += count_1;
            }
            count_1++;
        }
        if (sum == count)
        {
            cout << count << endl;
        }
        count++;
    }
}