#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Age";
    cin >> age;

if(age >= 18) {
    cout <<"You can Vote";
} else{
    cout << "Not Eligible to Vote";
}

return 0;
}