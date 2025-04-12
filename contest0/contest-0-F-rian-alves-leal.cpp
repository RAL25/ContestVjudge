#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int l1, l2, l3;
        cin>>l1>>l2>>l3;
        vector<int> sticks = {l1,l2,l3};
        sort(sticks.begin(),sticks.end());
        if(sticks[2]==sticks[0]+sticks[1]){
            cout<<"YES"<<endl;
            continue;
        }
        if(sticks[0] == sticks[1] && sticks[2] % 2 == 0){
            cout<<"YES"<<endl;
            continue;
        }
        if(sticks[2] == sticks[1] && sticks[0] % 2 == 0){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}