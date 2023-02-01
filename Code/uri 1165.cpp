#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, i, j, temp;

    cin>>n;

    for(i=0; i<n; i++)
    {

        cin>>x;

        for(j=2; j<=x/2; j++)
        {
            if(x%j==0)
            {
                cout<<x<<" nao eh primo"<<endl;
                temp=1;
                break;
            }

            temp=0;

        }
        if(temp!=1)
            cout<<x<<" eh primo"<<endl;

    }



   return 0;
}
