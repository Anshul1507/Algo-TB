#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

ll get_fibonacci_huge_naive(ll n, ll m) {
    if (n <= 1)
        return n;

    ll previous = 0;
    ll current  = 1;

    for (ll i = 0; i < n - 1; ++i) {
        ll tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}
ll get_remainder_length(ll m){
    ll f1=0,f2=1,f=f1+f2;
    for(int i=0;i<m*m;i++){
        f=(f1+f2) % m;
        f1 = f2;
        f2 = f;
        if(f1 == 0 && f2 == 1)
            return i+1;
    }
}

int get_fib_huge(ll n, ll m){
    ll remainder = n % get_remainder_length(m);
    
    ll f1=0,f2=1,f=remainder;
    
    for(int i=1;i<remainder;i++){
        f=(f1+f2)%m;
        f1=f2;
        f2 = f;
    }
    return f%m;
}

int main() {
    ll n, m;
    cin >> n >> m;
    cout << get_fib_huge(n,m) << '\n';
}
