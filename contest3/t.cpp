#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, aux, maximo=0;
    cin>>n;
    int array[n];
    for(int i=1; i<=n; i++){
        cin>>aux;
        array[i] = aux;
    }
    aux=1;
    if(n==1) maximo=1;
    for(int i=1; i<n; i++){
        if(array[i] < array[i+1]) aux++;
        else aux=1;
        maximo = max(maximo, aux);
    }
    cout<<maximo<<endl;
    return 0;
}