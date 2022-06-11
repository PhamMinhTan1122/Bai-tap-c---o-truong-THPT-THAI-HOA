//Đọc vào n số nguyên rồi in ra giá trị cực đại
#include "../include.cpp"
int main()
{
    int so_nguyen;
    cout << "Moi ban nhap so nguyen ban ko thich\n";
    cin >> so_nguyen;
    int max = 0;
    for(int i = 0; i <= so_nguyen; i++)
    {
        if (i > max)
        {
            max = i;
        }
    }
    cout << "Gia tri cuc dai cua so nguyen ban ko thich la: " << max << endl;
    
}