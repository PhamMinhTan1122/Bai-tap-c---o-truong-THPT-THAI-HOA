#include "../include.cpp"
int main()
{
    int a_InPut, b_InPut;
    printf("Nhap vao so thu nhat: "); cin >> a_InPut;
    printf("Nhap vao so thu hai: "); cin >> b_InPut;
    if (a_InPut == b_InPut) printf("%d va %d bang nhau",a_InPut,b_InPut);
    if (a_InPut > b_InPut) printf("%d lon hon %d",a_InPut,b_InPut);
    if (a_InPut < b_InPut) printf("%d nho hon %d",a_InPut,b_InPut);

}