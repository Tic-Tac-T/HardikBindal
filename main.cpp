#include <iostream>
using namespace std;

int main()
{
    // cout<<"Hello world!"<<endl;
    // cout<<"Next line"<<endl;
    // int a, b, c;
    // short sa = 9;
    // cout << sa;

    // camelCase Notation
    // int marksInMaths = 83;
    // cout << "The marks of the student in maths is " << marksInMaths << endl;

    // short a;
    // int b = 89;
    // long c;
    // long long d;
    // float const score = 45.32;
    // double score2 = 45.322;
    // long double score3 = 45.332;
    // // score = 34.2;
    // cout << "The score is " << score << endl;

    // int a,b;
    // cout<<"Enter First number:";
    // cin>>a;

    // cout<<"Enter second number:";
    // cin>>b;
    
    // cout<<"a + b is "<<a + b<<endl;
    // cout<<"a - b is "<<a - b<<endl;
    // cout<<"a * b is "<<a * b<<endl;
    // cout<<"a / b is "<<(float) a / b<<endl;
    // cout<<"a % b is "<<a % b<<endl;

    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>150){
        cout<<"Invalid age";
    }
    
    else if (age>=18){
        cout<<"You can vote!";
    }
    
    else{
        cout<<"You cannot vote!";
    }


    return 0;
}