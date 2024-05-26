#include <iostream>
using namespace std;

int main() {
    int num,i;
    cout<<"Enter the number : ";
    cin>>num;
    for(i=1;i>=10;++i)
    {
        if(i==9)
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }

    


        return 0;
}