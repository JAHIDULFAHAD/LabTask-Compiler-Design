#include<iostream>
using namespace std;

void input(string line)
{
    if(line.size()>=2 && line[0]=='/' && line[1]=='/')
    {
        cout<<"single line comment"<<endl;
    }
    else if(line.size()>=4 && line[line.size()-2]=='*' && line[line.size()-1]=='/'&& line[0]=='/'&&line[1]=='*')
    {
        cout<<"multiple line comment"<<endl;
    }
    else
    {
        cout<<"No comment"<<endl;
    }
}

int main()
{
    string s;
    cout<<"Please enter your  comment : ";
    cin>> s;
    input(s);
}
