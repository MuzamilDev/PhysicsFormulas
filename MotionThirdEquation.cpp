#include<iostream>
using namespace std;
int main()
{

    float a,s,vf,vi;


    cout<<"Enter distance "<<endl;
    cin>>s;

    cout<<"Enter final velocity "<<endl;
    cin>>vf;

    cout<<"Enter initial velocity "<<endl;
    cin>>vi;

    a=(vf*vf)-(vi*vi)/2*s;

    cout<<"Acceleration is "<<a<<"m/sec^2"<<endl;

    return 0;
}
