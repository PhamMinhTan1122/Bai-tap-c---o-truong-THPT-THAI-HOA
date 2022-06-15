#include "../include.cpp"
int main()
{
    // Viết chương trình in ra tất cả các số nguyên tố bé hơn hoặc bằng n?
    int InPut;

    printf("Nhap so nguyen to: ");
    cin >> InPut;
    if (InPut == 1)
    {
        printf("Khong co so nguyen to nho hon %d\n", InPut);
    }
    for (int i = 2; i < InPut; i++) // chay het den InPut
    {
        bool result = true;
        for (int k = 2; k < sqrt(i); k++) // chay k den i, k se chay tu 1 den i, k sau i 1 lan
        {
            if (i % k == 0) // neu i chia het cho k thi tang count len 1,
            {
                result = false;
            }
        }
        if (result == true) // neu count = 2 thi in ra i
        {
            printf("%d\n", i);
        }
    }
}