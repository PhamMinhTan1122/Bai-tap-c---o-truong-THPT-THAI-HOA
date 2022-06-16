#include "../include.cpp"
int main()
{
    int InPut_a, InPut_b, Max;
    printf("Nhap vao so thu nhat: "); cin >> InPut_a;
    printf("Nhap vao so thu hai: "); cin >> InPut_b;
    Max = InPut_a;
    Max = (InPut_b > Max)?InPut_b: InPut_a; 
    printf("So lon nhat trong hai so la %d va %d la %d",InPut_a,InPut_b,Max);
}