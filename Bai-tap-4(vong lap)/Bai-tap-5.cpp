// Hãy in ra mã ASCII của các kí tự từ “A” đến “Z” và từ “a” đến “z”
#include "../include.cpp"//include các thư viện cần thiết
int main()
{
    for(char i = 'A'; i <= 'z'; i++)
    {
        printf("%d\t %c\n",(int)i,i);
    }
}