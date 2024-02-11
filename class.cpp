#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student{
    private:
    int age;
    string first_name,last_name;
    int standart;
    
    public:
    void set_age(int a){
        age=a;
    }
    int get_age() const {
        return age;
    }
    void set_first_name(const string& fname){
    first_name=fname;
    }
    string get_first_name() const {
        return first_name;
    }
    void set_last_name(const string& lname){
        last_name=lname;
    }
    string get_last_name() const {
        return last_name;
    }
    void set_standart(int s){
        standart=s;
    }
    int get_standart() const {
        return standart;
    }
    
    
    string to_string() const {
        stringstream ss;
        ss<<age<<","<<first_name<<","<<last_name<<","<<standart;
        return ss.str();
    }
};

int main() {
    int age,standart;
    string first_name,last_name;
    cin>>age>>first_name>>last_name>>standart;
    
    
    Student student;
    
    student.set_age(age);
    student.set_first_name(first_name);
    student.set_last_name(last_name);
    student.set_standart(standart);
    
    cout<<student.get_age()<<endl;
    cout<<student.get_last_name()<<", "<<student.get_first_name()<<endl;
    cout<<student.get_standart()<<endl<<endl;
    
    cout<<student.to_string()<<endl;
    
    return 0;
}
