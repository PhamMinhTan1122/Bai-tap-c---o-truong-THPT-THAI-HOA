#include "../include.cpp"
int main()
{
    int end = 20, Count = 1,result;
    while (end >= Count){
        result += Count;
        Count++;
    }
    printf("Sum = %d", result);
}