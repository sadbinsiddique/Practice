#include<iostream>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    swap(s[s.size()-1],s[0]);
    cout<<s;
    return 0;
}