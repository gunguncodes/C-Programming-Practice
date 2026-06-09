#include <iostream>
using namespace std;

int dectoBinary(int decnum)
{
    int ans=0,pow=1;
    while (decnum>0)
    {
        int rem=decnum%2;
        decnum=decnum/2;

        ans += (rem*pow);
        pow *= 10;
    }
    return ans;
    
}
int main()
{
    int decnum=50;
    for (int i = 0; i < 10; i++)
    {
        cout<< dectoBinary(i)<<endl;
    }
    
    
    return 0;
}