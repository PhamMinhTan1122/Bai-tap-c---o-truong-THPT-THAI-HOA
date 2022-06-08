#include "C:\Users\Admin\Desktop\Bai-tap-c---o-truong\include.cpp"
int main()
{
    float diem_tb;
    printf("Nhap diem trung binh:\n");
    cin  >> diem_tb;
    if (diem_tb >= 9) { printf("Loai A\n");}
    else if( 7 <= diem_tb && diem_tb <= 9) { printf("Loai B\n");}
    else if (5 <= diem_tb && diem_tb <= 7) {printf("Loai C\n");}
    else if ( diem_tb <= 5) {printf("Loai D\n");}
}