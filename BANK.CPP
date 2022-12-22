#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>


    char name[20] , add[100] , y;
class bank
{
    public:
    void openacc();
    void depositmn();
    void withdrawmn();
    void displayacc();
};
 int balance;

void bank :: openacc()
{
    clrscr();
    cout<<"Enter Your Full Name :\n";
    cin.ignore();
    cin.getline(name,20);
    cout<<"Enter Your Address :\n";
    cin.ignore();
    cin.getline(add,100);
    cout<<"What Type Of Account You Want To Open (Saving (s) or Current (C) ) ?\n";
    cin>>y;
    cout<<"Enter Amount For Deposit :\n";
    cin>>balance;
    cout<<"Your Account Has Been Created!! \n";
    cout<<"\n";
    cout<<"\n";
}

void bank :: depositmn()
{
    clrscr();
    int a;
    cout<<"Enter The Amount To Be Deposited :\n";
    cin>>a;
    balance += a;
    cout<<"Total Balance :"<<balance;
    cout<<"\n";
    cout<<"\n";
}

void bank :: displayacc()
{
    clrscr();
    cout<<"Full Name : \n"<<name;
    cout<<"\n";
    cout<<"Address : \n"<<add;
    cout<<"\n";
    cout<<"Type Of Account : \n"<<y;
    cout<<"\n";
    cout<<"Total Balance : \n"<<balance;
    cout<<"\n";
    cout<<"\n";
}

void bank :: withdrawmn()
{
    clrscr();
    float amt;
    cout<<"\n Withdraw ";
    cout<<" Enter Amount To Be Withdrawn :\n";
    cin>>amt;
    balance -= amt;
    cout<<"Total Balance : "<<balance;
    cout<<"\n";
    cout<<"\n";
}

int main()
{
clrscr();
int ch;
char x;
bank obj;
gotoxy(30,2);
cout<<"Welcome To Our Bank";
gotoxy(30,9);
cout<<"Please Select An Option\n";
do{clrscr();
    gotoxy(36,11);
    cout<<"1: Open Account\n";
    gotoxy(36,12);
    cout<<"2: Deposit Money\n";
    gotoxy(36,13);
    cout<<"3: Withdraw Money\n";
    gotoxy(36,14);
    cout<<"4: Display Account\n";
    gotoxy(36,15);
    cout<<"5: Exit";
    cin>>ch;
    switch (ch)
    {
	case 1 :
	cout<<"Open Account \n";
	obj.openacc();
	break;
	case 2 :
	cout<<"Deposit Money \n";
	obj.depositmn();
	break;
	case 3 :
	cout<<"Withdraw Money \n";
	obj.withdrawmn();
	break;
	case 4 :
	cout<<"Display Account \n";
	obj.displayacc();
	break;
	case 5:
	if(ch == 5)
	{
	    exit(1);
	}
	default:
	cout<<"Invalid Choice!!\n";
    }

	cout<<"To Select Next Option Press y:\n";
	cout<<"To Exit Press n:\n";
	x=getch();
	if(x=='n'||x=='N')
	{
	    exit(0);
	}
}while(x=='y'||x=='Y');
getch();
return 0;
}