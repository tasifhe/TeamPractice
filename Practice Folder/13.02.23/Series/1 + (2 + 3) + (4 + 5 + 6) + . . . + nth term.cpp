//*1 + (2 + 3) + (4 + 5 + 6) + . . . + nth term//* Using Loop
//* Solved by Tasif Hossain Emon
//* Student of SMUCT //BATCH 29th //ID:221071042
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of nth term: ";
    cin >> n;

    int sum = 0, term = 1;

    for (int i = 1; i <= n; i++) {
        int term_sum = 0;
        for (int j = 0; j < i; j++) {
            term_sum += term;
            term++;
            cout<<term<<"+";
        }
        sum += term_sum;
    }
    cout<<"....";
    cout << "\nSum of the series is: " << sum << endl;
    return 0;
}