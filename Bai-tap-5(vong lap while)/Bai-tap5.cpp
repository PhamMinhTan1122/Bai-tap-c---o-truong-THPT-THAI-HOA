// Hãy in ra mã ASCII của các kí tự từ “A” đến “Z” và từ “a” đến “z”
#include "../include.cpp"
using namespace std;
int main()
{
    char i = 'A';
    while (i <= 'z')
    {
        printf("%d%5c\n",i,i);
        i++;
    }
    