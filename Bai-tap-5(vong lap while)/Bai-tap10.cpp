#include "..\include.cpp"
using namespace std;
int main()
{
    long long InPut, sum = 0, count = 1, count_1;

    bool result = false;
    cout << "Nhap so\n";
    cin >> InPut;
    while (InPut > count)
    {
        sum = 0;
        count_1 = 1;
        while (count > count_1)
        {
            // cout << count_1 << endl;
            if (count % count_1 == 0)
            {
                sum += count_1;
            }
            count_1++;
        }
        if (sum == count)
        {
            cout << count << endl;
        }
        count++;
    }
}