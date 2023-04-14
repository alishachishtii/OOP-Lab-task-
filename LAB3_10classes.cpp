#include<iostream>
using namespace std;
class one{
	public:
		string st_name;
		void getname(){
			cout<<"Enter the name of student : "<<endl;
			cin>>st_name;
		}
	private:
		int sapid;
		void getsapid(){
			cout<<"Enter the Sap id of student : ";
			cin>>sapid;
		}
	protected:
		float gpa ;
		void getgpa(){
			cout<<"Enter the gpa of student : ";
			cin>>gpa;
		}
	//null constructor
	public:
	one(){
		this->st_name=" ";
		this->sapid=0;
		this->gpa=0;
	}
};
class two: public one {
		public:
		int sapid;
		void getsapid(){
			cout<<"Enter the Sap id of student :"<<endl;
			cin>>sapid;
		}
	private:
		string st_name;
		void getname(){
			cout<<"Enter the name of student :"<<endl;
			cin>>st_name;
		}

	protected:
		float gpa ;
		void getgpa(){
			cout<<"Enter the gpa of student : ";
			cin>>gpa;
		}
	//null constructor
	public:
	two(){
		this->st_name=" ";
		this->sapid=0;
		this->gpa=0;
	}
};	
class three{
		protected:
		string st_name;
		void getname(){
			cout<<"Enter the name of student : "<<endl;
			cin>>st_name;
		}
	private:
		int sapid;
		void getpersonid(){
			cout<<"Enter the Sap id of student : ";
			cin>>sapid;
		}
	public:
		float gpa ;
		void getgpa(){
			cout<<"Enter the gpa of student : ";
			cin>>gpa;
		}
	//null constructor
	public:
	three(){
		this->st_name=" ";
		this->sapid=0;
		this->gpa=0;
	}
};
class four:public three,two,one{
	public:
		string st_name;
		void getname(){
			cout<<"Enter the name of student : "<<endl;
			cin>>st_name;
		}
	public:
		int sapid;
		void getsapid(){
			cout<<"Enter the Sap id of student : ";
			cin>>sapid;
		}
	public:
		float gpa ;
		void getgpa(){
			cout<<"Enter the gpa of student : ";
			cin>>gpa;
		}
};
class five{
	public:
		string st_name;
		void getname(){
			cout<<"enter the name of student : "<<endl;
			cin>>st_name;
		}
	private:
		int sapid;
		void getsapid(){
			cout<<"Enter the Sap id of student : ";
			cin>>sapid;
		}
	protected:
		float gpa ;
		void getgpa(){
			cout<<"Enter the gpa of student : ";
			cin>>gpa;
		}
	//null constructor
	public:
	five(){
		this->st_name=" ";
		this->sapid=0;
		this->gpa=0;
	}
};
class six:public five{
	public:
		int sapid;
		void getsapid(){
			cout<<"Enter the Sap id of student : "<<endl;
			cin>>sapid;
		}
	private:
		string st_name;
		void getname(){
			cout<<"Enter the name of student : "<<endl;
			cin>>st_name;
		}
	protected:
		float gpa ;
		void getgpa(){
			cout<<"Enter the gpa of student : "<<endl;
			cin>>gpa;
		}
	//null constructor
	public:
	six(){
		this->st_name=" ";
		this->sapid=0;
		this->gpa=0;
	}
};
class seven:public six{
	public:
	    float gpa ;
		void getgpa(){
			cout<<"Enter the gpa of student : "<<endl;
			cin>>gpa;
		}
	protected:
		string st_name;
		void getname(){
			cout<<"Enter the name of student : "<<endl;
			cin>>st_name;
		}
	private:
		int sapid;
		void getsapid(){
			cout<<"Enter the Sap id of student : "<<endl;
			cin>>sapid;
		}
	
	//null constructor
	public:
	seven(){
		this->st_name=" ";
		this->sapid=0;
		this->gpa=0;
	}
};
class eight{
	public:
		string st_name;
		void getname(){
			cout<<"Enter the name of student : "<<endl;
			cin>>st_name;
		}
	private:
		int sapid;
		void getsapid(){
			cout<<"Enter the Sap id of student : ";
			cin>>sapid;
		}
	protected:
		float gpa ;
		void getgpa(){
			cout<<"Enter the gpa of student : ";
			cin>>gpa;
		}
	//null constructor
	public:
	eight(){
		this->st_name=" ";
		this->sapid=0;
		this->gpa=0;
	}
};
class nine:public eight{
	public:
		int sapid;
		void getsapid(){
			cout<<"Enter the Sap id of student : "<<endl;
			cin>>sapid;
		}
	private:
		string st_name;
		void getname(){
			cout<<"Enter the name of student : "<<endl;
			cin>>st_name;
		}
	protected:
		float gpa ;
		void getgpa(){
			cout<<"Enter the gpa of student: "<<endl;
			cin>>gpa;
		}
	//null constructor
	public:
	nine(){
		this->st_name=" ";
		this->sapid=0;
		this->gpa=0;
	}
};
class ten:public nine{
	public:
		float gpa ;
		void getgpa(){
			cout<<"Enter the gpa of student : "<<endl;
			cin>>gpa;
		}
	protected:
		string st_name;
		void getname(){
			cout<<"Enter the name of student : "<<endl;
			cin>>st_name;
		}
	private:
		int sapid;
		void getsapid(){
			cout<<"Enter the Sap id of student : "<<endl;
			cin>>sapid;
		}
	
	//null constructor
	public:
	ten(){
		this->st_name=" ";
		this->sapid=0;
		this->gpa=0;
	}
};
class eleven:public eight,nine,ten{
	public:
		string st_name;
		void getname(){
			cout<<"Enter the name of student : "<<endl;
			cin>>st_name;
		}
	public:
		int sapid;
		void getsapid(){
			cout<<"Enter the id of student : ";
			cin>>sapid;
		}
	public:
		float gpa ;
		void getgpa(){
			cout<<"Enter the gpa of student : ";
			cin>>gpa;
		}
};

int main(){
	one s1;
	s1.getname();
	two s2;
	s2.getsapid();
	three s3;
	s3.getgpa();
	four s4;
    s4.getname();
	s4.getsapid();
	s4.getgpa();
	five s5;
	s5.getname();
	six s6;
	s6.getsapid();
	seven s7;
	s7.getgpa();
	eight s8;
	s8.getname();
	nine s9;
	s9.getsapid();
	ten s10;
	s10.getgpa();
	eleven s11;
	s11.getname();
	s11.getsapid();
	s11.getgpa();
}
