#include "../include.cpp"
int main()
{
    // khai bao bien nhap vao
    
    int InPut;
    float a, b, c, r, p;
    cout << setw(80) << "MOI BAN CHON HINH CAN TINH DIEN TICH\n";
    cout << "1. Hinh vuong.\n2. Hinh chu nhat.\n3. Hinh tron.\n4. Tac giam.\n5. Hinh thang.\n";
    cin >> InPut;
    switch (InPut)
    {
    case 1:
        cout << "Nhap canh cua hinh vuong:\n ";
        cin >> a;
        cout << "Dien tich hinh vuong la: " << a * a << endl;
        break;
    case 2:
        cout << "Nhap chieu dai cua hinh chu nhat: \n";
        cin >> a;
        cout << "Nhap chieu rong cua hinh chu nhat: \n";
        cin >> b;
        cout << "Dien tich hinh chu nhat la: " << a * b << endl;
        break;
    case 3:
        cout << "Nhap ban kinh:\n";
        cin >> r;
        cout << "Dien tich hinh tron la: " << setprecision(7)<< r * r * pi << endl;
        break;
    case 4:
        cout << "Nhap canh a:\n";
        cin >> a;
        cout << "Nhap canh b:\n";
        cin >> b;
        cout << "Nhap canh c:\n";
        cin >> c;
        p = (a + b + c) / 2;
        cout << "Dien tich tam giac la:" << sqrt(p * (p - a) * (p - b) * (p - c));
        break;
    case 5:
        cout << "Nhap chieu dai hinh thang:\n";
        cin >> a;
        cout << "Nhap chieu rong hinh thang:\n";
        cin >> b;
        cout << "Nhap chieu cao:\n";
        cin >> c;
        cout << "Dien tich hinh thang la:" << ((a + b) * c) / 2 << endl;
        break;
    }
}