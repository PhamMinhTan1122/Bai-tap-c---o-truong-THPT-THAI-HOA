#include "../include.cpp"
int main()
{
    int a, b, temp = 1,temp_a,temp_b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    temp_a = a;
    temp_b = b;
    while (b != 0)
    {
        if (a % b == 0)
        {
            printf("ucln (%d, %d) la %d", a, b, b);
        }
        else
        {
            temp = a % b;
            while (temp != 0)
            {
                a = b;
                b = temp;
                temp = a % b;
            }
            printf("UCLN(%d,%d) la %d",temp_a,temp_b,b);
        }
        break;
    }
}