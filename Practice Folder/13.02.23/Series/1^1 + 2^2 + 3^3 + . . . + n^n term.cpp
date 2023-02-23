//* 1^1 + 2^2 + 3^3 + . . . + n^n term
//* Solved by Tasif Hossain Emon
//* Student of SMUCT //BATCH 29th //ID:221071042
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,term;
    cout<<"Enter the value of nth term: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        term=pow(i,i);
        sum+=term;
        cout<<i<<"^"<<i<<"+";
    }
    cout<<"....";
    cout<<"\nSum of the series is:"<<sum;
    return 0;
}