#include "../include.cpp"
int main()
{
    int InPut;
    cout << "Moi ban nhap so ban ko thich\n";
    cin >> InPut;
    for(int i = 0; i <= InPut; i ++) 
    {
        if (i % 2 != 0)
        {
            printf("Cac so le nho hon hoac bang n la:%d\n", i);
        }
    }

}