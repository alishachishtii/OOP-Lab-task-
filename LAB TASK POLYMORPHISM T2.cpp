#include<iostream>
using namespace std;
using std::endl;
  
 class Mammal{
 	public:
 		Mammal(void);
 		~Mammal(void);
 		
 		virtual void Move () const ;
 		virtual void Speak () const ;
 		
 		protected :
 			int itsAge;
 }; 
 
Mammal :: Mammal (void) : itsAge(1){
	cout<<" Mammal Constructor "<<endl;

}

Mammal :: ~Mammal (void){
	cout<<" Mammal Destructor "<<endl;
	
}

void Mammal :: Move() const{
cout<<" Mammal moves a step! "<<endl;

}

void Mammal :: Speak() const{
cout<<"What does a mammal speak? "<<endl;

}

class Dog : public Mammal{
	public:
		Dog(void);
		~Dog(void);
		virtual void Bark () const;
		 void Move () const;
		 
		 protected:
		 	int itsAge;
		
}; 

Dog :: Dog(void) : itsAge(2){
	cout<<" Dog Constructor "<<endl;
	
}

Dog :: ~Dog (void){
	cout<<" Dog Destructor "<<endl;
	
}

void Dog :: Move() const{
    cout<<" Dog runs a step! "<<endl;
    
}

void Dog :: Bark () const {
    cout<<" Dog is barking "<<endl;
    
}
