#include<iostream>
using namespace std;
int main(){
    int n,aux;
    cin>>n;
    int f[n];
    for(int i=1; i<=n; i++){
        cin>>aux;
        f[i] = aux;
    }
    aux=0;
    for(int i=1; i<=n; i++){
        if(f[f[f[i]]]==i){
            aux=1;
            break;
        }
    }
    if(aux==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}