#include <vector>
#include <iostream>

using namespace std;


int main() {
    vector<int> v;
    int n,a,b,c,d;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>a;
        v.push_back(a);
    }
    cin>>b;
   v.erase(v.begin()+b-1);
   cin>>c>>d;
   v.erase(v.begin()+c-1,v.begin()+d-1);
   
   cout<<v.size()<<endl;
   
   for (int num: v) {
   cout<<num<<" ";
   }
   
    
    return 0;
}
