#include "../include.cpp"
int main()
{
    int InPut;
    printf("Nhap so: ");
    cin >> InPut;
    try
    {
        if (InPut > 0)
            printf("So duong");
        else
            printf("So am");
        /* code */
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}