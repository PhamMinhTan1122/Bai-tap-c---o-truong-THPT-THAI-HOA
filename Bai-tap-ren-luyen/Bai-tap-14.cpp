#include "../include.cpp"
int main()
{
    int InPut,Count = 1,result=1;
    cin >> InPut;
    while(InPut >= Count)
    {
        result *= Count;
        Count++;
    }
    printf("n! = %d",result);

}