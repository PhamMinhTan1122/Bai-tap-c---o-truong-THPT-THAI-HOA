#include "../include.cpp"
int main()
{
    int fibonacy, InPut, count = 2, temp= 1, temp_1 =1;
    cout << "Nhap: ";
    cin >> InPut;
    cout << temp << " " << temp_1 << " ";
    while (InPut >= count)
    {   
        fibonacy = temp + temp_1;
        temp = temp_1;
        temp_1 = fibonacy;
        count++;
        cout << fibonacy << " ";
    }
}