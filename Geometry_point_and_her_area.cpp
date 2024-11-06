
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >>t;
    cin.ignore();
    //find fourth point and her area of rectangle
    //input here
    /*
      3
    0 0 10 0 10 10
    0 0 10 0 10 -20
    -12 -10 21 21 1 40
    output here
    Case 1: 0 10 100
    Case 2: 0 -20 200
    Case 3: -32 9 1247*/


    for(int i=1; i<=t; i++)
    {
        int ax,ay,bx,by,cx,cy,area;
        cin >>ax>>ay>>bx>>by>>cx>>cy;

        int dx=ax+cx-bx;

        int dy=ay+cy-by;

        area=abs(((ax*by)+(bx*cy)+(cx*dy)+(ay*dx))-((bx*ay)+(cx*by)+(dx*cy)+(ax*dy)));
        cout<<"Case "<< i <<": "<< dx <<" "<< dy <<" "<< area/2<<endl;

    }
}
