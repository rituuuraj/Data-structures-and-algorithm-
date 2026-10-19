#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Check if String is Palindrome or No
class solution{
    private:
    bool check(string &s,int l,int r){
        if(l>=r) return true;
      if(s[l] !=s[r]) return false;
       return check(s,l+1,r-1);
    }
    public:
    bool checkpaildrom(string &s){
    check(s,0,s.length()-1);
    }
};
int main(){
    solution sol;
    string n="hannah";
    cout<<sol.checkpaildrom(n)<<endl;
    return 0;
}