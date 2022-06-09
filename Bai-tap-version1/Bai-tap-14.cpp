<<<<<<< HEAD
//Viết chương trình nhập 2 số nguyên có không nhiều hơn ba chữ số rồi in kết quả phép tính nhân hai số theo dạng
=======
//Viết chương trình nhập 2 số nguyên có không nhiều hơn ba chữ số rồi in kết quả phép tính nhân hai số include.cpp"
>>>>>>> fd419c6649e59e10a7e78d19d9d673960af63611
#include "../include.cpp"
int main()
{
    int a,b;
    printf("Nhap so a: \n");
    cin >> a;
    printf("Nhap so b: \n");
    cin >> b;
    // hien a
    cout << fixed << setw(20) << a << endl;
    // hien x
<<<<<<< HEAD
    cout << fixed << setw(17) << "x" << endl;
=======
    cout << fixed << setw(15) << "x" << endl;
>>>>>>> fd419c6649e59e10a7e78d19d9d673960af63611
    // hien b
    cout << fixed << setw(20) << b << endl;
    // hien dau gach chan phia duoi cho phep nhan
    cout << fixed << setw(20)<< "------" << endl;
    cout << fixed << setw(20) << (b%100%10)*a << endl; //chia lay phan tu thu nhat
    cout << fixed << setw(19) << (b%100/10)*a << endl; // chia lay phan tu thu hai
    cout << fixed << setw(18) << (b/100)*a << endl; // chia lay phan tu thu ba
    cout << fixed << setw(20)<< "------" << endl;


    
    //tinh toan
    cout << fixed << setw(20)<< a*b << endl;



}