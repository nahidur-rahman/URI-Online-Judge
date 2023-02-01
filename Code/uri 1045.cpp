#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,x,y,z;
    cin>>a>>b>>c;
    if(a==b&&a==c)
    {
        x=a;
        y=b;
        z=c;
    }
    else if(a==b&&a!=c)
    {
        if(a>c)
        {
            x=a;
            y=b;
            z=c;
        }
        else
        {
            x=c;
            y=a;
            z=b;
        }
    }
    else if(b==c&&b!=a)
    {
        if(a>b)
        {
            x=a;
            y=b;
            z=c;
        }
        else
        {
            x=b;
            y=a;
            z=c;
        }
    }
    else if(a==c&&a!=b)
    {
        if(a>b)
        {
            x=a;
            y=b;
            z=c;
        }
        else
        {
            x=b;
            y=a;
            z=c;
        }
    }

    else if(a>b&&a>c)
    {
        x=a;
        if(b>c)
        {
            y=b;
            z=c;
        }
        else
        {
            y=c;
            z=b;
        }
    }
    else if(b>a&&b>c)
    {
        x=b;
        if(a>c)
        {
            y=a;
            z=c;
        }
        else
        {
            y=c;
            z=a;
        }
    }
    else if(c>b&&c>a)
    {
        x=c;
        if(b>a)
        {
            y=b;
            z=a;
        }
        else
        {
            y=a;
            z=b;
        }
    }

    if(x>=(y+z))
        cout<<"NAO FORMA TRIANGULO"<<endl;
        else
        {
            if((x*x)==((y*y)+(z*z)))
                cout<<"TRIANGULO RETANGULO"<<endl;
            if((x*x)>((y*y)+(z*z)))
                cout<<"TRIANGULO OBTUSANGULO"<<endl;
            if((x*x)<((y*y)+(z*z)))
                cout<<"TRIANGULO ACUTANGULO"<<endl;
            if(x==y&&x==z)
                cout<<"TRIANGULO EQUILATERO"<<endl;
            if((x==y&&x!=z)||(y==z&&y!=x)||(x==z&&x!=y))
                cout<<"TRIANGULO ISOSCELES"<<endl;
        }
    return 0;
}
