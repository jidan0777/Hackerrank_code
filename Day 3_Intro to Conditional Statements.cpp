#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2 != 0)
    {
        cout<<"Weird"<<endl;
    }
    else if(n % 2 == 0 && n<5 && n>2)
    {
        cout<<"Not Weird"<<endl;
    }
    else if(n % 2 == 0 && n<=20 && n>=6)
    {
        cout<<"Weird"<<endl;
    }
    else if(n % 2 == 0 && n>=20)
    {
        cout<<"Not Weird"<<endl;
    }


    return 0;

}
