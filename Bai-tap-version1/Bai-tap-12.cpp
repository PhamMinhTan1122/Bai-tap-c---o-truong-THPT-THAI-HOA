//Viết chương trình cho biết chữ số hàng trăm, hàng chục, hàng đơn vị của một số có ba chữ số. Ví dụ khi nhập số 357 thì máy in ra:
#include "include.cpp"
int main()
{
    int a;
    printf("Nhap so a: \n");
    cin >> a;
    printf("So a hang tram la: %d\n", a/100);
    printf("So a hang chuc la: %d\n", (a%100)/10);//chia lay phan du kq la hang chuc roi chia cho 10 lay dc so hc
    printf("So a hang don vi la: %d\n", a%100%10);// chia lay phan du kq la hang don chuc roi lay hc chia them cho 10 lay dc so hang dv
}