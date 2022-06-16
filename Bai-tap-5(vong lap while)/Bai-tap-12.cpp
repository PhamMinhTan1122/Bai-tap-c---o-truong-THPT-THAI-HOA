#include "../include.cpp"
using namespace std;
int main()
{
    int a = 2, count;
    while (a <= 9)
    {
        count =1;
        while (count <= 10)
        {
            cout << a << " x " << count << " = " << a * count << endl;
            count++;
            continue;
        }
        printf("\n");
        a = a + 1;
    }
}