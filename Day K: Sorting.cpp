#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,p=0;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                p++;
            }
        }
    }
   
    cout<<"Array is sorted in "<<p<<" swaps.\n";
    cout<<"First Element: "<<a[0];
    cout<<"\nLast Element: "<<a[a.size()-1];
    return 0;
}

