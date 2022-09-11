#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    int res=min(a,b);
    while(res){
        if(a%res==0 && b%res==0) return res;
        res--;
    }

}