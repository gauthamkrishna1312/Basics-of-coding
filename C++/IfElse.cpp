#include<iostream>
using namespace std;
int main(){
    float a;
    cout<<"Enter a Real number"<<endl;
    cin>>a;
    if (a>0)
    {
        cout<<"You are entered a positive number"<<endl;
    }else if (a<0){
        cout<<"You are entered a negative number"<<endl;
    }else
    {
        cout<<"You are entered Zero"<<endl;
    }
    return (0);
}