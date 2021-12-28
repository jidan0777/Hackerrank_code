#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int j,sum;
    double e,sm;
    string name;


    cin>>j;
    cin>>e;
    cin.ignore();
    getline(cin,name);


    sum=j+i;
    sm=d+e;
    s+=name;
    cout<<std::fixed;
    cout<<setprecision(1);
    cout<<sum<<endl;
    cout<<sm<<endl;
    cout<<s;
    return 0;
}
