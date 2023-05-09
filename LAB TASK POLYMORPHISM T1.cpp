#include<iostream>
using namespace std;
using std::endl;

class Base{
	public:
		virtual void testFunction ();
		
};
class Derived : public Base {
	public: 
	void testFunction();
 };

//#include "Task1.h"
void Base :: testFunction (){
	cout<<" Base class "<<endl;
	
}
void Derived :: testFunction (){
	cout<<" Derived class "<<endl;
}
//#include "Task1.h"
int main (void){
	Base*ptr=new Base ;
	ptr -> testFunction();
	delete ptr;
	ptr= new Derived;
	ptr -> testFunction();
	delete ptr;
	return 0;
}
