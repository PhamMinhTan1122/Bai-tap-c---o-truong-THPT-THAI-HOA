#include "../include.cpp"
int main()
{
    // Tính N!
    int InPut, sum = 1;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
    for (int i = 1; i <= InPut; i++)
    {
        sum = sum*i;
        cout << i << endl;
    }
    printf("Thuong tat ca cac so nho hon %d la:%d\n", InPut, sum);
}