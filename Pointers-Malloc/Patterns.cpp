#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {   
        int k=n-i;
        while(k!=0){
            cout<<" ";
            k = k-1;
        }
        k=0;
        while(k<=i*2){
            cout<<"*";
            k=k+1;
        }
        cout<<"\n";
    }
}
