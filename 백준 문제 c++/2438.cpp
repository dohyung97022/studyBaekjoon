#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i1;
    cin>>i1;
    for (int i=1; i<=i1; i++){
        for (int q=1; q<=i; q++){
            cout<<"*";
        }
        cout<<"\n";
    }
}