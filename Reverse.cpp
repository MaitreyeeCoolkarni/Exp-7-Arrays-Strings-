#include <iostream>
using namespace std;
int main() {
    string a;
    string z;
    cout << "Enter a string: ";
    cin>>a;
    int n=a.length();
    cout<<"Reverse string is: ";
    for(int i=n;i>=0;i--){
        cout<<a[i];
    }
    
    return 0;
}
/*Output 
Enter a string: Hello
Reverse string is: olleH*/
