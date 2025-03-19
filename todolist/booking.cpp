#include <iostream>
#include <string>
using namespace std;
#define MAX_COUNT 100
struct Booking{
    string name;
    string  starring;
    string  date;
    bool completed;

};
class Todo{
    private:
    Booking book[MAX_COUNT];
    int count=0;
    int nextId=1;

    public:
    void bookEvent(string name,string starring,string date){
        if (count < MAX_COUNT){
            book[count] = {
            name,starring,date
            };
            count++;
            cout<<"Event booked successfully.\n";
        }else{
            cout<<"you cannot book extra event,BYE!!";
        }  
    }
    void displayEvent(){
        if(count==0){
            cout << "No events booked\n";
        }
        cout<<"\nAvailable booked events:\n";
        for(int i=0;i<count;i++){
            cout<<"name:"<<book[i].name<<"starring:"<< book[i].starring <<"date:" <<book[i].date <<endl;
        }
    }

};
    int main(){
         Todo booked;

        int choice;
        int count=0;
        do{
            cout<<"1.Book \n 2.view book eevents\n 3.mark as attended \n 4.Exit\n Enter a choice:";
            cin >> choice;
            cin.ignore();
            if(choice==1){
                
                string name,starring,date;
                cout<<"booking an event\n";
                cout<<"Enter the name:";
                getline(cin,name);
                
                cout<<"Who is the starring:";
                getline(cin,starring);
                cout<<"when is the event:" ;
                getline(cin,date);
                booked.bookEvent(name,starring,date);

            }
            else if(choice==2){
                booked.displayEvent();
            }
            else if(choice==3){
                cout<<"three\n";
            }
            else if(choice==4){
                cout<<"Thankyou for visitng our site.You are more welcome incase of another day you want to visit\n";
            }
            else{
                cout<<"invalid choice\n";
            }

        }while(choice!=5);
        
       
        
        
        return 0;
    }
