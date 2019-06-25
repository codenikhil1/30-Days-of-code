#include<iostream>
using namespace std;


int main(){
    try{
        string s;
        cin>>s;
        int x=stoi(s);
        cout<<x;
        
    }
    catch(exception){
        cout<<"Bad String";
    }
}

