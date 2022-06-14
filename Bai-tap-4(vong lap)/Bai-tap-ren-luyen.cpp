#include "../include.cpp"
int shh(long n);
int main()
{
    long n,i;
    for(i=1;i<1000000;i++)
    if(shh(i)==1)
    cout<<i<<" ";
    getch();   
}
int shh(long n)
{
    long i,s=0;
    for(i=1;i<n;i++)
    if(n%i==0)
    s=s+i;
    if(s==n)
    return 1;
    else
    return 0;
}