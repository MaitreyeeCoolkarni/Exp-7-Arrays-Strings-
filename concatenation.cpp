#include <iostream>
using namespace std;
int main() {
    string str1;
    cout << "Enter your name: "<<endl;
    cin>>str1;
    string str2;
    cout<<"Entered your surname: "<<endl;
    cin>>str2;
    string str=str1+" "+str2;
    cout<<"Your full name is: "<<str<<endl;

    return 0;
}
