#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    
    if(n%2!=0)
    {
        cout<<"Weird";
    }
   else if (n<=5) {
       cout<<"Not Weird";
   }
   else if(n<=20){
       cout<<"Weird";
   }
   else if(n>20){
       cout<<"Not Weird";
   }

    return 0;
}
