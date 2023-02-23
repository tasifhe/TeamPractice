//* https://acm.timus.ru/problem.aspx?space=1&num=1068
//! sum of all integer numbers lying between 1 and N inclusive.
//* Solved by Tasif Hossain Emon
//* Student of SMUCT //BATCH 29th //ID:221071042
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = (n>0? n*(n+1)/2 : 1+n*(1-n)/2);
    cout << sum << endl;
    return 0;
}