#include<iostream>
 using namespace std;

 bool palindrome(string s, int l, int r)
 {
     if(l >= r)
     {
         return true;
     }
     if(s[l] != s[r])
     {
         return false;
     }
     return palindrome(s,l+1,r-1);
 }

 int main()
 {
     string s;
     cin>>s;
     bool temp = palindrome(s,0,s.length()-1);

     if(temp == true)
     {
         cout<<"Yes"<<endl;
     }
     else{
        cout<<"No"<<endl;
     }
 }
