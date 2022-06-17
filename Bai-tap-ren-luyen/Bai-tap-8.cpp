#include "../include.cpp"
int main()
{
    unsigned long long int result;
    int InPut;
    cin >> InPut;
    for (int i = 1; i<= InPut;i++)
    {
        result = i*(i+1);
    }
    printf("Result = %llu",result);
}