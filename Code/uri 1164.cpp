#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, i, sum, j, x1;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>x;

        x1=x/2;

        sum=1;

        for(j=2; j<=x1; j++)
        {
            if(x%j==0)
            {
                sum=sum+j;
            }
        }

        if(sum==x)
            cout<<x<<" eh perfeito"<<endl;
        else
            cout<<x<<" nao eh perfeito"<<endl;
    }


    return 0;
}
