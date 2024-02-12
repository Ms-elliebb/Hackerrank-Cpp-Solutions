#include <vector>
#include <iostream>
using namespace std;


int main() {
    vector<int> vector;
    int n,v;
    cin>>n;
    for (int i=0; i<n;i++) {
        cin>>v;
        vector.push_back(v);
    
    }
    
    
    sort(vector.begin(),vector.end());
    
    for (int num: vector) {
        cout<<num<<" ";
    
    }
    cout<<endl;
    return 0;
}
