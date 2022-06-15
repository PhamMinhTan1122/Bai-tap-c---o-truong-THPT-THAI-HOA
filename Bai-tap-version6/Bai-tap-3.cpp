#include "../include.cpp"
int main()
{
<<<<<<< HEAD
    int fibonacy, InPut, count = 2, temp= 1, temp_1 =1;
    cout << "Nhap: ";
    cin >> InPut;
    cout << temp << " " << temp_1 << " ";
    while (InPut >= count)
    {   
        fibonacy = temp + temp_1;
        temp = temp_1;
        temp_1 = fibonacy;
        count++;
        cout << fibonacy << " ";
    }
=======
    int fibonacy = 0, InPut, temp_1 = 1, temp_2 = 1;
    printf("Nhap so: ");
    cin >> InPut;
    if (InPut != 1)
    {
        printf("So fibonacy nho hon %d la %d %d ", InPut, temp_1, temp_2);
        do
        {
            fibonacy = temp_1 + temp_2;
            temp_1 = temp_2;
            temp_2 = fibonacy;
            if (fibonacy < InPut)
            {
                printf("%d ", fibonacy);
            }
        } while (InPut > fibonacy);
    }
    else
        printf("So fibonacy nho hon %d la %d %d", InPut, temp_1, temp_2);
>>>>>>> c8d04a92ae3bd7e4b6d031e7a4208b0a3dd2929e
}