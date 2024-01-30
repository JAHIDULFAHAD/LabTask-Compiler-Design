#include<iostream>
    using namespace std;
    int main()
    {
        int fact,num;
        cout<<"Enter Any Number : ";
        cin>>num;
        fact=1;
        for(int i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        cout<<"Factorial of Given Number "<<num<<" is : "<<fact;
    }
