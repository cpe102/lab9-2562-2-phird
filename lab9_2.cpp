#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string textline;
    ifstream source;
    source.open("cheerbook.txt");
    ofstream dest("cheerbook_copy.txt");
    dest << "-------------------- SOTUS ---------------------"<< endl ;
    while (getline(source,textline)){
     dest << textline << '\n';
    }
    dest << "-------------------- SOTUS ---------------------";
    source.close();
    return 0;
}

//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
