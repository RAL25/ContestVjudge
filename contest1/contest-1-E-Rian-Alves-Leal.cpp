#include<iostream>
#include<vector>
using namespace std;
string checar2(string frase){
    string resultado;
    for(char a: frase){
        if(isdigit(a)) resultado += a;
    }
    return resultado;
}
string checar(string solucao, string time){
    if(solucao==time) return "Accepted";
    else if(checar2(solucao) == checar2(time)) return "Presentation Error";
    return "Wrong Answer";
}
int main(){
    int x=1;
    while(1){
        int n1;
        cin>>n1;
        cin.ignore();
        if(n1==0) break;
        string solucao, time, aux;
        for(int i=0; i<n1; i++){
            getline(cin,aux); 
            solucao+=aux;
        } 
        int n2;
        cin>>n2;
        cin.ignore();
        for(int i=0; i<n1; i++){
            getline(cin,aux); 
            time+=aux;
        } 
        cout<<"Run #"<<x<<": "<<checar(solucao,time)<<endl;
        x++;
    }

    return 0;
}