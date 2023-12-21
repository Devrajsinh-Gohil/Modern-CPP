#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v{ 1,3,13,24,14,7};
    int d = 10;
    auto something = [d](int x){cout<<x+d<<endl;};
    for_each(v.begin(),v.end(),something);
    return 0;
}