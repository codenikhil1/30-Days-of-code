#include <iostream>
using namespace std;
int main() {
    int t,k;
    cin>>t;
    for(k=0;k<=t;k++)
    {
    string s;
   cin>>s;
    int lengt=s.length();
    for(int i=0;i<lengt;i++){
        if(i%2==0)
            cout<<s[i];
        
    }
    cout<<" ";
     for(int j=0;j<lengt;j++){
       if (j % 2 != 0) 
         cout <<s[j];
       
     }
     cout<<endl;
    }
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
