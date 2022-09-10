#include<iostream>
using namespace std;

int oneBits(uint32_t n)
{
    int count=0;
    while(n!=0)
    {
        if(n&1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout<<count;
}
int main()
{
    int n;
    cin>>n;
    oneBits(n);
    return 0;
}