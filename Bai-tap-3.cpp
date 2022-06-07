//Lập trình tính và đưa ra màn hình vận tốc v khi chạm đất của 1 vật rơi từ độ cao h, biết rằng v=√2gh , g là gia tốc rơi tự do và g=9.8m/s2
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float do_cao,gia_to,van_toc;
    printf("Nhap do cao h (don vi m): \n");
    cin >> do_cao; 
    printf("van toc v khi cham dat cua 1 vat roi tu do cao h = %.2f la = %.2f (m/s)\n",do_cao, sqrt(2*9.8*do_cao));
}