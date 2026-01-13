#include<bits/stdc++.h>
using namespace std;

int findPrime(int n){
    if(n==2) return true;

    for(int i=2;i*i<n;i++){
        if(n%i==0) return 0;
    }

    return true;
}

int main(){
    int n;
    cin>>n;
    int i=2;
    while(n>1){
        if(findPrime(i)){
            cout << i << " ";
            if(n%i==0) n=n/i;
            else i++;
        }
        else i++;
    }
}