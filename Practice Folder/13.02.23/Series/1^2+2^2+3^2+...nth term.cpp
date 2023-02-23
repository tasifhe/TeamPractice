//* 1^2+2^2+3^2+4^2+5^2+6^2+7^2+8^2+9^2+10^2+.....nth term
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
        sum+=i*i;
        cout<<i<<"^2+";
    }
    cout<<"....";
    cout<<"\nSum of the series is:"<<sum;
    return 0;
}