#include<iostream>
using namespace std;

void numeric(string s1)
{
    if((s1>="A"&&s1<="Z")||(s1>="a"&&s1<="z"))
    {
        cout<<"Not numeric"<<endl;
    }
    else
    {
        cout<<"numeric constant"<<endl;
    }
}

int main()
{
    string s;
    cout<<"Please enter your numerical value : ";
    cin>> s;
    numeric(s);
}
