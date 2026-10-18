#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// print 1 to n
// Approach-1
class solution{
public:
    void printnum(int n){
        if (n > 10){//Base Case
            return;
        }
        cout << n << " ";
        printnum(n + 1);//Recursion Call
    }
};

// Approach-2
class Method{
public:
    void printnum(int i, int n){
        if (i == n){//Base Case
            return;
        }
        cout << i << " ";
        printnum(i + 1, n);//Recursion call
    }
};

//Approach-3
class solution{
    private:
    void printnume(int i,int n){
        if(i>=n){//Base case
            return;
        }
        cout<<i<<" ";
        printnum(i+1,n);//Recursion Call
    }
    public:
    void printnum(int n){
        printnume(1,n);//Function Call
    }
};
int main(){
    solution sol;
    int n = 1;
    sol.printnum(n);
    cout << endl;

    Method slo;
    int i = 1, m = 10;
    slo.printnum(i, m);
    cout << endl;

    return 0;
}
