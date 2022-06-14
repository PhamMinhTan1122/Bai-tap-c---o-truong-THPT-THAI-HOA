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
        printf("Dien tich hinh vuong la: %.2f\n", a * a);
        break;
    case 2:
        cout << "Nhap chieu dai cua hinh chu nhat: \n";
        cin >> a;
        cout << "Nhap chieu rong cua hinh chu nhat: \n";
        cin >> b;
        printf("Dien tich hinh chu nhat la: %.2f\n ", a * b);
        break;
    case 3:
        cout << "Nhap ban kinh:\n";
        cin >> r;
        printf("Dien tich hinh tron la: %.2f\n ", r * r * pi);
        break;
    case 4:
        cout << "Nhap canh a:\n";
        cin >> a;
        cout << "Nhap canh b:\n";
        cin >> b;
        cout << "Nhap canh c:\n";
        cin >> c;
        p = (a + b + c) / 2;
        printf("Dien tich tam giac la: %.2f\n", sqrt(p * (p - a) * (p - b) * (p - c)));
        break;
        /*         cout << "1.Tam giac thuong\n2.Tam giac vuong\n3.Tam giac can\n4.Tam giac vuong can\n5.Tam giac deu";
                cin >> InPut;
                switch (InPut)
                {
                case 1:
                    cout << "Nhap canh a:\n";
                    cin >> a;
                    cout << "Nhap canh b:\n";
                    cin >> b;
                    cout << "Nhap canh c:\n";
                    cin >> c;
                    p = (a + b + c) / 2;
                    cout << "Dien tich tam giac la:" << sqrt(p * (p - a) * (p - b) * (p - c));
                    break;
                case 2:
                    cout << "Nhap canh a:\n";
                    cin >>a;
                    cout << "Nhap canh b:\n";
                    cin >>b;
                    cout << "Nhap canh c:\n";
                    cin >>c;
                    cout<< "Dien tich tam giac vuong la:" << (a*b)/2;
                    break;
                case 3
                    cout << "Nhap canh a:\n";
                    cin >> a;
                    cout << "Nhap canh b:\n";
                    cin >> b;
                    cout << "Nhap canh c:\n";
                    cin >> c;
                    cout << "Dien tich tam giac can la:" << a * b * c / 2;
                    break;
                } */

    case 5:
        cout << "Nhap chieu dai hinh thang:\n";
        cin >> a;
        cout << "Nhap chieu rong hinh thang:\n";
        cin >> b;
        cout << "Nhap chieu cao:\n";
        cin >> c;
        printf("Dien tich hinh thang la: %.2f\n",((a + b) * c) / 2);
        break;
    }
    system("pause");
}