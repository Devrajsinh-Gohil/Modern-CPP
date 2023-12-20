#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v{ 1,3,13,24,14,7};
    auto smth = [](int x){cout<<x<<endl;};
    for_each(v.begin(),v.end(),smth);
    return 0;
}