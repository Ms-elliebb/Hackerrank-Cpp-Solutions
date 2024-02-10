#include <iostream>
#include <string>

using namespace std;
struct students{
    int age;
    string name;
    string lastName;
    int numOfStudent;
};

int main() {
 
    students ellie;
    cin>>ellie.age>>ellie.name>>ellie.lastName>>ellie.numOfStudent;
    cout<<ellie.age<<" "<<ellie.name<<" "<<ellie.lastName<<" "<<ellie.numOfStudent;
    
    return 0;
}
