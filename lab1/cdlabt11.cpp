    #include<iostream>
    using namespace std;
    int main()
    {
        int size;
        cout<<"Enter Array size : ";
        cin>>size;
        int arr[size];
        float avg,sum;
        sum=0;

        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
            sum+=arr[i];

        }
        avg=sum/size;
        cout<<"Average Value Of Array : "<<avg;

    }
