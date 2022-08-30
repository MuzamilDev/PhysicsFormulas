#include<iostream>
using namespace std;
int main()
{

    int Fahrenheit , Kelvin;

    cout<<"Enter Temperature in Fahrenheit "<<endl;
    cin>>Fahrenheit;

    Kelvin = (Fahrenheit - 32)*5/9+273;

    cout<<"The Kelvin is "<<Kelvin<<endl;

    return 0;
}
