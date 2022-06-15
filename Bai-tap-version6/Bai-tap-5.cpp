#include "../include.cpp"
int main()
{
    float result, Cash;
    float Count = 0, Cash_1;
    cout << "Nhap so tien gui vao ngan hang:";
    cin >> Cash;
    cout << "Nhap so tien can rut tien: ";
    cin >> Cash_1;
    while (Cash_1 >= Cash)
    {
        result = Cash*0.3/100;

        // printf("So tien %.f sao %.f thang la %.f\n ", Cash, Count, result);
        Count++;
    }
    cout << "So tien " << Cash << " sau " << Count << " thang la " << Cash_1 + << endl;
}