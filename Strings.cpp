#include<iostream>

using namespace std;

int GetLength(char name[]){
    int count = 0;

    for(int i = 0; name[i] != '\0' ; i++){
        count++;
    }

    return count;
}

int main(){
    char name[20];

    cout << "Enter your name" << endl;
    cin >> name;
    // name[2] = '\0';
    //cin will not take the entry after space.space denotes null char \0;;

    cout << "your name is " << name << endl;
    cout << "Length of Char Array is " << GetLength(name) << endl;

    return 0;
}