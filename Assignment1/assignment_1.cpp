#include<iostream>
using namespace std;

int fib(int k)
{
    if(k == 1 || k == 2)
    {
      return 1;
    }
    return fib(k-1) + fib(k-2);
}


int fibonacci_Sum(int n)
{
    if(n == 1)
    {
       return fib(1);
    }

    return fib(n) + fibonacci_Sum(n-1);
}


 int main()
 {
     int n;
     cin>>n;
     cout<<fibonacci_Sum(n)<<endl;
 }

