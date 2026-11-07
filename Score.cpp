#include<iostream>
#include<string>
using namespace std;

int main() {
    string name;
    double score;
    string results;

    cout << "Enter Your Name";
    cin >>name;
    cout <<"Enter Your Score out Of 100: ";
    cin >> score;

    if(score >=75) {
        results = "Distinction";
    } 
     else if (score >= 56) {
        results = "Merit";
        }
        else if (score >= 45) {
            results = "Pass";            
        }
        else {
            results = "Fail";
        }

        cout <<endl;
        cout << "                "<<endl;
        cout <<"Name: "<< name<<endl;
        cout <<"Score: "<<score<<endl;
        cout <<"                 "<<endl;
        cout <<"Results: "<<results<<endl;
        cout <<"                 "<<endl;

        return 0;

    }