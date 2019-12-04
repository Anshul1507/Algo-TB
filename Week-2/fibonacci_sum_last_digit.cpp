#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int get_fib_last_digit_fast(ll n){
   if(n<=1)
      return n;
   
   int previous = 0;
   int current = 1;
   
   for(int i=0;i<n-1;i++){
      int temp_previous = previous%10;
      previous = current%10;
      current = temp_previous + current%10;
   }
   
   return current%10;
}

int fib_sum_fast(ll n){
   int n_fib = (n+2)%60;
   int n_last = get_fib_last_digit_fast(n_fib);
   if(n_last == 0){
      return 9;
   }else{
      return n_last-1;
   }
}
int main() {
    ll n;
    cin >> n;
    cout << fib_sum_fast(n) << '\n';
}