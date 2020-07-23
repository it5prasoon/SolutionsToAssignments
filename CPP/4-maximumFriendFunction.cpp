#include<iostream>
#include<stdio.h>

using namespace std;
class second;
class first
{
    int x;
    public:
        friend void max(first,second);
}f;
class second
{
    int y;
    public:
        friend void max(first,second);
}s;
void max(first x,second y)
{
    cin>>x.x;
    cin>>y.y;
    cout<<"\nFirst no: "<<x.x;
    cout<<"\nSecond no: "<<y.y;
    if(x.x>y.y)
    {
        cout<<"\n"<<x.x<<" is greater";
    }
    else
    {
        cout<<"\n"<<y.y<<" is greater";
    }
}
int main()
{
    max(f,s);
    return 0;
}
