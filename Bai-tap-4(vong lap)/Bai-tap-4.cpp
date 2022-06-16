//Viết chương trình in ra tất cả các ước của một số n (Với n được nhập từ bàn phím)
#include "../include.cpp"
int main()
{
    int InPut;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
    cout << "Uoc cua so ban ko thich la:";
    for (int i = 1; i <= InPut; i++)
    {
        if (InPut % i == 0)
        {
            printf("%d\t", i);
        }
    }
}