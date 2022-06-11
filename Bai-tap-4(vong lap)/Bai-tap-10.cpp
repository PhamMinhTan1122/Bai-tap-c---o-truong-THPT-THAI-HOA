// Viết chương trình tìm các số hoàn chỉnh nhỏ hơn n (Với n được nhập từ bàn phím).
#include "../include.cpp"
int main()
{
    int InPut, sum = 0, temp;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
    // xu li
    for (int i = 1; i < InPut; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (j % i == 0)
            {
                sum = sum + j;
                temp = j;
            }
        }
        if (sum == temp)
            printf("cac so hoan chinh la %d\n", temp);
        else
            printf("ERROR:\n");
    }
}
