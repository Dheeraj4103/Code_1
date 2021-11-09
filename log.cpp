#include <bits/stdc++.h>
using namespace std;

int main(){
    int l = 0;
    while (l <= 10){
        int n;
        cin >> n;
        if (n >= 0){
            l++;
            cout << log(n) << endl;
        }
        else{
            cout << "Enter only Positive Numbers." << endl;
        }
    }
}
