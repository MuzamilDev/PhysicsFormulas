#include<iostream>
using namespace std;

int main()
{


    float vf , vi , a , t;

    cout<<"Enter Initial Velocity "<<endl;
    cin>>vi;

    cout<<"Enter Accelaration "<<endl;
    cin>>a;

    cout<<"Enter time in which you want to do work "<<endl;
    cin>>t;

    vf=vi+a*t;

    cout<<"The Final Velocity is: "<<vf<<endl;

    return 0;
}
