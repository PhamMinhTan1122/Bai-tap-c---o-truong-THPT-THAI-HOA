#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 2, count = 2;
    while (a <= 10)
    {
        while (count <= 9)
        {
            cout << a << " * " << count << " = " << a * count << endl;
            count++;
        }
        a++;
    }
}