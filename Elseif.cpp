#include <iostream>
using namespace std;

int main() {
 int age;
 cout<<"Enter your age: ";
 cin>>age;
 if(age>=18 && age<=60)
 {
    cout<<"You are eligible";
    }

    else if(age>=0 && age<=18)
    {
        cout<<"You are not eligible";
    }
    else{
        cout<<"Invalid age";
    }

    return 0;
 
}

