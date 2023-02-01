#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x[100], i, j, temp, sum=0;

    for(i=0; i<100; i++)
    {
        cin>>x[i];

        if(x[i]==0)
            break;

        temp=x[i];

        for(j=0;j<5;j++)
        {
            if(temp%2!=0)
            {
                temp=temp+1;
            }

            sum=sum+temp;
            temp=temp+2;
        }

        cout<<sum<<endl;

        sum=0;
    }

    return 0;
}
