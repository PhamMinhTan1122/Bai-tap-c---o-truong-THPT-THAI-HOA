#include "../include.cpp"
int main()
{
    // xu li
    for (int i = 2; i <= 9; i++)
    {
        for (int InPut = 1; InPut <= 10; InPut++)
        {
            printf("%d x %d = %d\n", InPut,i, i * InPut);
        }
        printf("\n");
    }
}