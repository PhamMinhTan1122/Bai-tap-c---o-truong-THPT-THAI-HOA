#include "../include.cpp"
int main()
{
    float Don_gia,So_luong,Thanh_tien,Tong_tien_tra = 0;
    printf("Nhap don gia cua mat hang: ");cin >> Don_gia;
    printf("Nhap vao so luong mat hang: "); cin >> So_luong;
    Thanh_tien = (Don_gia * So_luong);
    if ( Thanh_tien > 1000)
    {  
        printf("So tien phai tra sau khi giam 3%% la: %.f",Thanh_tien - (Thanh_tien*3)/100);
    }
    else {
        printf("So tien phai tra la: %.f",Thanh_tien);
    }
}



        // Tong_tien_tra = Thanh_tien*((100-3)/100);
        // cout << fixed << setprecision(2) << "So tien phai tra sau khi giam 3% la:" << ((100-50)/100)*Thanh_tien << endl;

