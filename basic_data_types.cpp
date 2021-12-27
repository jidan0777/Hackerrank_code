#include<iostream>
#include <iomanip>

using namespace std;
int main()
{
    int a;
    long long int b;
    char ch ;
    float c;
    double d ;

    cin>>a>>b>>ch>>c>>d;

    cout<<a<<"\n"<<b<<"\n"<<ch<<endl;

    cout<<std::fixed;
    cout<<setprecision(3);
    cout<<c<<endl;

    cout<<std::fixed;
    cout<<setprecision(9);
    cout<<d<<endl;
    return 0;
}
