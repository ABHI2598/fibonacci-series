#include<bits/stdc++.h>

using namespace std;

int fib(int n){
    if((n==0) || (n==1)){
        return n;
    }else{
        return (fib(n-1) + fib(n-2));
    }
}

int main(){
    int num , i=0;
    cout<<"Enter the number of terms: ";
    cin>>num;
    while(i<num){
        cout<<" "<< fib(i);
        i++;
    }

    return 0;

}
