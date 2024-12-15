#include <iostream>
using namespace std;
//class
class student{
    public:
    string name;
    int _class;
    int rollno;
    void input(){
        cout<<"enter ur class = "<<endl;
        cin>>_class;
        cout<<"enter ur name = "<<endl;
        cin>>name;
        cout<<"enter ur rollno = "<<endl;
        cin>>rollno;
    }
    void showdetails(){
        cout<<"his class is = "<<_class<<endl;
        cout<<"his name is = "<<name<<endl;
        cout<<"his rollno is = "<<rollno<<endl;
    }
    
} ;  
int main() {
 student vivek,akash; //objects
  vivek.input();
  akash.input();
  vivek.showdetails();
  return 0;
}