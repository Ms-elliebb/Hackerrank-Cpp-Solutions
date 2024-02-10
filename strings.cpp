#include <string>
#include <iostream>

using namespace std;


int main() {
    string a,b;
    cin>>a>>b;
    
    int lena=a.size();int lenb=b.size();string c=a+b;
    
    string d=b[0]+a.substr(1);
    string e=a[0]+b.substr(1);
    
    
    cout<<lena<<" "<<lenb<<endl;
    cout<<c<<endl;
    cout<<d<<" "<<e<<endl;
    
    
    return 0;
}
