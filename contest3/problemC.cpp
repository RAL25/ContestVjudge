#include<iostream>
using namespace std;
int main(){
    string palavra;
    cin>>palavra;
    int n=palavra.size(), countQL=0, countQR=0, total=0;
    for(int i=0; i<n; i++){
        if(palavra[i]=='A'){
            for(int j=0; j<i; j++){     //Percorrendo o lado esquerdo
                if(palavra[j]=='Q')
                    countQL++;
            }
            for(int j=i+1; j<n; j++){   //Percorrendo o lado direito
                if(palavra[j]=='Q')
                    countQR++;
            }
        }
        total+=countQL*countQR;
        countQL=countQR=0;
    }
    cout<<total<<endl;
    return 0;
}