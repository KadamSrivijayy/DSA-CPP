#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout("sample.txt");
    fout<<"Hello World"<<endl;
    fout<<"I am a C++ Programmer"<<endl;
    fout<<"I love programming"<<endl;
    fout.close();
}