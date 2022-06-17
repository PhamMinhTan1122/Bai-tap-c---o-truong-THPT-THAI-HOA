#include "../include.cpp"
int main()
{
    int n ,q = 0;
    cin >> n;
    for(; n>0;n--)
    {
        for(int j = 1; j < n;j++)
        {
            printf(" ");
        }
        for (int k = 0;k <= q;k++)
        {
            printf("*");
        }
        q=q+2;
        printf("\n");
    }

}