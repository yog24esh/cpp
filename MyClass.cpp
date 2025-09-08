#include<iostream>
#include<cstring>

using namespace std;


class MyClass{
    private:
        double i;
        double j;
        double k;
        char* name;
    public:
    //default constructor
        MyClass(){
            i=0;
            j=0;
            k=0;
            name=nullptr;
        }
    //parameterized constructor
        MyClass(int i, int j, int k, char* nm){
            this->i=i;
            this->j=j;
            this->k=k;
            name = new char[strlen(nm)+1];
            strcpy(name,nm);
        }
    //deep copy constructor
        MyClass(MyClass& obj){
            this->i = obj.i ;
            this->j = obj.j;
            this->k = obj.k;
            this->name = new char[strlen(obj.name)+1];
            strcpy(this->name,obj.name);
        }
    // + operator overloading
        MyClass operator + (MyClass obj){
            MyClass ob3;
            ob3.i = this->i+obj.i;
            ob3.j =  this->j+obj.j;
            ob3.k = this->k+obj.k;
           ob3.name = new char[strlen(this->name)+strlen(obj.name)+1];
           strcpy( ob3.name, this->name);
            strcat( ob3.name, obj.name);
            return ob3;
        }
    // - operator overlaoding
        MyClass operator - (MyClass obj){
            MyClass ob3;
            ob3.i = this->i-obj.i;
            ob3.j =  this->j-obj.j;
            ob3.k = this->k-obj.k;
            ob3.name = new char[strlen(this->name)+1];
            strcpy( ob3.name, this->name);
            return ob3;
        }
    // * operator overloading
       MyClass operator * (MyClass obj){
            MyClass ob3;
            ob3.i = this->i * obj.i;
            ob3.j = this->j * obj.j;
            ob3.k = this->k * obj.k;
            ob3.name = new char[strlen(this->name)+1];
            strcpy(ob3.name,this->name);
            return ob3;
       } 

       MyClass operator / (MyClass obj){
            MyClass ob3;
            ob3.i = this->i / obj.i;
            ob3.j = this->j / obj.j;
            ob3.k = this->k / obj.k;
            ob3.name = new char[strlen(this->name)+1];
            strcpy(ob3.name,this->name);
            return ob3;

       }
       bool operator == (MyClass obj){
            if(this->i!=obj.i) return 0;
            if(this->j!=obj.j) return 0;
            if(this->k!=obj.k) return 0;
            if(strcmp(this->name,obj.name))return 0;
            return 1;
       }

        void display(){
            cout<<"i: "<<this->i<<endl;
            cout<<"j: "<<this->j<<endl;
            cout<<"k: "<<this->k<<endl;
            cout<<"Name: "<<this->name<<endl;
        }

};