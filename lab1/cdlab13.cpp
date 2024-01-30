 #include<iostream>
    using namespace std;
    int main()
    {

        string fn,ln;
        int size1,size2;
        cout<<"Enter Your Firstname Array size : ";
        cin>>size1;
        char firstname[size1];
        cout<<"Enter Your Firstname In Single Chracter : ";
        for(int i=0;i<size1;i++)
        {
            cin>>firstname[i];
            fn+=firstname[i];
        }
        cout<<"Enter Your lastname Array size : ";
        cin>>size2;
        char lastname[size2];
        cout<<"Enter Your Lastname In Single Chracter : ";
        for(int i=0;i<size2;i++)
        {
            cin>>lastname[i];
            ln+=lastname[i];
        }

        string fullname=fn+" "+ln;
        cout<<"your FullName : "<<fullname;



    }
