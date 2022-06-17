#include "../include.cpp"
int main()
{
    int InPut,result = 1,Count = 1;
    cin >> InPut;
    while (InPut >= Count)
    {
        result *= Count;
        Count++;
    }
    printf("Multiplication = %d",result);
}