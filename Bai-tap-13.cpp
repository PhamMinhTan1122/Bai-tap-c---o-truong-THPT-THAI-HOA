//Viết chương trình nhập vào x (giây). In ra màn hình bao nhiêu giờ, bao nhiêu phút, bao nhiêu giây
#include "include.cpp"
int main()
{
    int x;
    printf("Nhap so x: \n");
    cin >> x;
    printf("So gio la: %d\n", x/3600);
    printf("So phut la: %d\n", (x%3600)/60);
    printf("So giay la: %d\n", x%3600%60);
}