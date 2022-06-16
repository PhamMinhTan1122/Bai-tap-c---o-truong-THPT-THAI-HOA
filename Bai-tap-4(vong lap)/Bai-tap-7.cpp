//Đọc vào n số nguyên rồi in ra giá trị cực đại
#include "../include.cpp"
int main()
{
    int so_nguyen, InPut,max = 0;
    cout << "Moi ban nhap so nguyen ban ko thich\n";
    cin >> so_nguyen;
    for (int i = 0; i < so_nguyen; i++)
    {
        printf("Nhap so thu %d\t", i + 1);
        cin >> InPut;
        if (max < InPut)
        {
            max = InPut;
        }
    }
    printf("Max = %d",max);
}