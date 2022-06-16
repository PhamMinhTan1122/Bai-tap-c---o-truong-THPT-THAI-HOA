#include "../include.cpp"
int main()
{
    int InPut,sum;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
    cout << "Tong cac so le";
    for(int i = 0; i <= InPut; i++)
    {
        if (i % 2!=0)
        {
            sum = sum + i;
        }
    }
    printf("Tong cac so le:%d\n",sum);
}