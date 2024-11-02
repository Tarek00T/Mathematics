#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >>n;
    while(n--)
    {
        int permutation;
        cin >>permutation;
        //for(int i=1; i<=permutation; i++)
        for(int i=permutation; i>=1; i--)

        {
            cout<<i<<' ';
        }
        cout<<endl;
    }
}
