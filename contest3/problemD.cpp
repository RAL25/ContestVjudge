#include<iostream>
using namespace std;
int main(){
    int t, n, m, k, total;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        total = (m-1) + (n-1)*m;
        cout<<(total==k?"YES":"NO")<<endl;
    }
    return 0;
}