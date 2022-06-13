#include <bits/stdc++.h>
using namespace std;
int main()
{
    int InPut, count= 1, sum = 0;
    cin >> InPut;
    while (InPut > count)
    {
        if (InPut % count == 0)
        {
            sum = sum + count;
        }
        count++;
    }
    if (InPut == sum)
    {
        cout << "So " << InPut << " la so hoan chinh";
    }
    else
    {
        cout << "So " << InPut << " khong phai la so hoan chinh";
    }
}