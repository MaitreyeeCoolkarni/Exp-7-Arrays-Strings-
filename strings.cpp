//Strings

#include <iostream>
using namespace std;
int main() {
    char str1[4]="C++";
    char str2[]={'C','+','+','\0'};
    char str3[4]={'c','+','+','\0'};
    string str4="C++";
    cout<<"The strings are : "<<endl<<str1<<endl<<str2<<endl<<str3<<endl<<str4<<endl;

    return 0;
}
/*Output
The strings are : 
C++
C++
c++
C++*/
