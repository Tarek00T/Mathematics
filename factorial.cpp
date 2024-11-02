#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0) return 1;
    else if(n==1) return 1;
    else return n*fact(n-1);
}
int main ()
{
    int n;
    cin >>n;
    for(int i=0; i<=n; i++)
    {
        {
            cout<< fact(i)<<' ';
        }
    }
    cout<<endl;
}

