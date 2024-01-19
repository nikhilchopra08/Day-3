#include<iostream>

using namespace std;

int main(){
    char name[20];

    cout << "Enter your name" << endl;
    cin >> name;
    name[2] = '\0';
    //cin will not take the entry after space.space denotes null char \0;;

    cout << "your name is " << name << endl;

    return 0;
}