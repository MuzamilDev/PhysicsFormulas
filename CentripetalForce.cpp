#include<iostream>
using namespace std;

int main()
{
    float F , m , v , r;

    cout<<"Enter Mass of Body: "<<endl;
    cin>>m;

    cout<<"Enter Velocity of Body: "<<endl;
    cin>>v;

    cout<<"Enter Radius of Body: "<<endl;
    cin>>r;

    F=m*(v*v)/r;

    cout<<"The Centripetal Force is: "<<F<<endl;

    return 0;
}
