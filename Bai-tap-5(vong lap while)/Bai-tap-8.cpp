#include "../include.cpp"
using namespace std;
int main()
{
    int TrauDung = 1, TrauNam, TrauGia;
    while (TrauDung * 5 <= 100)
    {
        TrauDung++;
        TrauNam = 1;
        while (TrauNam * 3 <= 100)
        {
            TrauNam++;
            TrauGia = 1;
            while (TrauGia / 3 <= 100)
            {
                TrauGia++;
                if ((TrauDung + TrauGia + TrauNam == 100) && (TrauDung * 5 + TrauNam * 3 + TrauGia / 3== 100))
                {
                    printf("Trau Dung: %d\t Trau Nam: %d\t Trau Gia:%d\t\n", TrauDung, TrauNam, TrauGia,);
                }
            }
            /*                 cout << "TrauGia" << TrauGia << endl;
                            cout << "TrauDung" << TrauDung << endl;
                            cout << "TrauNam" << TrauNam << endl; */
        }
    }
    return 0;
}
