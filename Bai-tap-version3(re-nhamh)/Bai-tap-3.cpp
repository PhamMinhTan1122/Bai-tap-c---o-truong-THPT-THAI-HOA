//Nhập vào tháng, năm rồi tính số ngày của tháng. Biết năm nhuận là năm chia hết cho 4 và nếu nó chia hết cho 100 thì cũng phải chia hết cho 400
#include "../include.cpp"
int main()
{
    int thang,nam,ngay;
    cout << "Nhap nam: \n";
    cin >> nam;
    cout << "Nhap thang: \n";
    cin >> thang;
    if (nam % 400 == 0 || (nam % 4 == 0)&& (nam % 100 != 0 ))
    {
        ngay = 366;
        printf("Nam %d co 366 ngay\n", nam);
        switch (thang)
        {
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 : // truyen thong dem ngay tren cac khop ngon tay
            printf("Thang %d co 31 ngay\n", thang);
            break;
        case 4 : case 6 : case 9 : case 11 :// truyen thong dem ngay tren cac khop ngon tay
            printf("Thang %d co 30 ngay\n", thang);
            break;
        case 2 :
            printf("Thang %d co 29 ngay\n", thang);
            break;
        default:
            break;
        }
    } else 
    {
        ngay = 365;
        printf("Nam %d co 365 ngay\n", nam);
                switch (thang)
        {
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :// truyen thong dem ngay tren cac khop ngon tay
            printf("Thang %d co 31 ngay\n", thang);
            break;
        case 4 : case 6 : case 9 : case 11 :// truyen thong dem ngay tren cac khop ngon tay
            printf("Thang %d co 30 ngay\n", thang);
            break;
        case 2 :
            printf("Thang %d co 28 ngay\n", thang);
            break;
        default:
            break;
        }
    }
}