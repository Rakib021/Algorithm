#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    // step :1 Find base case

    if(n==0) return 0;
    if(n==1) return 1;

    // general case

int num1= fibonacci(n-1);
int num2= fibonacci(n-2);
return num1+num2;

}

int main(){
    int n;
    cin>>n;

    cout<<fibonacci(n)<<endl;
}