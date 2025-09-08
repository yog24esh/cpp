#include<iostream>
using namespace std;
#include "MyClass.cpp"

int main(){
    MyClass ob1(1,2,3,"Hello"),ob2(1,2,3,"Hello");
    ob1.display();
    ob2.display();
    cout<<"-----------------"<<endl;
    //MyClass ob3 = ob1+ob2;
    //MyClass ob3 = ob1-ob2;
    //MyClass ob3 = ob1*ob2;
   // MyClass ob3 = ob1/ob2;
   if(ob1==ob2){
    cout<<"true";
   }else cout<<"false";
   // ob3.display();


}