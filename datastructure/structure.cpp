#include <iostream>
using namespace std;
struct student{
    string name;
    float gpa;
    bool enrolled;

};
int main(){
    student student1;
    student1.name="Allan kinuthia mungai";
    student1.gpa=67.9;
    student1.enrolled=true;
    cout<< student1.name<<std::endl;
    cout<<student1.gpa<<std::endl;
    cout<<student1.enrolled<<std::endl;
    return 0;



}
