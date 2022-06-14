#include "../include.cpp"
int main()
{
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
    }
}