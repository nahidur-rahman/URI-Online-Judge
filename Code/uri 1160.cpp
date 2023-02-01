#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, pa, pb, s1, s2, i, j;
    double ga, gb;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>pa>>pb>>ga>>gb;

        for(j=1;j<=101;j++)
        {
            if(j==101)
                cout<<"Mais de 1 seculo."<<endl;
            s1=pa+pa*(ga*.01);
            s2=pb+pb*(gb*.01);

            if(s1>s2)
            {
                cout<<j<<" anos."<<endl;
                break;
            }
            pa=s1;
            pb=s2;

        }

    }

    return 0;
}
