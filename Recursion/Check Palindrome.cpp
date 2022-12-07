#include<iostream>
using namespace std;
  string str;

bool isPalindrome(int i){
    int n=str.size();
     if(i>=n/2)return true ;
     if(str[i]!=str[n-i-1])return false;
     return isPalindrome(i+1);

}
int main(){
  
    cout<<"Enter a string :";
    cin>>str;
   int check= isPalindrome(0);
   if(check)cout<<"The String is Palindrome!!";
   else cout<<"The String is not Palindrome!!";
   return 0;
}
