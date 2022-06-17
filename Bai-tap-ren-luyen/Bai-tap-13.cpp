#include "../include.cpp"
int main()
{
    int d_InPut, r_InPut;
    printf("Nhap chieu dai: ");
    cin >> d_InPut;
    printf("Nhap chieu rong: ");
    cin >> r_InPut;
    for (int i = 0; i < r_InPut; i++)
    {
        for (int j = 0; j < d_InPut; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
