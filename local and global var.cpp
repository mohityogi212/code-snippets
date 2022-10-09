#include<iostream>
using namespace std;
//Can global and local variable can be made by same name ?
//Yes but precedence will be given to local variable
int glo = 6 ;
void sum() {
    int a ; 
     cout << glo;
}

int main() {
    int glo = 9 ;  // local variable take precedence over global var
    glo = 65;  //local var will get updated


    int a = 45, b = 6;
    float pi = 3.141;
    char c = 'b';
    bool is_true = true;
    sum() ; 
    cout << glo << is_true; 
    // cout << "sum is\n" << sum << "value of pi is \n"<< pi << "value of double num is : \n" << num <<"value of char is ";
   
}