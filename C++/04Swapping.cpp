/*Gautham Krishna P*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter two Integer"<<endl;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"Entered Integers"<<endl;
    cout<<"[ "<<a<<" ]\n[ "<<b<<" ]"<<endl;
    return (0);
}