#include <iostream>
using namespace std;
//To find the number in the array.
int main() {
int arr[5]={100,20,60,40,50};
int min=arr[0];
int max=arr[0];
for(int i=0;i<5;i++){
    if(min>arr[i]){
        min=arr[i];
    if(max<arr[i]){
        max=arr[i];
    }
    }
}
cout<<"The minimum number is:"<<min<<endl;
cout<<"The maximum number is:"<<max<<endl;
}

//Output
//The minimum number is:20
//The maximum number is:100
