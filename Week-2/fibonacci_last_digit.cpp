#include <bits/stdc++.h>

int fib(int n) 
{ 
  unsigned long long int a = 0, b = 1, c, i; 
  if( n == 0) 
    return a%10; 
  for (i = 2; i <= n; i++) 
  { 
     c = (a%10 + b%10)%10; 
     a = b%10; 
     b = c%10; 
  } 
  return b; 
} 
  



int main() {
    int n;
    std::cin >> n;
    int c = fib(n);
    std::cout << c << '\n';
    }
