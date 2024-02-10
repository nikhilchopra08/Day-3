#include<iostream>

using namespace std;

char TolowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

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

bool checkPalindrome(char a[] , int n){
    int s = 0;
    int e = n-1;

    while(s < e){
        if(TolowerCase(a[s]) != TolowerCase(a[e])){
            return 0;
        }else{
            s++;
            e--;
        }
        return 1;
    }
}

char GetmaxOcc(string s){
    int arr[26] = {0};

    //create an array for count of characters
    for(int i = 0; i < s.length() ; i++){
        char ch = s[i];
        //for lower case
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }else if(ch >='A' && ch <= 'Z'){
            number = ch - 'A';
        }
        arr[number]++;
    }

    int maxi = -1 , ans = 0;
    for(int i = 0; i < 26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

int main(){
    // char name[20];

    // cout << "Enter your name" << endl;
    // cin >> name;
    // // name[2] = '\0';
    // //cin will not take the entry after space.space denotes null char \0;;

    // cout << "your name is " << name << endl;

    // int length = GetLength(name);
    // cout << "Length of Char Array is " << GetLength(name) << endl;

    // Reverse(name , length);
    // cout<< "name ; " << name << endl;

    // bool palindrome = checkPalindrome(name , length);

    // cout << "the string is " << palindrome << endl;

    // cout << "Character is Lower Case : " << TolowerCase('A') << endl;

    // string s;
    // cin >> s;

    // cout << "max Occuring char "<< GetmaxOcc(s) << endl;

    // Home Work
    // char name[20];
    // cout << "enter name";
    // cin >> name;
    // name[2] = '\0';

    // cout<< name << " " << endl;

    // string s = "hello";

    // s[2] = '\0';

    // cout << s << " " << endl;


    return 0;
}