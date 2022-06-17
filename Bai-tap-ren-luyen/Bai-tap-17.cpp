#include "../include.cpp"
int main()
{
    int InPut, result = 1,count = 1;
    cin >> InPut;
    while (InPut >= count)
    {
        result = count*(count+1);
        count++;
    }
    printf("Total = %d", result);
}