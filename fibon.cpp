#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum = 1, presum = 0;
    cout << presum << endl;
    while (sum < 1000){
        cout << sum << endl;
        sum = sum + presum;
        presum = sum - presum;

    }
}