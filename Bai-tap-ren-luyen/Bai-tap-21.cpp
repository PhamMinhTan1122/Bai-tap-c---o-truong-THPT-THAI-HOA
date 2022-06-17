#include "../include.cpp"
int main()
{
    int InPut;
    cin >> InPut;
    while (InPut > 0)
    {
        int  first_counts = 1;
        while (InPut > first_counts)
        {
            printf(" ");
            first_counts++;
        }
        InPut--;
        int temp = 0, second_counts = 0;
        while (second_counts <= temp)
        {
            second_counts++;
            printf("*");
        }
        temp = temp + 2;
        printf("\n");
    }
}