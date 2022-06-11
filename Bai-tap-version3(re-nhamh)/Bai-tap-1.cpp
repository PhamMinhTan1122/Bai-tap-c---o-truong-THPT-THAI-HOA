#include "../include.cpp"
int main()
{
    int a, b, c, d;
    cout << "Nhap a:";
    cin >> a;
    cout << "Nhap b:";
    cin >> b;
    cout << "Nhap c:";
    cin >> c;
    cout << "Nhap d:";
    cin >> d;
    if (a > c)
    {
        int tg = a;
        a = c;
        c = tg;
    }
    if (c > d)
    {
        int tg = c;
        c = d;
        d = tg;
    }
    if (b > d)
    {
        int tg = b;
        b = d;
        d = tg;
    }
    if (b > c)
    {
        int tg = b;
        b = c;
        c = tg;
    }
    if (a > b)
    {
        int tg = a;
        a = b;
        b = tg;
    }
    printf("a: %d\nb: %d\nc: %d\nd: %d\n", a, b, c, d);
    printf("Max:%d", d);
}