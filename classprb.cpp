#include <iostream>
#include <sstream>
using namespace std;
class Student{
    private:
    int age;
    int standard;
    string name;
    string lastname;
    public:
        void set_age(int n){
            age=n;
        }
        void set_standard(int s){
            standard=s;
        }
        void set_first_name(string f){
            name=f;
        }
        void set_last_name(string l){
            lastname=l;
        }
        void get_age()
        {
            cout<<age;
        }
        void get_last_name()
        {
            cout<<lastname;
        }
        void get_first_name()
        {
            cout<<name;
        }
        void get_standard()
        {
            cout<<standard;
        }
};

int main() {
    int age, standard;
    string firstname, lastname;
    
    cin >> age >> standard >> firstname >> lastname;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(firstname);
    st.set_last_name(lastname);
    
    cout<< st.get_age() <<", ";
    cout<< st.get_first_name() << ", " << st.get_last_name() << ", ";
    cout<< st.get_standard() << "\n";
    
    
    return 0;
}
