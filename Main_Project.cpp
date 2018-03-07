//HEADER FILES USED

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<iomanip>
using namespace std;
//************************************************************************************//

//CLASS STUDENT FOR STUDENT DATA
class Student
{
	int roll;
	char name[30];
	char sub[30];
	int fee;
	
	public:
		void set_Stud();
		void show_Stud();
		void show_All();				//Showing in tabular form
		int ret_roll();
		void modify();
};
//***************************************************************************************//

//Class Faculty------------
class Faculty
{
	int ID;
	char name[30];
	char desig[30];
	int sal;
	
	public:
		void set_Fac();
		void show_Fac();
		void show_AllF();
		void modify_F();
		int ret_ID();
};

//Class Employee for Employee DATA-----------
class Employee
{
	int ID;
	char name[30];
	char post[30];
	int sal;
	
	public:
		void set_Emp();
		void show_Emp();
		void show_AllE();
		void modify_E();
		int ret_ID_E();
};

//********************************Class Student function definition*************************************

void Student :: set_Stud()
{
	cout<<endl<<"\n\nEnter roll number of student : ";
	cin>>roll;
	cout<<endl<<"Enter name of student : ";
	cin.ignore();
	cin.getline(name,30);
	cout<<endl<<"Enter his subject : ";
	cin.getline(sub,30);	
	cout<<endl<<"Enter remaining fees : ";
	cin>>fee;
	cout<<endl<<"Student Added ! Proceed...\a";
}
		
void Student :: show_All()
{
	cout<<roll<<setw(10)<<" "<<name<<setw(10)<<" "<<sub<<setw(10)<<" "<<fee<<endl;
}

void Student :: show_Stud()
{
	cout<<endl<<"Roll Number "<<roll;
	cout<<endl<<"Name : "<<name;
	cout<<endl<<"Subject : "<<sub;
	cout<<endl<<"fee : "<<fee<<"\n\n";
}

void Student :: modify()
{
	cout<<endl<<"Enter roll Number : ";
	cin>>roll;
	cout<<endl<<"Modify Name : ";
	cin.ignore();
	cin.getline(name,30);
	cout<<endl<<"Modify Enter Subject : ";
	cin.getline(sub,30);
	cout<<endl<<"Update Fees : ";
	cin>>fee;
}

int Student :: ret_roll()
{
	return roll;
}
//*******************************************************************************************//

//*************************************Class Faculty definition*****************************

void Faculty :: set_Fac()
{
	cout<<endl<<"\n\nEnter ID of faculty : ";
	cin>>ID;
	cout<<endl<<"Enter name of faculty : ";
	cin.ignore();
	cin.getline(name,30);
	cout<<endl<<"Enter designation of faculty : ";
	cin.getline(desig,30);
	cout<<endl<<"Enter salary of faculty : ";
	cin>>sal;
	cout<<endl<<"Details Added !";
}

void Faculty :: show_Fac()
{
	cout<<endl<<"Faculty ID : "<<ID;
	cout<<endl<<"Name : "<<name;
	cout<<endl<<"Designation : "<<desig;
	cout<<endl<<"salary : "<<sal;
}

void Faculty :: show_AllF()
{
	cout<<endl<<ID<<setw(10)<<" "<<name<<setw(10)<<" "<<desig<<setw(10)<<sal;
}

void Faculty :: modify_F()
{
	cout<<endl<<endl<<endl<<"Enter new ID or old : ";
	cin>>ID;
	cout<<endl<<"Enter modified name : ";
	cin.ignore();
	cin.getline(name,30);
	cout<<endl<<"Enter new designation : ";
	cin.getline(desig,30);
	cout<<endl<<"Updated salary : ";
	cin>>sal;
}

int Faculty :: ret_ID()
{
	return ID;
}

//*********************************Class Employee def---------------------------
void Employee :: set_Emp()
{
	cout<<endl<<"\n\nEnter ID of Employee : ";
	cin>>ID;
	cout<<endl<<"Enter name of Employee : ";
	cin.ignore();
	cin.getline(name,30);
	cout<<endl<<"Enter post of Employee : ";
	cin.getline(post,30);
	cout<<endl<<"Enter salary of Employee : ";
	cin>>sal;
	cout<<endl<<"Details Added !";
}

void Employee :: show_Emp()
{
	cout<<endl<<"Employee ID : "<<ID;
	cout<<endl<<"Name : "<<name;
	cout<<endl<<"post : "<<post;
	cout<<endl<<"salary : "<<sal;
}

void Employee :: show_AllE()
{
	cout<<endl<<ID<<setw(10)<<" "<<name<<setw(10)<<" "<<post<<setw(10)<<" "<<sal;
}

void Employee :: modify_E()
{
	cout<<endl<<endl<<endl<<"Enter new ID or old : ";
	cin>>ID;
	cout<<endl<<"Enter modified name : ";
	cin.ignore();
	cin.getline(name,30);
	cout<<endl<<"Enter new post : ";
	cin.getline(post,30);
	cout<<endl<<"Updated salary : ";
	cin>>sal;
}

int Employee :: ret_ID_E()
{
	return ID;
}

//-------------------------------------------------------------------------------------------------------------------------------

void intro();
//   Functions -------------  Operating for Student...............
void intro();
void write_Stud();
void read_Stud();
void mod_Stud(int );

//--------------------------------------------------------------------------------------------

//		Functions operating for Faculty......................
void write_Fac();
void read_Fac();
void mod_Fac(int);
//-----------------------------------------------------------------------------

//			Functions operating for Employee....................

void write_Emp();
void read_Emp();
void mod_Emp(int);

//________________________________________________________________________________________________

//*************************************************************************************************************************
//							MAIN FUNCTION
//***************************************************************************************************************************

int main()
{
	int n;
	char ch;
	
	intro();
	
	do
	{
		system("cls");
		cout<<endl<<"\t\t\tMain Menu ";
		cout<<endl<<"\t 1. New Student ";
		cout<<endl<<"\t 2. Student Data ";
		cout<<endl<<"\t 3. Modify Student Data ";
		cout<<endl<<"\t 4. New Faculty ";
		cout<<endl<<"\t 5. Show all faculty data ";
		cout<<endl<<"\t 6. Modify faculty data ";
		cout<<endl<<"\t 7. New Employee ";
		cout<<endl<<"\t 8. Show all Employee data ";
		cout<<endl<<"\t 9. Modify Employee data ";
		cout<<endl<<"\t e. Exit ";
		cout<<endl<<endl<<endl<<" Select your choice ";
		cin>>ch;
		
		system("cls");
		
		switch(ch)
		{
			case '1':
				write_Stud();
				break;
				
			case '2':
				read_Stud();
				break;
				
			case '3':
				cout<<endl<<"Enter roll number of student whose data to be modified ";
				cin>>n;
				mod_Stud(n);
				break;
				
			case '4':
				write_Fac();
				break;
				
			case '5':
				read_Fac();
				break;
				
			case '6':
				cout<<endl<<"Enter ID of the faculty whose data to be modified : ";
				cin>>n; 
				mod_Fac(n);
				break;
				
			case '7':
				write_Emp();
				break;
				
			case '8':
				read_Emp();
				break;
				
			case '9':
				cout<<"Enter ID of Employee whose data to be modified : ";
				cin>>n;
				mod_Emp(n);
				break;
				
			case 'e':
				cout<<endl<<"\n\n\n\n\n\nThanks for opening this program...  GUI version coming soon!!! \n";
				cout<<endl<<"-------------------------------------------------------------------------------";
				break;
				
			default:
				cout<<"\nEnter correct choice ";
		}
		cin.ignore();
		cin.get();				//for holding the screen during run
	}while(ch != 'e');
}

//Writing Data in file of student-------------------
void write_Stud()
{
	int n;
	Student s;
	ofstream out;
	out.open("Student.dat",ios::binary|ios::app);		//If no file is present, then it will create one anyways... else old file
	cout<<endl<<"Enter Number of students : ";			//therefore no failure check needed
	cin>>n;
	cout<<endl<<endl;
	for(int i = 0;i<n;i++)
	{
		s.set_Stud();
		out.write(reinterpret_cast<char *>(&s),sizeof(Student));
	}
	out.close();
}

void read_Stud()
{
	Student s;
	ifstream in;
	in.open("Student.dat",ios::binary);
	if(in.fail())											//if file is not present or failed to open
	{
		cout<<endl<<"Cannot open file, Operation failed. Press any key ";
		return;
	}
	
	cout<<endl<<"\n\t\t Student Details : \n\n\n\n";
	cout<<endl<<"=========================================================\n";
	cout<<endl<<"Roll       Name          Subject          fees";
	cout<<endl<<"=========================================================\n";
	while(in.read(reinterpret_cast<char*> (&s),sizeof(Student)))					//this will run till EOF i.e. end of file
	{
		s.show_All();
	}
	in.close();
	
}

void mod_Stud(int r)
{
	bool found = false;				//we ask user for UID i.e. roll no., it it's found then found = true, else false
	Student s;
	fstream mod;
	mod.open("Student.dat",ios::binary|ios::in|ios::out);
	if(mod.fail())
	{
		cout<<endl<<"Cannot open file, Operation failed. Press any key ";	//if file not found, or unable to open
		return;
	}
	
	while(!mod.eof() && found == false)
	{
		mod.read(reinterpret_cast <char *> (&s), sizeof(Student));
		if(s.ret_roll() == r)
		{
			s.show_Stud();
			cout<<endl<<"Enter new details of student : ";
			s.modify();
			int pos = (-1)*static_cast <int> (sizeof(Student));
			mod.seekp(pos,ios::cur);
			mod.write(reinterpret_cast<char *> (&s),sizeof(Student));
			cout<<endl<<"Details Updated ! ";
			found = true;			
		}
		
	}
}

//------------------------------------------------------------------------------------------------------

//Writing Data in file of faculty

void write_Fac()
{
	int n;
	ofstream out;
	Faculty f;
	out.open("Fac_Data.dat",ios::binary|ios::app);
	cout<<endl<<"Enter number of faculty : ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		f.set_Fac();
		out.write(reinterpret_cast <char *> (&f),sizeof(Faculty));
	}
	out.close();
}

void read_Fac()
{
	Faculty f;
	ifstream in;
	in.open("Fac_Data.dat",ios::binary);	
	if(in.fail())
	{
		cout<<endl<<endl<<"Cannot open file, File not found . Press any key ";
		return;
	}
	
	cout<<"\n\n\n\t\t\t Faculty Data : ";
	cout<<endl<<"============================================================================";
	cout<<endl<<"ID       Name      Designation      Salary ";
	cout<<endl<<"============================================================================";
	while(in.read(reinterpret_cast <char *> (&f), sizeof(Faculty)))
	{
		f.show_AllF();
	}
	
	in.close();
}

void mod_Fac(int n)
{
	bool found = false;
	Faculty f;
	fstream mod;
	mod.open("Fac_Data.dat",ios::binary|ios::in|ios::out);
	
	if(mod.fail())
	{
		cout<<endl<<"File cannot be opened, Press any key ";
		return;
	}
	
	while(!mod.eof() && found == false)
	{
		mod.read(reinterpret_cast <char *> (&f), sizeof(Faculty));
		
		if(f.ret_ID() == n)
		{
			f.show_Fac();
			cout<<endl<<endl<<"\nEnter new data to be replaced : ";
			f.modify_F();
			int pos = (-1)*static_cast<int>(sizeof(Faculty));
			mod.seekp(pos,ios::cur);
			mod.write(reinterpret_cast <char *> (&f), sizeof(Faculty));
			cout<<endl<<endl<<"Data Modified Successfully ! \a";
			found = true;			
		}
	}
	mod.close();
}


//Writing data in file of Employee 

void write_Emp()
{
	int n;
	Employee e;
	ofstream out;
	out.open("Employee.dat",ios::binary|ios::app);
	
	cout<<endl<<"Enter number of employees : ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		e.set_Emp();
		out.write(reinterpret_cast <char *> (&e), sizeof(Employee));
	}
	
	out.close();
}

void read_Emp()
{
	Employee e;
	ifstream in;
	in.open("Employee.dat",ios::binary);
	
	if(in.fail())
	{
		cout<<endl<<"Cannot open file, operation failed. Press any key ";
		return;
	}
	
	cout<<"\n\n\n\t\t\t Employee Data : ";
	cout<<endl<<"============================================================================";
	cout<<endl<<"ID       Name      Post      Salary ";
	cout<<endl<<"============================================================================";
	while(in.read(reinterpret_cast <char *> (&e), sizeof(Employee)))
	{
		e.show_AllE();
	}
	in.close();
}

void mod_Emp(int i)
{
	Employee em;
	fstream f;
	f.open("Employee.dat",ios::binary|ios::in|ios::out);
	bool found = false;
	
	if(f.fail())
	{
		cout<<endl<<"cannot opening failed, Press any key ";
		return;
	}
	
	while(!f.eof() && found == false)
	{
		f.read(reinterpret_cast <char *> (&em), sizeof(Employee));
		
		if(em.ret_ID_E() == i)
		{
			em.show_Emp();
			cout<<"\n\n Modify details of Employee ";
			cout<<endl;
			em.modify_E();
			
			int pos = (-1)*static_cast <int> (sizeof(Employee));
			f.seekp(pos,ios::cur);
			f.write(reinterpret_cast <char *> (&em), sizeof(Employee));
			
			cout<<endl<<endl<<"Data updated successfully ";
			
			found = true;
		}
	}
	f.close();
}

//-------------------------------------------------INTRO---------------------------
void intro()
{
	cout<<endl<<"\t\t\t\t   **** Welocome ****\n";
	cout<<endl<<"\t\t\t\t      Record Keeper  ";
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t Developed by Sohel Shaikh";
	cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\tAs a Project for coaching class ";
	cin.get();
}
