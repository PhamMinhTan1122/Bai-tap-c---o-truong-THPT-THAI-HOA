//Viết chương trình tìm các số hoàn chỉnh nhỏ hơn n (Với n được nhập từ bàn phím).
#include "../include.cpp"
int main()
{
    int InPut, sum = 0;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
    // xu li
    for (int i = 1; i < InPut; i++)
    {
        if (InPut % i == 0)
        {
            sum = sum + i;
            if( sum % i == 0)
            {
                printf("So hoan chinh nho hon %d la %d \n", InPut,sum);
            }
        }
    }

}