#include "../include.cpp"
int main()
{
    int a, b;
    printf("Nhap so a: \n");
    cin >> a;
    printf("Nhap so b: \n");
    cin >> b;
    // hien a
    cout << fixed << setw(20) << right << a << endl;
    // hien x
    cout << fixed << setw(15) << "x" << endl;
    // hien b
    cout << fixed << setw(20) << right << b << endl;
    // hien dau gach chan phia duoi cho phep nhan
    cout << fixed << setw(20) << right << "------" << endl;
    cout << fixed << setw(20) << right << (b % 100 % 10) * a << endl; // chia lay phan tu thu nhat
    cout << fixed << setw(19) << right << (b % 100 / 10) * a << endl; // chia lay phan tu thu hai
    cout << fixed << setw(18) << right << (b / 100) * a << endl;      // chia lay phan tu thu ba
    cout << fixed << setw(20) << right << "------" << endl;

    // tinh toan
    cout << fixed << setw(20) << a * b << endl;
}