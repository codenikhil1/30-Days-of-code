#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class Calculator{
        int n,p;
        public:
            int power(int p,int n){
                if(p>=0 && n>=0){
                    return (int) pow(p,n);
                    
                }
                else{
                    throw invalid_argument("n and p should be non-negative");
                }
               
            }
};
int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}
