#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    a=5;
    b=6;
    c=1;
    d=8;
    //cout<<"Enter a four number";
    //cin>>a>>b>>c>>d;
    if(a>b && a>c && a>d)
        cout<<a;
    else if(b>c && b>d)
        cout<<b;
    else if(c>d)
        cout<<c;
    else
        cout<<d;

    return 0;

}
