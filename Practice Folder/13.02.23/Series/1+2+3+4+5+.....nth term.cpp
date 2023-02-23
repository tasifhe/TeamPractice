//* 1+2+3+4+5+6+7+8+9+10+.....nth term
//* Solved by Tasif Hossain Emon
//* Student of SMUCT //BATCH 29th //ID:221071042
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter the value of nth term: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
        cout<<i<<"+";
    }
    cout<<"....";
    cout<<"\nSum of the series is:"<<sum;
    return 0;
}