#include "../include.cpp"
int main()
{
<<<<<<< HEAD
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
=======
    int InPut_a, InPut_b, temp,tmp_ip_a, tmp_ip_b;
    printf("Nhap a: ");
    cin >> InPut_a;
    tmp_ip_a = InPut_a;
    printf("Nhap b: ");
    cin >> InPut_b;
    tmp_ip_b = InPut_b;
    if (InPut_a % InPut_b == 0)
    {
        printf("UCLN(%d,%d) la %d", InPut_a,InPut_b, InPut_a%InPut_b);
    }
    else
    {
        temp = InPut_a % InPut_b;
        while (temp != 0 )
        {
            InPut_a = InPut_b;
            InPut_b = temp;
            temp = InPut_a % InPut_b;
        }
        printf("UCLN(%d,%d) la %d",tmp_ip_a,tmp_ip_b,InPut_b);
>>>>>>> c8d04a92ae3bd7e4b6d031e7a4208b0a3dd2929e
    }
}