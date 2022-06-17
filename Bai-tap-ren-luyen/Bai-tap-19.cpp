#include "../include.cpp"
int main()
{
    int InPut,count = 1;
    cin >> InPut;
    while (10 >= count)
    {
        printf("%d x %d = %d\n", InPut,count, count*InPut);
        count++;
    }
}