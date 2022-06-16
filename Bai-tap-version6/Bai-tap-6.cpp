#include "../include.cpp"
int main()
{
    long long Sum =0,i = 1,n;
    cin >> n;
    while(n  > i)
    {
        i = (i/(i+1));
        i++;
    }
    cout << Sum;
}