#include<iostream>
 using namespace std;

 int subset_Sum(int A[], int n, int sum)
 {
     if(sum == 0)
     {
         return 1;
     }
     if(sum<0 || n == 0)
     {
         return 0;
     }
     return subset_Sum(A,sum-A[n-1],n-1) || subset_Sum(A,sum,n-1);

 }

 int main()
 {
     int sum;

     int A[] = {10,20,30,40};
     int n = sizeof(A)/sizeof(A[0]);
     cout<<"Sum: ";
     cin>>sum;
     if(subset_Sum(A,n,sum) == 1)
     {
         cout<<"Yes"<<endl;
     }
     else{
        cout<<"No"<<endl;
     }

 }
