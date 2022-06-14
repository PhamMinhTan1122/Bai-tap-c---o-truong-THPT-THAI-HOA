#include "../include.cpp"
int main()
{
    // Viết chương trình in ra tất cả các số nguyên tố bé hơn hoặc bằng n?
    int InPut;
    printf("Nhap so nguyen to: ");
    cin >> InPut;
    for (int i = 2; i <= InPut; i++)// chay het den InPut
    {
        int count = 0;
        for (int k = 1; k <= i; k++)// chay k den i, k se chay tu 1 den i, k sau i 1 lan
        {
            if (i % k == 0)// neu i chia het cho k thi tang count len 1,
            {
                count++;
            }

        }
        if (count == 2)// neu count = 2 thi in ra i
        {
            printf("%d\n", i);
        }

    }
}