//* 1^1 + 2^2 + 3^3 + . . . + n^n term
//* Solved by Tasif Hossain Emon
//* Student of SMUCT //BATCH 29th //ID:221071042
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;
    int sign = 1;

    for (int i = 1; i <= n; i++)
    {
        sum += sign * i;
        sign *= -1;
        //cout<<i<<"-"<<i<<"+";
    }
    cout<<"....";
    cout<< "\nSum of the series is: " << sum << endl;

    return 0;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;

    if (n % 2 == 0) {
        sum = (n/2) * (n/2 + 1);
    } else {
        sum = ((n + 1)/2) * -n;
    }

    cout << "Sum of the series is: " << sum << endl;

    return 0;
}