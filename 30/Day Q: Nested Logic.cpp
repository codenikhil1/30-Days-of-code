#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
        int date,date1,month,month1,year,year1;
        int fine=0;
    cin>>date;
    cin>>month;
    cin>>year;

    cin>>date1;
    cin>>month1;
    cin>>year1;

    if(year>year1)
        fine=10000;
    else if(year==year1){
        if(month>month1){
            fine=500*(month-month1);
        }
        else if(month==month1 && date>date1){
            fine=15*(date-date1);
        }
        
    }
    cout<<fine;

    
     
    return 0;
}
