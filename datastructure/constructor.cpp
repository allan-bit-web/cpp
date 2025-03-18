#include <iostream>
using namespace std;
class student{
public:
    string name;
    double gpa;
    int age;
    student(string name,double gpa,int age){
        this->name=name;
        this->gpa=gpa;
        this->age=age;
    }

};
int main(){
    student student1("allan kinuthia mungai",49.34,29);
    cout<<student1.name<<'\n';
    cout<<student1.gpa<<'\n';
    cout<<student1.age<<'\n';
    return 0;

}
