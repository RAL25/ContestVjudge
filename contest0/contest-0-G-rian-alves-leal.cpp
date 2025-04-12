#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    for(int i=0; i<n; i++){
        string ini, fim;
        int entre = 0;
        cin>>a;
        if(a.length()<=10) cout<<a<<endl;
        else{
            ini = a[0];
            fim = a[a.length()-1];
            for(int j=1; j<=a.length()-2; j++){
                entre++;
            }
            cout<<ini<<entre<<fim<<endl;
        }
    }
}