//Viết chương trình in ra các số lẻ nhỏ hơn hoặc bằng n ( Với n được nhập). Sao cho 15 số lẻ được in trên một dòng.
#include "../include.cpp"
int main()
{
    int InPut;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
    cout << "So le nho hon hoac bang\n";
    for (int i =1; i <= InPut; i ++)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }
}