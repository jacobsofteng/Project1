#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<string>
#include"C:\Users\USER\Desktop\Hotel Managment System\HotelMenus.cpp"
#include"C:\Users\USER\Desktop\Hotel Managment System\Restaurants.cpp"
#include"C:\Users\USER\Desktop\Hotel Managment System\Workers.cpp"
#include"C:\Users\USER\Desktop\Hotel Managment System\Rooms.cpp"
using namespace std;

RestaurantDetails robj;
RoomsDetails   rmobj;
WorkerDetails wobj;

int main() {
	///////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	robj.NewRestaurant("Tea", 5000, "Lazizjon");
	robj.NewRestaurant("Coffee", 7500, "Yokubjon");
	robj.NewRestaurant("Vodka+Liquor", 35000, "Akmaljon");
	robj.NewRestaurant("Fruit Salat", 25000, "Jasurbek");
	robj.NewRestaurant("Beaf", 45000, "Khodjimurat");
	robj.NewRestaurant("Chicken", 35000, "Khodjimurat");
	////////////////////////////////////////////////////////////////////////////////////////////	
	///////////////////////////////////////////////////////////////////////////////////////////	
	rmobj.NewGuest("1", "Ashish", "2-2-2019", "couple", "1 month", "lahore");
	rmobj.NewGuest("2", "muhammad", "2-2-2019", "couple", "1 month", "lahore");
	rmobj.NewGuest("3", "hassan", "2-2-2019", "couple", "1 month", "lahore");
	rmobj.NewGuest("4", "ali", "2-2-2019", "couple", "1 month", "lahore");
	rmobj.NewGuest("5", "abbas", "2-2-2019", "couple", "1 month", "lahore");
	///////////////////////////////////////////////////////////////////////////////////////////	
	//////////////////////////////////////////////////////////////////////////////////////////
	wobj.NewWorker("1", "Lazizjon", 1200000, "03118897764");
	wobj.NewWorker("2", "Khodjimurat", 1200000, "03118897764");
	wobj.NewWorker("3", "Yokubjon", 1200000, "03118897764");
	wobj.NewWorker("4", "Akmaljon", 1200000, "03118897764");
	wobj.NewWorker("5", "Jasurbek", 1200000, "03118897764");
	////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////	

	HotelMenu obj;
	system("100");
	obj.team19();
	system("pause");
	obj.welcome();
	system("pause");
	obj.Loading();
	cout << "\n\n\n\n\n\n\n\n\n";
	system("pause");
main:
	system("cls");
	int op;
	obj.MainMenu();
	cout << "Select The Option:                       ";
	cin >> op;
	switch (op) {
	case 1:
	{
		obj.HotelInformation();
	yr:
		string a;
		cout << "\n\nGO BACK TO MENU (yes/no)?    ";
		cin >> a;
		if (a == "yes" || a == "YES")
		{
			goto main;
		}
		else if (a == "no" || a == " NO")
		{
			return 0;
		}
		else if ((a != "yes" || a != "YES") || (a != "no" || a != " NO"))
		{
			cout << "TRY AGAIN  " << endl;
			goto yr;
		}
		break;
	}
	case 2:
	{
	rmanu:
		int rop;
		obj.RestaurantMenu();
		cout << "Select the Option:      ";
		cin >> rop;
		switch (rop) {
		case 1:
		{
			system("cls");
		New:
			string chief, name;
			int price;
			cout << "\n\n\t\tEnter Restaurant Name:                        ";
			cin >> name;
			cout << "\n\n\t\tEnter Restaurant Price:                       ";
			cin >> price;
			cout << "\n\n\t\tEnter Restaurant Chief:                       ";
			cin >> chief;
			robj.NewRestaurant(name, price, chief);
			string again;
			cout << "Continue:            ";
			cin >> again;
			if (again == "yes" || again == "YES" || again == " Yes") {
				goto New;
			}
			else {
			nr:
				string a;
				cout << "\n\nGO BACK TO MENU (yes/no)?    ";
				cin >> a;
				if (a == "yes" || a == "YES")
				{
					goto rmanu;
				}
				else if (a == "no" || a == " NO")
				{
					return 0;
				}
				else if ((a != "yes" || a != "YES") || (a != "no" || a != " NO"))
				{
					cout << "TRY AGAIN  " << endl;
					goto nr;
				}
			}
			break;
		}
		case 2:
		{
			system("cls");
			robj.ShowAllRestaurants();
			system("pause");
		sr:
			string a;
			cout << "\n\nGO BACK TO MENU (yes/no)?    ";
			cin >> a;
			if (a == "yes" || a == "YES")
			{
				goto rmanu;
			}
			else if (a == "no" || a == " NO")
			{
				return 0;
			}
			else if ((a != "yes" || a != "YES") || (a != "no" || a != " NO"))
			{
				cout << "TRY AGAIN  " << endl;
				goto sr;
			}

			break;
		}
		case 3:
		{
		searchMenu:
			system("cls");
			string name;
			cout << "\n\n\t\tEnter Menu Name:                        ";
			cin >> name;
			robj.SearchMenu(name);
			string again;
			cout << "Continue:            ";
			cin >> again;
			if (again == "yes" || again == "YES" || again == " Yes") {
				goto searchMenu;
			}
			else {
			ser:
				string a;
				cout << "\n\nGO BACK TO MENU (yes/no)?    ";
				cin >> a;
				if (a == "yes" || a == "YES")
				{
					goto rmanu;
				}
				else if (a == "no" || a == " NO")
				{
					return 0;
				}
				else if ((a != "yes" || a != "YES") || (a != "no" || a != " NO"))
				{
					cout << "TRY AGAIN  " << endl;
					goto ser;
				}
			}
			break;
		}
		case 4:
		{

			system("cls");
		DeleteMenu:
			string name;
			cout << "\n\n\t\tEnter Menu Name:                        ";
			cin >> name;
			robj.DeleteMenu(name);
			string again;
			cout << "Continue:            ";
			cin >> again;
			if (again == "yes" || again == "YES" || again == " Yes") {
				goto DeleteMenu;
			}
			else {
			dr:
				string a;
				cout << "\n\nGO BACK TO MENU (yes/no)?    ";
				cin >> a;
				if (a == "yes" || a == "YES")
				{
					goto rmanu;
				}
				else if (a == "no" || a == " NO")
				{
					return 0;
				}
				else if ((a != "yes" || a != "YES") || (a != "no" || a != " NO"))
				{
					cout << "TRY AGAIN  " << endl;
					goto dr;
				}
			}
			break;
		}
		case 5:
		{
			system("cls");
		updateMenu:
			string name;
			cout << "\n\n\t\tEnter Menu Name:                        ";
			cin >> name;
			robj.UpdateMenu(name);
			string again;
			cout << "Continue:            ";
			cin >> again;
			if (again == "yes" || again == "YES" || again == " Yes") {
				goto updateMenu;
			}
			else {
			ur:
				string a;
				cout << "\n\nGO BACK TO MENU (yes/no)?    ";
				cin >> a;
				if (a == "yes" || a == "YES")
				{
					goto rmanu;
				}
				else if (a == "no" || a == " NO")
				{
					return 0;
				}
				else if ((a != "yes" || a != "YES") || (a != "no" || a != " NO"))
				{
					cout << "TRY AGAIN  " << endl;
					goto ur;
				}
			}
			break;
		}
		case 6:
		{
			system("cls");
			goto main;
			break;
		}
		case 7:
		{
			return 0;
		}
		default:
		{
			goto rmanu;
		}
		}
		break;
	}
	case 3:
	{
	rmmanu:
		int roop;
		obj.RoomMenu();
		cout << "Select the Option:      ";
		cin >> roop;
		switch (roop) {
		case 1:
		{

			system("cls");
		ng:
			cout << "\n\n\n\n" << endl;
			string room, guest, date, family, stay, city;
			cout << "\n\t\tEnter Room NO:           ";
			cin >> room;
			cout << "\n\t\tEnter GUEST:           ";
			cin >> guest;
			cout << "\n\t\tEnter DATE:           ";
			cin >> date;
			cout << "\n\t\tEnter FAMILY:           ";
			cin >> family;
			cout << "\n\t\tEnter STAY:           ";
			cin >> stay;
			cout << "\n\t\tEnter CITY:           ";
			cin >> city;
			string stat = rmobj.NewGuest(room, guest, date, family, stay, city);
			cout << stat << endl;
			goto rmmanu;
			string again;
			cout << "Continue:            ";
			cin >> again;
			if (again == "yes" || again == "YES" || again == " Yes") {
				goto ng;
			}
			else {
			ner:
				string a;
				cout << "\n\nGO BACK TO MENU (yes/no)?    ";
				cin >> a;
				if (a == "yes" || a == "YES")
				{
					goto rmmanu;
				}
				else if (a == "no" || a == " NO")
				{
					return 0;
				}
				else if ((a != "yes" || a != "YES") || (a != "no" || a != " NO"))
				{
					cout << "TRY AGAIN  " << endl;
					goto ner;
				}
			}
			break;
		}
		case 2:
		{
			system("cls");
			rmobj.ShowAllGest();
		shg:
			string a;
			cout << "\n\nGO BACK TO MENU (yes/no)?    ";
			cin >> a;
			if (a == "yes" || a == "YES")
			{
				goto rmmanu;
			}
			else if (a == "no" || a == " NO")
			{
				return 0;
			}
			else if ((a != "yes" || a != "YES") || (a != "no" || a != " NO"))
			{
				cout << "TRY AGAIN  " << endl;
				goto shg;
			}
			break;
		}
		case 3:
		{
			system("cls");
		seg:
			string room;
			cout << "\t\tEnter Room NO:           ";
			cin >> room;
			rmobj.SearchGuest(room);
			string again;
			cout << "Continue:            ";
			cin >> again;
			if (again == "yes" || again == "YES" || again == " Yes") {
				goto seg;
			}
			else {
			sg:
				string a;
				cout << "\n\nGO BACK TO MENU (yes/no)?    ";
				cin >> a;
				if (a == "yes" || a == "YES")
				{
					goto rmmanu;
				}
				else if (a == "no" || a == " NO")
				{
					return 0;
				}
				else if ((a != "yes" || a != "YES") || (a != "no" || a != " NO"))
				{
					cout << "TRY AGAIN  " << endl;
					goto sg;
				}
			}
			break;
		}
		case 4:
		{
		srg:
			system("cls");
			string room;
			cout << "\t\tEnter Room NO:           ";
			cin >> room;
			rmobj.DeleteGuest(room);
			string again;
			cout << "Continue:            ";
			cin >> again;
			if (again == "yes" || again == "YES" || again == " Yes") {
				goto srg;
			}
			else {
			dg:
				string a;
				cout << "\n\nGO BACK TO MENU (yes/no)?    ";
				cin >> a;
				if (a == "yes" || a == "YES")
				{
					goto rmmanu;
				}
				else if (a == "no" || a == " NO")
				{
					return 0;
				}
				else if ((a != "yes" || a != "YES") || (a != "no" || a != " NO"))
				{
					cout << "TRY AGAIN  " << endl;
					goto dg;
				}
			}
			break;
		}
		case 5:
		{
			system("cls");
		upg:
			string room;
			cout << "\t\tEnter Room NO:           ";
			cin >> room;
			rmobj.UpdateRoom(room);
			string again;
			cout << "Continue:            ";
			cin >> again;
			if (again == "yes" || again == "YES" || again == " Yes") {
				goto upg;
			}
			else {
			ug:
				string a;
				cout << "\n\nGO BACK TO MENU (yes/no)?    ";
				cin >> a;
				if (a == "yes" || a == "YES")
				{
					goto rmmanu;
				}
				else if (a == "no" || a == " NO")
				{
					return 0;
				}
				else if ((a != "yes" || a != "YES") || (a != "no" || a != " NO"))
				{
					cout << "TRY AGAIN  " << endl;
					goto ug;
				}

				break;
			}
		}
		case 6:
		{
			goto main;
			break;
		}
		case 7:
		{
			return 0;
		}
		default:
		{
			goto rmanu;
		}
		}
		system("pause");
		goto main;
		break;
	}
	case 4:
	{
	wmanu:
		int wop;
		obj.WorkerMenu();
		cout << "Select the Option:      ";
		cin >> wop;
		switch (wop) {
		case 1:
		{
		worker:
			system("cls");
			string id, name, phone;
			int salary;
			cout << "\n\n\t\tEnter Worker ID:                         ";
			cin >> id;
			cout << "\n\n\t\tEnter Worker Name:                       ";
			cin >> name;
			cout << "\n\n\t\tEnter Worker Salary:                    ";
			cin >> salary;
			cout << "\n\n\t\tEnter Worker Phone:                      ";
			cin >> phone;
			string stat = wobj.NewWorker(id, name, salary, phone);
			cout << stat << endl;
			string again;
			cout << "Continue:            ";
			cin >> again;
			if (again == "yes" || again == "YES" || again == " Yes") {
				goto worker;
			}
			else {
			ufr:
				string a;
				cout << "\n\nGO BACK TO MENU (yes/no)?    ";
				cin >> a;
				if (a == "yes" || a == "YES")
				{
					goto wmanu;
				}
				else if (a == "no" || a == " NO")
				{
					return 0;
				}
				else if ((a != "yes" || a != "YES") || (a != "no" || a != " NO"))
				{
					cout << "TRY AGAIN  " << endl;
					goto ufr;
				}
			}
			break;
		}
		case 2:
		{
			system("cls");
			wobj.ShowAllWorkers();
		uyr:
			string a;
			cout << "\n\nGO BACK TO MENU (yes/no)?    ";
			cin >> a;
			if (a == "yes" || a == "YES")
			{
				goto wmanu;
			}
			else if (a == "no" || a == " NO")
			{
				return 0;
			}
			else if ((a != "yes" || a != "YES") || (a != "no" || a != " NO"))
			{
				cout << "TRY AGAIN  " << endl;
				goto uyr;
			}							break;
		}
		case 3:
		{
		searchwork:
			system("cls");
			string id;
			cout << "\n\n\t\tEnter Worker ID:                         ";
			cin >> id;
			wobj.SearchWorker(id);
			string an;
			cout << "Continue:            ";
			cin >> an;
			if (an == "yes" || an == "YES" || an == " Yes") {
				goto searchwork;
			}
			else {
			utr:
				string a;
				cout << "\n\nGO BACK TO MENU (yes/no)?    ";
				cin >> a;
				if (a == "yes" || a == "YES")
				{
					goto wmanu;
				}
				else if (a == "no" || a == " NO")
				{
					return 0;
				}
				else if ((a != "yes" || a != "YES") || (a != "no" || a != " NO"))
				{
					cout << "TRY AGAIN  " << endl;
					goto utr;
				}
			}
			break;
		}
		case 4:
		{
		deletwork:
			system("cls");
			string id;
			cout << "\n\n\t\tEnter Worker ID:                         ";
			cin >> id;
			wobj.DeleteWorker(id);
			string gn;
			cout << "Continue:            ";
			cin >> gn;
			if (gn == "yes" || gn == "YES" || gn == " Yes") {
				goto deletwork;
			}
			else {
			uur:
				string a;
				cout << "\n\nGO BACK TO MENU (yes/no)?    ";
				cin >> a;
				if (a == "yes" || a == "YES")
				{
					goto wmanu;
				}
				else if (a == "no" || a == " NO")
				{
					return 0;
				}
				else if ((a != "yes" || a != "YES") || (a != "no" || a != " NO"))
				{
					cout << "TRY AGAIN  " << endl;
					goto uur;
				}
			}
			break;
		}
		case 5:
		{
		updatework:
			system("cls");
			string id;
			cout << "\n\n\t\tEnter Worker ID:                         ";
			cin >> id;
			wobj.UpdateWorker(id);
			string gne;
			cout << "Continue:            ";
			cin >> gne;
			if (gne == "yes" || gne == "YES" || gne == " Yes") {
				goto updatework;
			}
			else {
			uqr:
				string a;
				cout << "\n\nGO BACK TO MENU (yes/no)?    ";
				cin >> a;
				if (a == "yes" || a == "YES")
				{
					goto wmanu;
				}
				else if (a == "no" || a == " NO")
				{
					return 0;
				}
				else if ((a != "yes" || a != "YES") || (a != "no" || a != " NO"))
				{
					cout << "TRY AGAIN  " << endl;
					goto uqr;
				}
			}
			break;
		}
		case 6:
		{
			goto main;
			break;
		}
		case 7:
		{
			return 0;
		}
		default:
		{
			goto rmanu;
		}
		}
		system("pause");
		goto main;
		break;
	}
	case 5:
	{
		return 0;
		break;
	}
	default:
	{
		goto main;
	}

	}


}


