#include <bits/stdc++.h>
using namespace std;


long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}

/* We are using here :
        a*b = LCM(a,b) * GCD(a,b)
        so LCM(a,b) = (a*b)/GCD(a,b)
*/        
        
long long gcd_fast(int a,int b){
    if(b==0){
        return a;
    }else{
        return gcd_fast(b,a%b);
    }
}

long long lcm_fast(long long a, long long b) {
    long long lcm = 0L;
    lcm = (a*b)/gcd_fast(a,b);
    return lcm;
}


int main() {
  long long a, b;
  cin >> a >> b;
  cout << lcm_fast(a, b) << endl;
  return 0;
}
