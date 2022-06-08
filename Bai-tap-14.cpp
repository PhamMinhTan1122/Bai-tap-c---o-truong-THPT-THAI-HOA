//Viết chương trình nhập 2 số nguyên có không nhiều hơn ba chữ số rồi in kết quả phép tính nhân hai số theo dạng
#include "include.cpp"
int main()
{
    int a,b;
    printf("Nhap so a: \n");
    cin >> a;
    printf("Nhap so b: \n");
    cin >> b;
    // hien a
    cout << fixed << setw(20) << setprecision(3) << a << endl;
    // hien x
    cout << fixed << setw(17) << setprecision(3) << "x" << endl;
    // hien b
    cout << fixed << setw(20) << setprecision(3) << b << endl;
    // hien dau gach chan phia duoi cho phep nhan
    cout << fixed << setw(20)<< "-----" << endl;
    //tinh toan
    cout << fixed << setw(20) << setprecision(3)<< a*b << endl;



}