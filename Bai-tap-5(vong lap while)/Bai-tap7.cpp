#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TrauDung = 1, TrauGia = 1, TrauNam = 1, count = 1;
    for (TrauDung = 1; TrauDung * 5 <= 100; TrauDung++)
    {
        for (TrauGia = 1; TrauGia * 3 <= 100; TrauGia++)
        {
            for (TrauNam = 1; TrauNam <= 100; TrauNam++)
            {
                if ((TrauDung * 5 + TrauNam * 3 + TrauGia / 3 == 100) && (TrauDung + TrauGia + TrauNam == 100))
                {
                    printf("Trau Dung: %d\t Trau Nam: %d\t Trau Gia:%d\t\n", TrauDung, TrauNam, TrauGia);
                }
            }
        }
    }

}