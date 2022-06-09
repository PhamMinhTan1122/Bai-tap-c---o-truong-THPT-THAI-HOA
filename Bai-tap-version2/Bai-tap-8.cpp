#include "../include.cpp"
int main()
{
    float a,b,c,delta;
    printf("Nhap he so a:\n");
    cin >>a;
    printf("Nhap he so b:\n");
    cin >>b;
    printf("Nhap he so c:\n");
    cin >>c;
    delta = b*b - 4*a*c;
    if (delta > 0)
    {
        printf("Phuong trinh co 2 nghiem phan biet: \n x1 = %.2f \n x2 = %.2f \n ", (-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
    } else if ( delta < 0)
    {
        printf("Phuong trinh vo nghiem");
    } else
    {
        printf("Phuong trinh co nghiem kep: \n x1=x2 = %.2f \n ", -b/2*a, -b/2*a);
    }
}