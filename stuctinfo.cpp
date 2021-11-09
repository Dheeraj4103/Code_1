#include <bits/stdc++.h>
#define ll long long int
using namespace std;

struct employee
{
    string name;
    string dob;
    int empid, salary;
};


int main(){
  ios::sync_with_stdio(false); cin.tie(0);
  struct employee emp[2];
  for (int i = 0; i < 2; i++){
      cin >> emp[i].name >> emp[i].empid >> emp[i].dob >> emp[i].salary;
  }
  cout << "Name   " << "Employee ID   " << "DOB   " << "Salary   " << endl;
  for (int i = 0; i < 2; i++){
      cout << emp[i].name << "   "<< emp[i].empid << "   "<< emp[i].dob << "   "<< emp[i].salary<< endl;
  }

  
  return 0;
}