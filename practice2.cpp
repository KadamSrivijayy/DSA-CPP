#include<iostream>
using namespace std;
class user_defined{
    private:
    int marks;
    int roll_no;
    char grades;

    public:
    void setter(int mark, int roll, char g){
        marks=mark;
        roll_no=roll;
        grades=g;
    }
    void getter(){
        cout<< marks<<" "<< roll_no<< " "<<grades;
    }
    user_defined(int mark, int roll, char gr){
        marks = mark;
        roll_no = roll;
        grades = gr;
    }
    user_defined(int roll){
        roll_no = roll;
    }
};

int main(){
    user_defined obj_1(100, 5, 'A'), obj_2(2);
    obj_1.getter();
    cout<<endl;
    obj_2.getter(); 
}
