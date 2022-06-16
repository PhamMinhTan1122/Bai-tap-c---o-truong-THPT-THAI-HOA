#include "../include.cpp"
int main()
{
    long long Tuoi_Cha, Tuoi_Con, result = 0;
    cout << "Nhap tuoi cha: ";
    cin >> Tuoi_Cha;
    cout << "Nhap tuoi con: ";
    cin >> Tuoi_Con;
    if (Tuoi_Cha <= Tuoi_Con + 25)
        printf("Nhap lai tuoi cha\n");
    else
    {
        while (Tuoi_Cha != 2 * Tuoi_Con)
        {
            Tuoi_Cha++;
            Tuoi_Con++;
            result++;
        }
        cout << result << endl;
    }
}