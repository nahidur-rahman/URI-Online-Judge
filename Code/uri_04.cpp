#include<iostream>
using namespace std;

int main()
{
    int n[20],m[20],i,j;
    for(i=0,j=19;i<20,j>=0;i++,j--)
    {
        cin>>n[i];
        m[j]=n[i];

    }
    for(j=0;j<20;j++)
        cout<<"N["<<j<<"] = "<<m[j]<<endl;
    return 0;
}
