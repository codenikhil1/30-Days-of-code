#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool prime(int no){
    if(no==1)
        return false;
    else{
        for(int i=2;i*i<=no;i++){
            if(no%i==0)
                return false;
            


        }
        return true;
    }

}
int main() {
            int t,a,count;
            cin>>t;
            for(int i=0;i<t;i++){
                cin>>a;
                if(prime(a)){
                    cout<<"Prime"<<endl;
                }
                else
                    cout<<"Not prime"<<endl;

            }

            
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
