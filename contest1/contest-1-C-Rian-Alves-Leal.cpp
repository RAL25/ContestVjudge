#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    string a,b;
    while(getline(cin,a) && getline(cin,b)){
        string subSequence="";
 
        for (int i=0; i < a.length(); i++){
            for (int j=0; j<b.length(); j++){
                if (a[i] == b[j]){
                    subSequence += a[i];
                    a[i] = '*'; 
                    b[j] = '&';
                }
            }
        }
 
        sort(subSequence.begin(),subSequence.end());
        cout << subSequence << endl;
    }
    return 0;
}