#include "../include.cpp"
int main()
{
    int InPut, InPut_ss, max = 0, count = 1;
    cout << "Nhap gioi han cau so N" << endl;
    cin >> InPut;
    while (InPut >= count)
    {
        printf("Nhap so thu %d\n", count);
        cin >> InPut_ss;
        if (InPut_ss > max)
        {
            max = InPut_ss;
        }
        count++;
    }
    printf("Max = %d", max);
}