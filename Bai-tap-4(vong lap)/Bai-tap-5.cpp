// Hãy in ra mã ASCII của các kí tự từ “A” đến “Z” và từ “a” đến “z”
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (char i = 'A'; i < 'Z'; i++ )
    {
        printf("%d%5c\n", i, i);
    }   
    for (char j = 'a'; j < 'z'; j++)
    {
        printf("%d%5c\n", j, j);
    }
}