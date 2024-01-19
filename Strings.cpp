#include<iostream>

using namespace std;

int GetLength(char name[]){
    int count = 0;

    for(int i = 0; name[i] != '\0' ; i++){
        count++;
    }

    return count;
}

void Reverse(char name[] , int n){
    int s = 0;
    int e = n-1;

    while(s < e){
        swap(name[s++] , name[e--]);
    }
}

int main(){
    char name[20];

    cout << "Enter your name" << endl;
    cin >> name;
    // name[2] = '\0';
    //cin will not take the entry after space.space denotes null char \0;;

    cout << "your name is " << name << endl;

    int length = GetLength(name);
    cout << "Length of Char Array is " << GetLength(name) << endl;

    Reverse(name , length);
    cout<< "name ; " << name << endl;
    return 0;
}