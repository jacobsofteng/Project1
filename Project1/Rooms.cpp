#include<iostream>
#include<conio.h>
using namespace std;

struct Rooms{
	string room;
	string guest;
    string date;
    string family;
    string stay;
	string from;
    Rooms *next;
};


class RoomsDetails{
	private:
		Rooms *head , *tail;
	public :
		RoomsDetails(){
			head = NULL;
			tail = NULL;
		}
		
		
	string NewGuest(string room,string guest,string date,string family,string stay,string from){
		
		if(head == NULL){
			Rooms *newGuest = new Rooms();
			newGuest->room  = room;
			newGuest->guest = guest;
			newGuest->date = date;
			newGuest->family = family;
			newGuest->stay = stay;
			newGuest->from = from;
			newGuest->next = head;
			head =  newGuest;
			tail = newGuest;
			string stat = "Data is Added Successfully";
			return stat;
		}else{
			Rooms *curr = new Rooms();
			Rooms *prev = new Rooms();
			curr = head;
			while(curr != NULL){
				prev = curr;
				if(curr->room == room)
				break; 
			 curr = curr->next;
			}
			
			if(prev->room == room){
				string stat = "Room is Already BOOKED";
				return stat;
			
			}else{
				
				Rooms *newGuest = new Rooms();	
				newGuest->room  = room;
				newGuest->guest = guest;
				newGuest->date = date;
				newGuest->family = family;
				newGuest->stay = stay;
				newGuest->from = from;
				newGuest->next = NULL;
				tail->next = newGuest;
				tail = newGuest;
				string stat = "Data is Added Successfully";
				return stat;
			}
		}
	}
	
	void DeleteGuest(string room){
		Rooms *current = new Rooms();
		Rooms *previous = new Rooms();
		current = head;
		while(current != NULL){
			
			if(current->room == room)
			 break;
			 previous = current;
			 current = current->next;
		}
		
		if(current != NULL){
			if(room == current->room){
			string op;
			cout<<"Are you sure to delete:(yes/no)    ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				previous->next = current->next;
				delete current;
				cout<<"Record of Room "<<room<<" is deleted Successfully"<<endl;
			}else if(op=="No"||op=="NO"||op=="no"){
				
			}		
			
			}
		}else{
			cout<<"Sorry..!!!\nNo Record is avalible about Room"<<room<<endl;
		}
	}
	
	
	void SearchGuest(string room){
		Rooms *scurrent = new Rooms();
		Rooms *sprevious = new Rooms();
		scurrent = head;
		while(scurrent != NULL){
			if(scurrent->room == room)
			 break;
			 
			 scurrent = scurrent->next;
		}
		if(scurrent != NULL){
			if(scurrent->room == room){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tRoom\t\t\t\t\t\t"<<scurrent->room<<endl;
			cout<<"\t\tGUEST Name\t\t\t\t\t"<<scurrent->guest<<endl;
			cout<<"\t\tDATE\t\t\t\t\t\t"<<scurrent->date<<endl;
			cout<<"\t\tFAMILY Type\t\t\t\t\t"<<scurrent->family<<endl;
			cout<<"\t\tDays Will Stay\t\t\t\t\t"<<scurrent->stay<<endl;
			cout<<"\t\tCome From\t\t\t\t\t"<<scurrent->from<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
		}
		}else{
			cout<<"Sorry..!!!\nNo Record is avalible about Room"<<room<<endl;
		}
		
	}
	
	
	void UpdateRoom(string room){
		Rooms *current = new Rooms();
		Rooms *previous = new Rooms();
		current = head;
		while(current != NULL){
			
			if(current->room == room)
			 break;
			 
			 current = current->next;
		}
		if(current != NULL){
			if(current->room == room){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tRoom\t\t\t\t\t\t"<<current->room<<endl;
			cout<<"\t\tGUEST Name\t\t\t\t\t"<<current->guest<<endl;
			cout<<"\t\tDATE\t\t\t\t\t\t"<<current->date<<endl;
			cout<<"\t\tFAMILY Type\t\t\t\t\t"<<current->family<<endl;
			cout<<"\t\tDays Will Stay\t\t\t\t\t"<<current->stay<<endl;
			cout<<"\t\tCome From\t\t\t\t\t"<<current->from<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			string op;
			cout<<"Are you Want to update:            ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				string gest,date,family,stay,from;
				cout<<"\n\n\t\tEnter Guest Name:                       ";
				cin>>gest;
				cout<<"\n\n\t\tEnter Guest DATE:                       ";
				cin>>date;
				cout<<"\n\n\t\tEnter Guest Family:                     ";
				cin>>family;
				cout<<"\n\n\t\tEnter Guest Stay:                       ";
				cin>>stay;
				cout<<"\n\n\t\tEnter Guest From:                       ";
				cin>>from;
				current->guest = gest;
				current->date = date;
				current->family = family;
				current->stay = stay;
				current->from = from;
				cout<<"Updated Successfully"<<endl;
			}
		}
		}
		else{
			cout<<"Sorry..!!!\nNo Record is avalible about Room"<<room<<endl;
		}
	}
	
	void ShowAllGest(){
		Rooms *showRoom = new Rooms;
		showRoom = head;
		while(showRoom  != NULL){
			
			for(int i=0; i<20; i++)
			system("color a");
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tRoom\t\t\t\t\t\t"<<showRoom->room<<endl;
			cout<<"\t\tGUEST Name\t\t\t\t\t"<<showRoom->guest<<endl;
			cout<<"\t\tDATE\t\t\t\t\t\t"<<showRoom->date<<endl;
			cout<<"\t\tFAMILY Type\t\t\t\t\t"<<showRoom->family<<endl;
			cout<<"\t\tDays Will Stay\t\t\t\t\t"<<showRoom->stay<<endl;
			cout<<"\t\tCome From\t\t\t\t\t"<<showRoom->from<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			showRoom = showRoom->next;
		}
	}
};
