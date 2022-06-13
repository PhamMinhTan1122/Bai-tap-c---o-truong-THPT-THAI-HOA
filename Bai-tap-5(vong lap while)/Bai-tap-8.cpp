#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TrauDung = 1,TrauGia = 1, TrauNam = 1;
    while (TrauDung * 5 <= 100)
    {
        while (TrauNam * 3 <= 100)
        {
            while (TrauDung <= 100)
            {
                if ((TrauDung * 5 + TrauNam * 3 + TrauGia / 3 == 100) && (TrauDung + TrauGia + TrauNam == 100))
                {
                    printf("Trau Dung: %d\t Trau Nam: %d\t Trau Gia:%d\t\n", TrauDung, TrauNam, TrauGia);
                }
                TrauGia++;
            }
            TrauNam++;
        }
        TrauDung++;
    }
}