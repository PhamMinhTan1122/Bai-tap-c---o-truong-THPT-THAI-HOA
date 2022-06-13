#include "../include.cpp"
using namespace std;
int main()
{
    int TrauDung = 1, TrauGia = 1, TrauNam = 1;
    /*     while (TrauDung <= 100)
        {
            while (TrauNam <= 100)
            {
                while (TrauGia <= 100)
                {
                    if ((TrauDung * 5 + TrauNam * 3 + TrauGia / 3 == 100) && (TrauGia % 3 == 0) && (TrauDung + TrauGia + TrauNam == 100))
                    {
                        printf("Trau Dung: %d\t Trau Nam: %d\t Trau Gia:%d\t\n", TrauDung, TrauNam, TrauGia);
                    }
                    TrauGia++;
                }
                TrauNam++;
            }
            TrauDung++;
        } */
    do
    {
        do
        {
            do
            {
                if ((TrauDung * 5 + TrauNam * 3 + TrauGia / 3 == 100) && (TrauGia % 3 == 0) && (TrauDung + TrauGia + TrauNam == 100))
                    printf("Trau Dung: %d\t Trau Nam: %d\t Trau Gia:%d\t\n", TrauDung, TrauNam, TrauGia);
                TrauGia++;
            } while (TrauGia <= 100);

            TrauNam++;
        } while (TrauNam <= 100);
        TrauDung++;
    } while (TrauDung <= 102);
}
