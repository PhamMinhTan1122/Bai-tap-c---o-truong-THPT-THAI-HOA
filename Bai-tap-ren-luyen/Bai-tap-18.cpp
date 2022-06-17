#include "../include.cpp"
int main()
{
    float InPut,result = 1,count = 1;
    cin >> InPut;
    while(InPut >= count)
    {
        result = (float)1/(count*(count+1)*(count+2));
        count++;
    }
    printf("Total = %.10f",result );
}