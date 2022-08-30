#include<iostream>
using namespace std;
int main()
{

    float s , vi , a , t;

    cout<<"Enter initial velocity "<<endl;
    cin>>vi;

    cout<<"Enter acceleration "<<endl;
    cin>>a;

    cout<<"Enter time "<<endl;
    cin>>t;

    s=(vi*t)+(0.5)*a*(t*t);

    cout<<"The distance is "<<s<<"m/sec"<<endl;

    return 0;
}
