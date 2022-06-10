// Viết chương trình dịch các ngày trong tuần sang tiếng anh
#include "../include.cpp"
int main()
{
    int InPut;
    cout << "Nhap vao ngay trong tuần: \n";
    cin >> InPut;
    if (InPut >= 2 && InPut <= 8)
    {

        switch (InPut)
        {
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        case 8:
            printf("Sunday");
            break;
        default:
            break;
        }
    } else 
        printf("Invalid input");
}