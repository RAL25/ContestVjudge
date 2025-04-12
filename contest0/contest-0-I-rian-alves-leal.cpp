#include<iostream>
#include<vector>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int a=0; a<T; a++){
        int n, i, j, k;
        cin>>n;
        vector<int> p(n+1);
        for(int b=1; b<=n; b++) cin>>p[b];
        bool check = false;
        for(int c=2; c<=n-1; c++){
            if(p[c-1] < p[c] && p[c] > p[c+1]){
                check = true;
                i = c-1;
                j = c;
                k = c+1;
            }
        }
        if(check) cout<<"YES"<<endl<<i<<" "<<j<<" "<<k<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}