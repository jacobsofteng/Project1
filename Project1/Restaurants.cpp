#include<iostream>
#include<conio.h>
using namespace std;

struct Restaurants{
	string name;
    int price;
    string chief;
    Restaurants *next;
};

class RestaurantDetails{
	private:
		Restaurants *head , *tail;
	public :
		RestaurantDetails(){
			head = NULL;
			tail = NULL;
		}
		
		
	void NewRestaurant(string name,int price,string chief){
			
			Restaurants *newRecipe = new Restaurants();
			newRecipe->name  = name;
			newRecipe->price = price;
			newRecipe->chief = chief;
				if(head == NULL){
					newRecipe->next = head;
					head =  newRecipe;
					tail = newRecipe;
				}else{
					tail->next = newRecipe;
					tail = newRecipe;
				}
		
		
	}
	
	void DeleteMenu(string name){
		Restaurants *current = new Restaurants();
		Restaurants *previous = new Restaurants();
		current = head;
		while(current != NULL){
			
			if(current->name == name)
			 break;
			 previous = current;
			 current = current->next;
		}
		if(current != NULL){
			if(name == current->name){
			string op;
			cout<<"Are you sure to delete:(yes/no)    ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				previous->next = current->next;
				delete current;
				cout<<"Record of "<<name<<" Menu is deleted Successfully"<<endl;
			}else if(op=="No"||op=="NO"||op=="no"){
				
			}		
			
		}	
		}else{
			cout<<"Sorry..!!!\nNo Record is available about "<<name<<" Menu"<<endl;
		}
	}
	
	
	void SearchMenu(string name){
		Restaurants *current = new Restaurants();
		Restaurants *previous = new Restaurants();
		current = head;
		while(current != NULL){
			previous = current;
			if(current->name == name)
			 break;
			 
			 current = current->next;
		}
		
		if(name == previous->name){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tName of menu:\t\t\t\t"<<current->name<<endl;
			cout<<"\t\tChief:\t\t\t\t\t"<<current->chief<<endl;
			cout<<"\t\tPrice of menu\t\t\t\t"<<current->price<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
		}else{
			cout<<"Sorry..!!!\nNo Record is avalible about "<<name<<" Menu"<<endl;
			string op;
			cout<<"Are you want to Search Again:(yes/no)          ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				SearchMenu(name);
			}else if(op=="No"||op=="NO"||op=="no"){
				
			}
		}
	}
	
	void UpdateMenu(string name){
		Restaurants *current = new Restaurants();
		current = head;
		while(current != NULL){
			
			if(current->name == name)
			 break;
			 
			 current = current->next;
		}
		if(current != NULL){
			if(current->name == name){
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tMenu Name\t\t\t\t\t"<<current->name<<endl;
			cout<<"\t\tMenu Price\t\t\t\t\t"<<current->price<<endl;
			cout<<"\t\tChief OF Menu\t\t\t\t"<<current->chief<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			string op;
			cout<<"Are you Want to update:            ";
			cin>>op;
			if(op=="Yes"||op=="YES"||op == "yes"){
				string chief,name;
				int price;
				cout<<"\n\n\t\tEnter Menu Name:                        ";
				cin>>name;
				cout<<"\n\n\t\tEnter Menu Price:                       ";
				cin>>price;
				cout<<"\n\n\t\tEnter Menu Chief:                       ";
				cin>>chief;
				current->name  = name;
				current->price = price;
				current->chief = chief;
				cout<<"Updated Successfully"<<endl;
			}
		}
		}else{
			cout<<"Sorry..!!!\nNo Record is avalible about Menu "<<name<<endl;
		}
	}
	
	void ShowAllRestaurants(){
		Restaurants *showMenu = new Restaurants;
		showMenu = head;
		while(showMenu  != NULL){
			
			for(int i=0; i<20; i++)
			system("color a");
			cout<<"\n\n";
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			cout<<"\t\tMenu Name\t\t\t\t\t"<<showMenu->name<<endl;
			cout<<"\t\tMenu Price\t\t\t\t\t"<<showMenu->price<<endl;
			cout<<"\t\tChief OF Menu\t\t\t\t"<<showMenu->chief<<endl;
			cout<<"\n\t|--------------------------------------------------------------------------------------|"<<endl;
			showMenu = showMenu->next;
		}
	}
};
