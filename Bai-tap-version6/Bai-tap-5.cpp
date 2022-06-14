#include "../include.cpp"
int main()
{
    float result, Cash;
    float Count = 1, Month_InPut;
    cout << "Nhap so tien muon rut:";
    cin >> Cash;
    cout << "Nhap thang can rut tien: ";
    cin >> Month_InPut;
    while (Month_InPut >= Count)
    {
        result = Cash * pow((1 + 0.3), Count);
        printf("So tien %.f sao %.f thang la %.f\n ", Cash, Month_InPut, result);
        Count++;
    }
}