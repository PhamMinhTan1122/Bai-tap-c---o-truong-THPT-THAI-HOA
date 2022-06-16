#include "../include.cpp"
int main()
{
    float result, Cash, lai;
    float Count = 0, Cash_1;
    cout << "Nhap so tien gui vao ngan hang:";
    cin >> Cash;
    cout << "Nhap so tien can rut tien: ";
    cin >> Cash_1;
    lai = Cash*(0.3/100);
    while (Cash_1 > Cash)
    {
        Cash = Cash + lai;
        Count++;
    }
    cout << "So tien " << Cash << " sau " << Count << " thang la " << Cash << endl; 
}