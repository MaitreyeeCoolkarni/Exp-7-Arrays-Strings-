#include <iostream>
using namespace std;
int main() {
    string a;
    bool isPalindrome;
    cout << "Enter a string: ";
    cin>>a;
    int n=a.length();
    cout<<"Reverse string is: ";
    for(int i=n;i>=0;i--){
        cout<<a[i];
    }
    for(int i=0;i<n/2;i++){
        if(a[i] == a[n-1-i]){
            isPalindrome=true;
            cout<<endl<<"It is palindrome";
            break;
        }
        else{
            cout<<endl<<"It is not palindrome";
            break;
            }
    }
    return 0;
}
/*Output
Enter a string: dad
Reverse string is: dad
It is palindrome
Enter a string: hello
Reverse string is: olleh
It is not palindrome*/
