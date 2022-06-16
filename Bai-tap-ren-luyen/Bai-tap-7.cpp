#include "../include.cpp"
int main()
{
    unsigned long long int InPut,Thuong = 1;
    cin >> InPut;
    for (int i = 1; i <= InPut;i++)
    {
        Thuong *= i;
    }
    printf("Thuong tu 1 den %llu la %llu ",InPut,Thuong);
}