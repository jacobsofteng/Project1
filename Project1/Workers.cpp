#include<iostream>
#include<conio.h>
using namespace std;

struct Worker{
	string id;
	string name;
    int salary;
    string phone;
    Worker *next;
};

class WorkerDetails{
	private:
		Worker *head , *tail;
	public :
		WorkerDetails(){
			head = NULL;
			tail = NULL;
		}
		
		
	string NewWorker(string id,string name,int salary,string phone){
			/////////////////////
			if(head == NULL){
			Worker *newWorker = new Worker();
			newWorker->id  = id;
			newWorker->name = name;
			newWorker->salary = salary;
			newWorker->phone = phone;
			newWorker->next = head;
			head =  newWorker;
			tail = newWorker;
			string stat = "Data is Added Successfully";
			return stat;
		}else{
			Worker *curr = new Worker();
			Worker *prev = new Worker();
			curr = head;
			while(curr != NULL){
				prev = curr;
				if(curr->id == id)
				break; 
			 curr = curr->next;
			}
			
			if(prev->id == id){
				string stat = "Room is Already BOOKED";
				return stat;
			
			}else{
				
				Worker *newWorker = new Worker();
				newWorker->id  = id;
				newWorker->name = name;
				newWorker->salary = salary;
				newWorker->phone = phone;
				newWorker->next = NULL;
				tail->next = newWorker;
				tail = newWorker;
				string stat = "Data is Added Successfully";
				return stat;
			}
		}
			//////////////////////////
	}
	
	void DeleteWorker(string id){
		Worker *current = new Worker();
		Worker *previous = new Worker();
		current = head;
		while(current != NULL){
			
			if(current->id == id)
			 break;
			 previous = current;
			 current = current->next;
		}
	    if(current != NULL){
	    	
	    	if(id == current->id){
			string op;
			cout<<"Are you sure to delete:(yes/no)    ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				previous->next = current->next;
				delete current;
				cout<<"Record of "<<id<<" Menu is deleted Successfully"<<endl;
			}else if(op=="No"||op=="NO"||op=="no"){
				
			}		
			
		}
		}else{
			cout<<"Sorry..!!!\nNo Record is available about Worker  ID "<<id<<endl;
		}
	}
	
	
	void SearchWorker(string id){
		Worker *current = new Worker();
		current = head;
		while(current != NULL){
			if(current->id == id)
			 break;
			 
			 current = current->next;
		}
		if(current != NULL){
			if(id == current->id){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tWorker ID\t\t\t\t\t"<<current->id<<endl;
			cout<<"\t\tWorker Name\t\t\t\t\t"<<current->name<<endl;
			cout<<"\t\tWorker Salary\t\t\t\t\t"<<current->salary<<endl;
			cout<<"\t\tWorker Phone\t\t\t\t\t"<<current->phone<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
		}
		}else{
			cout<<"Sorry..!!!\nNo Record is avalible about Worker  ID "<<id<<endl;
		}
	}
	
	void UpdateWorker(string id){
		Worker *current = new Worker();
		current = head;
		while(current != NULL){
			
			if(current->id == id)
			 break;
			 
			 current = current->next;
		}
		if(current != NULL){
			if(current->id == id){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tWorker ID\t\t\t\t\t"<<current->id<<endl;
			cout<<"\t\tWorker Name\t\t\t\t\t"<<current->name<<endl;
			cout<<"\t\tWorker Salary\t\t\t\t\t"<<current->salary<<endl;
			cout<<"\t\tWorker Phone\t\t\t\t\t"<<current->phone<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			string op;
			cout<<"Are you Want to update:            ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				string id,name,phone;
				int salary;
				cout<<"\n\n\t\tEnter Worker ID:                         ";
				cin>>id;
				cout<<"\n\n\t\tEnter Worker Name:                       ";
				cin>>name;
				cout<<"\n\n\t\tEnter Worker Sallary:                    ";
				cin>>salary;
				cout<<"\n\n\t\tEnter Worker Phone:                      ";
				cin>>phone;
				current->id  = id;
				current->name = name;
				current->salary = salary;
				current->phone = phone;
				cout<<"Updated Successfully"<<endl;
			}
		}
		}else{
			cout<<"Sorry..!!!\nNo Record is avalible about Worker ID "<<id<<endl;
		}
	}
	
	
	void ShowAllWorkers(){
		Worker *ShowWorker = new Worker;
		ShowWorker = head;
		while(ShowWorker  != NULL){
			
			for(int i=0; i<20; i++)
			system("color a");
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tWorker ID\t\t\t\t\t"<<ShowWorker->id<<endl;
			cout<<"\t\tWorker Name\t\t\t\t\t"<<ShowWorker->name<<endl;
			cout<<"\t\tWorker Salary\t\t\t\t\t"<<ShowWorker->salary<<endl;
			cout<<"\t\tWorker Phone\t\t\t\t\t"<<ShowWorker->phone<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			ShowWorker = ShowWorker->next;
		}
	}
};
