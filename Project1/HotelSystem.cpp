#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include"HotelMenus.cpp"
#include"Racipees.cpp"
#include"Workers.cpp"
#include"Rooms.cpp"
using namespace std;

RacipeeDetails robj;
RoomsDetails   rmobj;
WorkerDetails wobj;

int main(){
///////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
	robj.NewRacipee("Tea",5000,"Lazizjon");
	robj.NewRacipee("Coffee",7500,"Yokubjon");
	robj.NewRacipee("Vodka+Liquor",35000,"Akmaljon");
	robj.NewRacipee("Fruit Salat",25000,"Jasurbek");
	robj.NewRacipee("Beaf",45000,"Khodjimurat");
	robj.NewRacipee("Chicken",35000,"Khodjimurat");
////////////////////////////////////////////////////////////////////////////////////////////	
///////////////////////////////////////////////////////////////////////////////////////////	
	rmobj.NewGest("1","Ashish","2-2-2019","couple","1 month","lahore");
	rmobj.NewGest("2","muhammad","2-2-2019","couple","1 month","lahore");
	rmobj.NewGest("3","hassan","2-2-2019","couple","1 month","lahore");
	rmobj.NewGest("4","ali","2-2-2019","couple","1 month","lahore");
	rmobj.NewGest("5","abbas","2-2-2019","couple","1 month","lahore");
///////////////////////////////////////////////////////////////////////////////////////////	
//////////////////////////////////////////////////////////////////////////////////////////
	wobj.NewWorker("1","Lazizjon",1200000,"03118897764");
	wobj.NewWorker("2","Khodjimurat",1200000,"03118897764");
	wobj.NewWorker("3","Yokubjon",1200000,"03118897764");
	wobj.NewWorker("4","Akmaljon",1200000,"03118897764");
	wobj.NewWorker("5","Jasurbek",1200000,"03118897764");
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////	
	
	HotelMenu obj;
	system("100");
	obj.suneel();
	system ("pause");
	obj.wellcom();
 	system ("pause");
	obj.Loading();
	cout<<"\n\n\n\n\n\n\n\n\n";
	system ("pause");
	main:
	system("cls");
	int op;
	obj.MainMenu();
	cout<<"Select The Option:                       ";
	cin>>op;
	switch(op){
		case 1:
			{
				obj.HotelInformation();
					yr:
				string a;
		     	cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
				cin>>a;
		     	if(a=="yes" || a=="YES")
				{
			    	goto main;	
				}else if(a=="no" || a==" NO")
				{
					return 0;
				}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
				{
				cout<<"TRY AGAIN  "<<endl;
					goto yr;
				}
				break;	
			}
		case 2:
			{
				rmanu:
				int rop;
				obj.RacipeesMenu();
				cout<<"Select the Option:      ";
				cin>>rop;
				switch(rop){
					case 1:
						{
							system("cls");
							New:
							string chief,name;
							int price;
							cout<<"\n\n\t\tEnter Racipee Name:                        ";
							cin>>name;
							cout<<"\n\n\t\tEnter Racipee Price:                       ";
							cin>>price;
							cout<<"\n\n\t\tEnter Racipee Chief:                       ";
							cin>>chief;
							robj.NewRacipee(name,price,chief);
							string again;
							cout<<"Continue:            ";
							cin>>again;
							if(again == "yes" || again == "YES" || again ==" Yes"){
								goto New;
							}else{
								nr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto nr;
								}
							}
							break;
						}
					case 2:
						{
							system("cls");
							robj.ShowAllRacipees();
							system("pause");
							sr:
							string a;
		     				cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
							cin>>a;
					     	if(a=="yes" || a=="YES")
							{
			    				goto rmanu;	
							}else if(a=="no" || a==" NO")
							{
								return 0;
							}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
							{
								cout<<"TRY AGAIN  "<<endl;
								goto sr;
							}
							
							break;
						}
					case 3:
						{
							searchracip:
							system("cls");
							string name;
							cout<<"\n\n\t\tEnter Racipee Name:                        ";
							cin>>name;
							robj.SearchRacipee(name);
							string again;
							cout<<"Continue:            ";
							cin>>again;
							if(again == "yes" || again == "YES" || again ==" Yes"){
								goto searchracip;
							}else{
								ser:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto ser;
								}
							}
							break;
						}
					case 4:
						{
							
							system("cls");
							Deleteracip:
							string name;
							cout<<"\n\n\t\tEnter Racipee Name:                        ";
							cin>>name;
							robj.DeleteRacipee(name);	
							string again;
							cout<<"Continue:            ";
							cin>>again;
							if(again == "yes" || again == "YES" || again ==" Yes"){
								goto Deleteracip;
							}else{
								dr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto dr;
								}
							}
							break;
						}
					case 5:
						{
							system("cls");
							updateracip:
							string name;
							cout<<"\n\n\t\tEnter Racipee Name:                        ";
							cin>>name;
							robj.UpdateRacipee(name);
							string again;
							cout<<"Continue:            ";
							cin>>again;
							if(again == "yes" || again == "YES" || again ==" Yes"){
								goto updateracip;
							}else{
								ur:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
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
				cout<<"Select the Option:      ";
				cin>>roop;
				switch(roop){
					case 1:
						{
							
							system("cls");
							ng:
							cout<<"\n\n\n\n"<<endl;
							string room,gest,date,family,stay,city;
							cout<<"\n\t\tEnter Room NO:           ";
							cin>>room;
							cout<<"\n\t\tEnter GEST:           ";
							cin>>gest;
							cout<<"\n\t\tEnter DATE:           ";
							cin>>date;
							cout<<"\n\t\tEnter FAMILY:           ";
							cin>>family;
							cout<<"\n\t\tEnter STAY:           ";
							cin>>stay;
							cout<<"\n\t\tEnter CITY:           ";
							cin>>city;
							 string stat = rmobj.NewGest(room,gest,date,family,stay,city);
							 cout<<stat<<endl;
							goto rmmanu;
							 string again;
							cout<<"Continue:            ";
							cin>>again;
							if(again == "yes" || again == "YES" || again ==" Yes"){
								goto ng;
							}else{
								ner:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
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
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto shg;
								}
							break;
						}
					case 3:
						{
							system("cls");
							seg:
							string room;
							cout<<"\t\tEnter Room NO:           ";
							cin>>room;
							rmobj.SearchGest(room);
							 string again;
							cout<<"Continue:            ";
							cin>>again;
							if(again == "yes" || again == "YES" || again ==" Yes"){
								goto seg;
							}else{
								sg:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
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
							cout<<"\t\tEnter Room NO:           ";
							cin>>room;
							rmobj.DeleteGest(room);
							string again;
							cout<<"Continue:            ";
							cin>>again;
							if(again == "yes" || again == "YES" || again ==" Yes"){
								goto srg;
							}else{
								dg:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
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
							cout<<"\t\tEnter Room NO:           ";
							cin>>room;
							rmobj.UpdateRoom(room);
							 string again;
							cout<<"Continue:            ";
							cin>>again;
							if(again == "yes" || again == "YES" || again ==" Yes"){
								goto upg;
							}else{
								ug:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto rmmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
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
				system ("pause");
				 goto main;
				break;	
			}
		case 4:
			{
				wmanu:
				int wop;
				obj.WorkerMenu();
				cout<<"Select the Option:      ";
				cin>>wop;
				switch(wop){
					case 1:
						{
							worker:
							system("cls");
							string id,name,phone;
							int sallary;
							cout<<"\n\n\t\tEnter Worker ID:                         ";
							cin>>id;
							cout<<"\n\n\t\tEnter Worker Name:                       ";
							cin>>name;
							cout<<"\n\n\t\tEnter Worker Sallary:                    ";
							cin>>sallary;
							cout<<"\n\n\t\tEnter Worker Phone:                      ";
							cin>>phone;
							string stat = wobj.NewWorker(id,name,sallary,phone);
							cout<<stat<<endl;
							string agan;
							cout<<"Continue:            ";
							cin>>agan;
							if(agan == "yes" || agan == "YES" || agan ==" Yes"){
								goto worker;
							}else{
								ufr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto wmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
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
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto wmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
									goto uyr;
								}							break;
						}
					case 3:
						{
							searchwork:
							system("cls");
							string id;
							cout<<"\n\n\t\tEnter Worker ID:                         ";
							cin>>id;
							wobj.SearchWorker(id);
							string an;
							cout<<"Continue:            ";
							cin>>an;
							if(an == "yes" || an == "YES" || an ==" Yes"){
								goto searchwork;
							}else{
								utr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto wmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
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
							cout<<"\n\n\t\tEnter Worker ID:                         ";
							cin>>id;
							wobj.DeleteWorker(id);
							string gn;
							cout<<"Continue:            ";
							cin>>gn;
							if(gn == "yes" || gn == "YES" || gn ==" Yes"){
								goto deletwork;
							}else{
								uur:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto wmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
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
							cout<<"\n\n\t\tEnter Worker ID:                         ";
							cin>>id;
						    wobj.UpdateWorker(id);
						    string gne;
							cout<<"Continue:            ";
							cin>>gne;
							if(gne == "yes" || gne == "YES" || gne ==" Yes"){
								goto updatework;
							}else{
								uqr:
								string a;
		     					cout<<"\n\nGO BACK TO MENU (yes/no)?    ";
								cin>>a;
					     		if(a=="yes" || a=="YES")
								{
			    					goto wmanu;	
								}else if(a=="no" || a==" NO")
								{
									return 0;
								}else if((a!="yes" || a!="YES") || (a!="no" || a!=" NO"))
								{
									cout<<"TRY AGAIN  "<<endl;
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
				system ("pause");
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
