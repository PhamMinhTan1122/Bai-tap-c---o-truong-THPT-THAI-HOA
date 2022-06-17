#include "../include.cpp"
int main()
{
    float result;
    int InPut;
    cin >> InPut;
    for (int i = 1;i <= InPut; i++)
    {
        result = (float)1/(i*(i+1)*(i+2));
    }
        printf("%.10f\n",result);
}