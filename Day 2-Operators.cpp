#include <bits/stdc++.h>
#include<cmath>

using namespace std;


int main()
{

  string temp;
  getline(cin,temp);
  double meal_cost=stod(temp);
  getline(cin, temp);
  int tip_percent=stoi(temp);
    getline(cin,temp);
int tax_percent=stoi(temp);
  int total;
  double tip = meal_cost * (double(tip_percent) / 100);
  double tax = meal_cost * (double(tax_percent) / 100);
  int totalcost =round(meal_cost + tip + tax);
  total = int(totalcost);
  cout << total;
}
