#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

class Bank{
	//private:
		int acc_no; char name[30]; char acc_name[30];  char type;
		int dep;  int with;  float balance;
		
	public:
	    void menu(void);   void create();  void withdraw(void);  void info();
	    void Deposite(void);
		
	//constructor
	
	Bank(){
        acc_no = 100;
		balance = 0.0;	
	}	 	
};

void Bank::create(){
	cout<<"\n Enter the name of the account holder: ";
	cin>>acc_name;
	cin.ignore();
	
	cout<<"\n Enter type of the account(current / saving ):\n ";
	cout<<" choose 'S or s' for saving type or 'C or c' for current type: ";
	cin>>type;
	cin.ignore(); 
  
    cout<<"\n Enter your balance: ";
    cout<<"\nfor saving = 100/- and for current = (more than 100) : ";
	cin>>balance;
	//cin.ignore();
	
	cout<<"\n\n Account created..\n\n";
	cin.ignore();
	cout<<"\n Press Enter key to go to menu....\n";
}

void Bank::Deposite(){
	float a;
	cout<<"\n\n TO DEPOSITE AMOUNT\n";
	
	cout<<"Enter bank account number: ";
	cin>>acc_no;
	
	cout<<"\nEnter the amount to be deposite:";
	cin>>a;
	balance+=a;
}

void Bank::withdraw(){
	float amt;
	cout<<"\n\n TO WITHDRAW AMOUNT\n";
	
	cout<<"\n Enter bank account number: ";
	cin>>acc_no;
	
	cout<<"\n Enter the amount to be withdraw: ";
	cin>>amt;
	balance-=amt;
}

void Bank::info(){
	cout<<"==========================================\n";
	cout<<"A/c no.         NAME     Type     Balance=\n";
	cout<<"==========================================\n";
	cout<<"    "<<acc_no<<"         "<<acc_name<<"        "<<type<<"         "<<balance;
	//acc_no++;
	
	void create();
	void Deposite();
	void withdraw();
	void info();
	//void intro();
}

int main(){
	Bank obj;  char ch;  int num;  int balance;  int intro();
	
	do{
		cout<<"=========================================";
		cout<<"\n=\t       MAIN MENU:               =";
		cout<<"\n=\t1.    NEW ACCOUNT:             =";
		cout<<"\n=\t2.    DEPOSITE AMOUNT:         =";
		cout<<"\n=\t3.    WITHDRAW AMOUNT:         =";
		cout<<"\n=\t4.    BALANCE INQUARY:         =";
		cout<<"\n=\t5.    EXIT                     =";
		cout<<"\n\t       select your option(1-5)  =\n";
		cout<<"=========================================";
		cout<<"\n choose your option:";
		cin>>ch;
		
		
		switch(ch){
			case'1':
				cout<<"\n\t*******************************";
				cout<<"\n\t***** CREATE NEW ACCOUNT  *****";
				cout<<"\n\t*******************************\n";
				//cin>>acc_name
				obj.create();
				break;
				
			case'2':
			    cout<<"\n\t***************************";
				cout<<"\n\t***** DEPOSITE AMOUNT *****";
				cout<<"\n\t***************************";
				cout<<"\n\t Enter the account number:";
				//cin;
				obj.Deposite();
				cout<<" You have Successfully Deposite:\n";
				cout<<" Press Enter key to go to main menu...\n";
				break;
				
			case'3':
			   cout<<"\n\t*********************************";
			   cout<<"\n\t***** WITHDRAW YOUR AMOUNT ***** ";
			   cout<<"\n\t Enter the account number: ";
			   
			   obj.withdraw();
			   cout<<" You have successfully withdraw:";
			   cout<<"\n\tPress Enter to go to main menu....\n";
			   break;
			   
			case'4':
			   cout<<"\n\t***************************";
			   cout<<"\n\t***** BALANCE INQUARY *****";
			   cout<<"\n\t***************************"<<endl;
			   cout<<"\n Enter the account number:";
			   cin>>num;
			   obj.info();
			   cout<<"\n\t Press Enter to go to main menu...\n";
			   break;
			   
			  case'5':
			     cout<<"\n Thanks for using bank management system:\n";
				 break;
				 
			default:
			    cout<<"\n Exit \n";
			}
			}while(ch>6);
			
			cin.ignore();
        
}


