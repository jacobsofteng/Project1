#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include<string>


using namespace std;


inline void gotoxy(int x, int y)
{
	COORD coord;
    	coord.X =x;
	coord.Y =y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//***********************************
//Data Srtucture group project:
/* Sultanov Khodjimurat U1910014
   Musaev Akmaljon		U1910017
   Pulatov Jasurbek		U1910020
   Nasriev Lazizjon		U1910036
   Mukhamedov Yokubjon	U1910037*/
//***********************************
class HotelMenu{
	
	public:
		
	void team19()
{
	system("mode 100");
	ifstream file;
	file.open("C:/Users/USER/Desktop/Hotel Managment System/project.txt");
	if(!file.is_open())
	{
		cout<<"unable to open file:";
		
	}
	else
	{
		string c;
		getline(file,c);
		while(!file.eof())
		{
			system("color a");
			cout<<c<<endl;
			getline(file,c);
		}
	}
}

//**********************************************
//  WELCOME 
//**********************************************
void welcome()
{
	system("mode 100");
	ifstream file;
	file.open("C:/Users/USER/Desktop/Hotel Managment System/start.txt");
	if(!file.is_open())
	{
		cout<<"file is unable to open successfully:  ";
	}
	else
	{
	string a;
	getline(file,a);
	
		while(!file.eof())
		{
			system("color a");
			cout<<a<<endl;
		getline(file,a);
		}
		file.close();	
}
}

int password(){
	first:
	system("cls");
	system("color 1a");
	string a,b,c,d,e,f,g; 
	cout<<"\n\nNOTE:\n\tTHIS PROGRAM CAN ONLY BE EXECUTED BY AN AUTHORIZED PERSON OF HOTEL\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\n\n\n\n\n\t\tENTER THE PASSWORD:         [      ]\b\b\b\b\b\b\b";
	
		a=_getch();
		cout<<"*";
		b=_getch();
		cout<<"*";
		c=_getch();
		cout<<"*";
		d=_getch();
		cout<<"*";
		e=_getch();
		cout<<"*";
		f=_getch();
		cout<<"*";

	if((a=="1" && b=="2") && (c=="3"&& d=="4") && (e=="5"))
	{
		//   password excuted	
	}
	else 
	{
		system("color 1c");
		cout<<"\a"<<endl;
		cout<<"\t\t\t|***********************|"<<endl;
		cout<<"\t\t\t|                       |"<<endl;
		cout<<"\t\t\t|    WRONG PASSWORD     |"<<endl;
		cout<<"\t\t\t|                       |"<<endl;
		cout<<"\t\t\t|***********************|"<<endl;
		l:
		string h;
		cout<<"\n\n\n\n\t\t\tARE YOU WANT TO TRY AGAIN (yes/no):       ";
		cin>>h;
		if(h=="yes" || h=="YES")
		{
					goto first;
		}else if(h=="no" || h=="NO")
		{
			return 0;
		}else if((h!="yes" || h!="YES") && (h!="no" || h!="NO") )
		{
			goto l;
		}

	}	
	
}

	void Loading(){
	
	system("cls");
	int r,q,i=0,j;
	char s=178;
	gotoxy(46,24);
	cout<<"loading..."<<endl;
	for(r=1,i=0,j=40; r<20,i<=100,j<=60; r++,i=i+5,j++)
	{
		for(q=0; q<5; q++)
		system("color a");
		gotoxy(j,25);
		cout<<s;
		gotoxy(47,27);
		cout<<i<<"%";
	}
}

void MainMenu(){
	system("cls");
	ifstream menu;
	menu.open("C:/Users/USER/Desktop/Hotel Managment System/menu.txt");
	if(!menu.is_open())
	{
		cout<<"unable to open file: ";
	}else
	{
		string c;
		getline(menu,c);
		while(!menu.eof())
		{
			system("color a");
			cout<<c<<endl;
			getline(menu,c);
		}
	}
}

void HotelInformation(){
	system("cls");
	ifstream HIF;
	HIF.open("C:/Users/USER/Desktop/hotel.txt");
	if(!HIF.is_open())
	{
	cout<<"unable to open a file:  ";
	}else
	{
		string c;
		getline(HIF,c);
		while(!HIF.eof())
		{
			system("color a");
			cout<<c<<endl;
			getline(HIF,c);
		}
	}
}

void RestaurantMenu(){
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
	cout<<"\n\t\t\t| 1 -------------------------ADD NEW RESTAURANT MENU |"<<endl;
	cout<<"\n\t\t\t| 2 -------------------------------------- MENU LIST |"<<endl;
	cout<<"\n\t\t\t| 3 ------------------------- SEARCH RESTAURANT MENU |"<<endl;
	cout<<"\n\t\t\t| 4 ------------------------- DELETE RESTAURANT MENU |"<<endl;
	cout<<"\n\t\t\t| 5 ------------------------ UPDATE RESTAURANT MENU  |"<<endl;
	cout<<"\n\t\t\t| 6 ------------------------------------------- BACK |"<<endl;
	cout<<"\n\t\t\t| 7 ------------------------------------------- EXIT |"<<endl;
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
	
}


void RoomMenu(){
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
	cout<<"\n\t\t\t| 1 ---------------------------------- ADD NEW GUEST |"<<endl;
	cout<<"\n\t\t\t| 2 ------------------------------------  GUEST LIST |"<<endl;
	cout<<"\n\t\t\t| 3 ----------------------------------- SEARCH GUEST |"<<endl;
	cout<<"\n\t\t\t| 4 ----------------------------------- DELETE GUEST |"<<endl;
	cout<<"\n\t\t\t| 5 ----------------------------------- UPDATE GUEST |"<<endl;
	cout<<"\n\t\t\t| 6 ------------------------------------------- BACK |"<<endl;
	cout<<"\n\t\t\t| 7 ------------------------------------------- EXIT |"<<endl;
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
}

void WorkerMenu(){
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
	cout<<"\n\t\t\t| 1 --------------------------------- ADD NEW WORKER |"<<endl;
	cout<<"\n\t\t\t| 2 ------------------------------------ WORKER LIST |"<<endl;
	cout<<"\n\t\t\t| 3 ---------------------------------- SEARCH WORKER |"<<endl;
	cout<<"\n\t\t\t| 4 ---------------------------------- DELETE WORKER |"<<endl;
	cout<<"\n\t\t\t| 5 ---------------------------------- UPDATE WORKER |"<<endl;
	cout<<"\n\t\t\t| 6 ------------------------------------------- BACK |"<<endl;
	cout<<"\n\t\t\t| 7 ------------------------------------------- EXIT |"<<endl;
	cout<<"\n\t\t\t|-**************************************************-|"<<endl;
}


//class end
};
