#include<iostream>
#include<cmath>
using namespace std;
bool verifica(int num){
    if(num<=1) return false;
    int raiz = sqrt(num);
    for(int j=2; j<=raiz; j++){
        if(num%j==0) return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        for(int i=m; i<=n; i++){
            if(verifica(i)) cout<<i<<endl;
        }
        cout<<endl;
    }
    return 0;
}