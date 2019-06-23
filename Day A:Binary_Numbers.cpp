#include <bits/stdc++.h>
#include<algorithm>
using namespace std;



int main()
{
    int n;
    int sum=0,max=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n>0){
        if(n%2==1){
            sum++;
            if(sum>max)
                max=sum;
        }else
        sum=0;
        n=n/2;
    }
    cout<<max;

    return 0;
}
