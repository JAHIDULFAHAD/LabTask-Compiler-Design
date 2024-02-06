#include<iostream>
using namespace std;

void input(string o)
{
    string ans;
    for(int i=0;i<o.size();i++)
    {
        if(o[i]=='+'||o[i]=='-'||o[i]=='*'||o[i]=='%'||o[i]=='/'||o[i]=='=')
        {
            ans+=o[i];
        }

    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<"operetor  "<<i+1<<" : "<<ans[i]<<endl;
    }


}
int main()
{

    string s;
    cout<<"Please enter your  value : ";
    cin>> s;
    input(s);
}

