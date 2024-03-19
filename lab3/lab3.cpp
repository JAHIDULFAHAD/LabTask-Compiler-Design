#include<iostream>
#include<fstream>
using namespace std;

bool solve(string s){
	int n = s.length();
	bool v=false;

	ifstream f;
    f.open("read.txt");
    string s1;

    if(s[0] == '_' || (s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z') )
        {
            v=true;
        }
    else
        {
            cout<<v<<" because 1st character is : "<<s[0]<<endl;
        }

    for(int i = 1; i < n; i++)
        {
            if(v==true)
                {
                    if((s[i] >= '0' && s[i] <= '9') || s[i] == '_' || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') )
                        {
                            v=true;
                        }
                }

            if(!((s[i] >= '0' && s[i] <= '9') || s[i] == '_' || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') ))
                {
                    v=false;
                    cout<<v<<" because "<<i<<" character is : "<<s[i]<<endl;
                }
        }

    while(f>>s1)
        {
           if(s==s1)
              {
                 v=false;
              }
        }

	if(v == true)
        {
		   cout << v << endl;
	    }
    if(v==false)
        {
            cout<<v<<" because "<<s<<" is not identifier"<<endl;
        }


}
int main()
{
    string s;
    cout<<"Please enter your variable :- ";
    cin>>s;
    solve(s);

}
