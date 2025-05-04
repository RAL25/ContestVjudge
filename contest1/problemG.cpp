#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string linhaInput, linhaOutput="";
    while(getline(cin, linhaInput)){
        if (linhaInput.empty()) {
            if (!linhaOutput.empty()) {
                cout << linhaOutput << endl;
                linhaOutput.clear(); // <- IMPORTANTE
            }
            cout << endl;
            continue;
        }
        
        istringstream iss(linhaInput);
        string palavra;
        if(linhaInput[0]==' ') linhaOutput+="    ";
        while(iss>>palavra){
            if(linhaOutput.empty())
            linhaOutput = palavra;
            else if(linhaOutput.length() + 1 + palavra.length() <= 72)
            linhaOutput+=" "+palavra;
            else{
                cout<<linhaOutput<<endl;
                linhaOutput = palavra;
            }
        }
    }
    if(!linhaOutput.empty()) cout<<linhaOutput<<endl;
    
    return 0;
}