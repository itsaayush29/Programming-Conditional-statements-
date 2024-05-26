#include<iostream>
using namespace std;

int  main()
{
int grade;
cout<<"Enter your grade = ";
cin>>grade;
switch(grade){
     case 90:

         cout<<"Excellent";

         break;

      case 75 :

        cout<<"Good";

         break;

      case 60 :
      
       cout<<"Passed";

         break;

      case 33 :

         cout<<"Failed";

         break;

      default :

         cout<<"Invalid";

}

return 0;
}