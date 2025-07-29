#include <iostream>
using namespace std;
//To find the number in the array.
int main() {
    
int arr[5]={10,20,30,40,50};
int key;

cout<<"Enter a key ";
cin>>key;

for(int i=0;i<5;i++){
    if(key==arr[i]){
        cout<<"Key is at location "<< i;
    }
}

}

//Output
//Enter a key 20
//Key is at location 1
