#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, k, x, aux=0;
    cin>>n>>k>>x;
    vector<int> a(n+1);
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=n; i>0; i--){
        if(i>(n-k)) a[i]=x;
        aux+=a[i];
    }
    cout<<aux<<endl;
    return 0;
}