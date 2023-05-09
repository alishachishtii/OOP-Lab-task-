
#include<iostream>
using namespace std;
using std::endl;
  
  // Mammal class : Base class 
 class Mammal{
 	public:
 		Mammal(void);
 		~Mammal(void);
 		
 		void Move () const ;
 		void Speak () const ;
 		
 		
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
 // Dog class : Derived class
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
// Cat class : Derived class
class Cat : public Mammal{
public:
    Cat(void);
    ~Cat(void);
    virtual void Meow () const;
    virtual void Move () const;

protected:
    int itsAge;

};

Cat :: Cat(void) : itsAge(3){
    cout<<" Cat Constructor "<<endl;

}

Cat :: ~Cat (void){
    cout<<" Cat Destructor "<<endl;

}

void Cat :: Move() const{
    cout<<" Cat walks a step! "<<endl;
}

void Cat :: Meow () const {
    cout<<" Cat is meowing "<<endl;
}

// Horse class : Derived class
class Horse : public Mammal{
public:
 Horse(void);
    ~Horse(void);
    virtual void Neigh () const;
    virtual void Move () const;

protected:
    int itsAge;

};

Horse :: Horse(void) : itsAge(4){
    cout<<" Horse Constructor "<<endl;

}

Horse :: ~Horse (void){
    cout<<" Horse Destructor "<<endl;

}

void Horse :: Move() const{
    cout<<" Horse moves a step! "<<endl;
}

void Horse :: Neigh () const {
    cout<<" Horse is neighing "<<endl;
}

// GuineaPig class : Derived class
class GuineaPig : public Mammal{
public:
    GuineaPig(void);
    ~GuineaPig(void);
    virtual void Weep () const;
    virtual void Move () const;

protected:
    int itsAge;

};

GuineaPig :: GuineaPig(void) : itsAge(5){
    cout<<" GuineaPig Constructor "<<endl;

}

GuineaPig :: ~GuineaPig (void){
    cout<<" GuineaPig Destructor "<<endl;

}

void GuineaPig :: Move() const{
    cout<<" GuineaPig moves a step! "<<endl;
}

void GuineaPig :: Weep () const {
    cout<<" GuineaPig is weeping "<<endl;
}

int main(){
//	int theArray[5];
  Mammal *theArray[5];
  Mammal *ptr;
  int choice,i;
  for(i=0; i<5 ; i++){
  	cout<<"(1)dog (2)cat (3)horse (4)guinea pig : ";
  	cin>> choice ;
  	switch(choice){
  		case 1 : ptr = new Dog ;
  		break;
  		case 2 : ptr = new Cat ;
  		break;
  		case 3 : ptr = new Horse ;
  		break;
  		case 4 : ptr = new GuineaPig ;
  		break;
  		default : ptr = new Mammal ;
  		break ;
	  }
	  theArray[i]=ptr;
	
  }
  for(i=0;i<5;i++)
  	theArray[i] -> Speak();
  	
  	for(i=0;i<5;i++) 
     delete theArray[i];
     return 0;
}
