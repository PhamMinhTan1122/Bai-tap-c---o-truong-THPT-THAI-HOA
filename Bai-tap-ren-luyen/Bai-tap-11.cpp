#include "../include.cpp"
int main()
{
    string s;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 2; j <= 5 ; j++)
        {
            s = to_string(j) + " x " + to_string(i) + " = " + to_string(j * i);
            printf("%20s", s.c_str());
        }
    printf("\n");
    }
    printf("\n\n\n");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 6; j <= 9; j++)
        {
            s = to_string(j) + " x " + to_string(i) + " = " + to_string(j * i);
            printf("%20s", s.c_str());
        }
        printf("\n");
    }
}