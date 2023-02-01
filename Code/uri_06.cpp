#include<iostream>
using namespace std;

int main()
{
    int t,i,j;
    cin>>t;
    for(i=0,j=0;j<1000;j++)
    {
        cout<<"N["<<j<<"] = "<<i<<endl;
        i++;
        if(i==t)
            i=0;
    }
    return 0;
}
