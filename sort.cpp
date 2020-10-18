#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    vector<int> a;
    a.push_back(-4);
    a.push_back(-1);
    a.push_back(0);
    a.push_back(3);
    a.push_back(10);
    for(int i=0; i<a.size();i++){
        a[i]*=a[i];
    }
    set<int> arr;
    for(int i : a){
        arr.insert(i);
    }
    for(int i:arr){
        cout<< i <<endl;
    }

}