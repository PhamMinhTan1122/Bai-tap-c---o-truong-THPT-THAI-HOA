// Hãy in ra mã ASCII của các kí tự từ “A” đến “Z” và từ “a” đến “z”
#include "../include.cpp"//include các thư viện cần thiết
int main()
{
    for (int i = 0; i <= 128; i++)// Kiểm tra kí tự có nằm trong khoảng từ “
    {
        if (i >= 65 && i <= 90) // Kiểm tra kí tự có nằm trong khoảng từ “A” đến “Z”
        {
            printf("%d%5c\n", i, i); //%d in ra ki tu so, %5c in ra khoang trong
        }
        else if (i >= 97 && i <= 122) // Kiểm tra kí tự có nằm trong khoảng từ “a” đến “z”
        {
            printf("%d%5c\n", i, i); //%d in ra ki tu so, %5c in ra khoang trong
        }
        
    }
}