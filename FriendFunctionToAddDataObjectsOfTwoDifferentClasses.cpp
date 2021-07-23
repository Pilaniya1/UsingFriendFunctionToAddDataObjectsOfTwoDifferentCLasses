#include<iostream>
using namespace std;
class ABC;
class XYZ
{
    int data;
    public:
    void setvalue(int value)
    {
        data=value;
    }
    friend void add(XYZ,ABC);//Friend function declaration
};
class ABC
{
    int data;
    public:
    void setvalue(int value){
        data=value;
    }
    friend void add(XYZ ,ABC);//friend function declaration
};
void add(XYZ obj1,ABC obj2)//friend function definition
{
    cout<<"Sum of data values of XYZ and ABC objects using friend function ="<<obj1.data+obj2.data;
}
int main(){
    XYZ X;
    ABC A;
    X.setvalue(5);
    A.setvalue(50);
    add(X,A);//Calling friend function
    return 0;
}