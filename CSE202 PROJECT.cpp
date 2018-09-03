#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<windows.h>
using namespace std;
class scholarship
{
	public:
	char a[20],l[20],k[20],z[10],v[20];
	int b,j,e,f,i,s;
	float h,p,g,p1;
	
//	public:
		void putinfo1()
		{
			cout<<"                           ********************LPU ENGINEERING SCHOLARSHIP SCHEME********************";
			cout<<"\n\n\n                                                  ********REGISTRATION********";
			//system("cls");
				fstream file5;
				fstream file6;
				fstream file7;
				fstream file8;
				fstream file9;
					string u,x,y,m;
				string s,r,t,z,z1;
				  string v= ".txt" ;
			
			    cout<<"\n\n\n\tEnter your name\n\t";
			    cin>>ws;
			    //cin>>y;
			    getline(cin,y);
			    
				cout<<"\tenter your father's name :-\n\t";
				
				cin>>ws;
				cin>>ws;
				  getline(cin,u);
			   //cin>>u;
			   
				 cout<<"\n\tEnter your contact number :-\n\t";
				 cin>>ws;
				 cin>>m;
				r=y+v;
				t=y+"email"+v;
				
				z=y+"name"+v;
				z1=y+"contact number"+v;
				s=y+"all"+v;
				cout<<"\n\tEnter your emailid\n\t";
				getline(cin,x);
				cin>>x;
				file5.open(r.c_str(),ios::out);
				file7.open(t.c_str(),ios::out);
				
				file8.open(z.c_str(),ios::out);
				
				file6.open(z1.c_str(),ios::out);
				file9.open(s.c_str(),ios::out);
				
				
				file5<<u;
				
				file8<<y;
					file6<<m;
				file7<<x;
				file9<<"Name :-"<< y<<"\n"<<"Father's name :- "<<u<<"\n"<<"contact number :- "<<m<<"\n"<<"Email id :- "<<x<<endl;
				
				
					file5.close();
				
                file8.close();
			
				file6.close();
				file7.close();
				
				
				file9.close();
				//file5.close();
				//cin>>ws;
			G :	cout<<"\n\n\n\t\tYou have succesfully registered";
			getch();
		/*	cout<<"\n\n\n  Enter name - ";
			cin>>a;
			cout<<"\n\n  Enter Father's name - ";
			cin>>l;
			cout<<"\n\n  Enter Contact number - ";
			cin>>z;
			cout<<"\n\n  Enter City - ";
			cin>>k;*/
			system("cls");
			if(k)
			{
				cout<<"\n\n\n                                               ********ENTER COURSE DETAILS********";
			}
			cout<<"  \n\n\n  Enter the course you want to choose - \n\n";
			cout<<"\n\n1. Computer science and engineering\n\n2. Mechanical Engineering\n\n3. Electronics and Communication engineering\n\n4. Electronics and Elecrical engineering\n\n5. Civil engineering\n\n";
			cin>>b;
			switch(b)
			{
				case 1:
					system("cls");
		cout<<"\n\n*/Actual fee is 89500 per semester*/\n\n"<<endl;
			
					cout<<"\n\n  Select any one of the scholarship scheme - "<<endl;
					cout<<"\n\n1. Scholarship based on 12th marks\n\n2. Scholarship based on LPUNEST marks\n\n";
					cin>>e;
					switch(e)
					{
					
					
						case 1:
							system("cls");
							cout<<"\n\n  Select 12th board";
							cout<<"\n\n1.CBSE\n\n2.State Board\n\n";
							cin>>f;
							switch(f)
							{
								case 1:
									{
									system("cls");
									cout<<"\n\n  Enter your marks - ";
									cin>>h;
									p=(h/500)*100;
									cout<<"\n\nYour percentage is - "<<p<<"%";
									fstream file20;
									string h1,h3;
									string h2=".txt";
									h3=y+h2;
									file20.open(h3.c_str(),ios::out);
									file9.open(s.c_str(),ios::app);
									file20<<p;
									file9<<"\nPercentage in +2 :- "<<p<<"\n";
									file20.close();
									file9.close();
									if(p>=90)
									{
										cout<<"\n\n/*You are among top 10% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 50000 per semester*/\n\n";
									}
									else if(p>=80&&p<=89.9)
									{
										cout<<"\n\n/*You are among top 11-20% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 40000 per semester*/\n\n";
									}
									else if(p>=70&&p<=79.9)
									{
										cout<<"\n\n/*You are among top 21-35% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 30000 per semester*/\n\n";
									}
										else
							{
								cout<<"\n\n/*You are not eligible for scholarship*/\n\n";
							}
									break;
								}
						//	}
					//	}
							case 2:
								
								system("cls");
								cout<<"\n\n  Enter your marks - ";
								cin>>g;
								p1=(g/1000)*100;
								cout<<"\n\nYour percentage is - "<<p1<<"%";
								fstream file20;
									string h1,h3;
									string h2=".txt";
									h3=y+h2;
									file20.open(h3.c_str(),ios::out);
									file9.open(s.c_str(),ios::app);
									file20<<p1;
									file9<<"\nPercentage in +2 :- "<<p1<<"\n";
									file20.close();
									file9.close();
									
											if(p1>=90)
									{
										cout<<"\n\n/*You are among top 10% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 50000 per semester*/\n\n";
									}
									else if(p1>=80&&p1<=89.9)
									{
										cout<<"\n\n/*You are among top 11-20% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 40000 per semester*/\n\n";
									}
									else if(p1>=70&&p1<=79.9)
									{
										cout<<"\n\n/*You are among top 21-35% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 30000 per semester*/\n\n";
									}
										else
						        	{
								cout<<"\n\n/*You are not eligible for scholarship*/\n\n";
						        	}
							//	break;
							}
								break;
								
							
							
							case 2:
								system("cls");
									cout<<"\n\n  Enter your LPUNEST marks - ";
									cin>>j;
									fstream file20;
									string h1,h3;
									string h2=".txt";
									h3=y+h2;
									file20.open(h3.c_str(),ios::out);
									file9.open(s.c_str(),ios::app);
									file20<<j;
									file9<<"\nScore in LPUNEST:- "<<j<<"\n";
									file20.close();
									file9.close();
									
									if(j>=200)
									{
								   cout<<"\n\n/*You are among top 10% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 50000 per semester*/\n\n";
							}
							else if(j>=100&&j<=200)
							{
								cout<<"\n\n/*You are among top 11-20% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 40000 per semester*/\n\n";
							}
							else if(j>=50&&j<=100)
							{
								cout<<"\n\n/*You are among top 21-35% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 30000 per semester*/\n\n";
							}
							else
							{
								cout<<"\n\n/*You are not eligible for scholarship*/\n\n";
							}
							break;
					}
				//	break;
				
				case 2:
					system("cls");
						cout<<"\n\n*/Actual fee is 89500 per semester*/\n\n"<<endl;
			
					cout<<"\n\n  Select any one of the scholarship scheme - "<<endl;
					cout<<"\n\n1. Scholarship based on 12th marks\n\n2. Scholarship based on LPUNEST marks\n\n";
					cin>>e;
					switch(e)
					{
					
					
						case 1:
							system("cls");
							cout<<"\n\n  Select 12th board";
							cout<<"\n\n1.CBSE\n\n2.State Board\n\n";
							cin>>f;
							switch(f)
							{
								case 1:
									{
									system("cls");
									cout<<"\n\n  Enter your marks - ";
									cin>>h;
									p=(h/500)*100;
									cout<<"\n\nYour percentage is - "<<p<<"%";
									fstream file20;
									string h1,h3;
									string h2=".txt";
									h3=y+h2;
									file20.open(h3.c_str(),ios::out);
									file9.open(s.c_str(),ios::app);
									file20<<p;
									file9<<"\nPercentage in +2 :- "<<p<<"\n";
									file20.close();
									file9.close();
									
									if(p>=90)
									{
										cout<<"\n\n/*You are among top 10% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 50000 per semester*/\n\n";
									}
									else if(p>=80&&p<=89.9)
									{
										cout<<"\n\n/*You are among top 11-20% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 40000 per semester*/\n\n";
									}
									else if(p>=70&&p<=79.9)
									{
										cout<<"\n\n/*You are among top 21-35% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 30000 per semester*/\n\n";
									}
										else
							{
								cout<<"\n\n/*You are not eligible for scholarship*/\n\n";
							}
									break;
								
						}
							case 2:
								system("cls");
								cout<<"\n\n  Enter your marks - ";
								cin>>g;
								p1=(g/1000)*100;
								cout<<"\n\nYour percentage is - "<<p1<<"%";
								fstream file20;
									string h1,h3;
									string h2=".txt";
									h3=y+h2;
									file20.open(h3.c_str(),ios::out);
									file9.open(s.c_str(),ios::app);
									file20<<p1;
									file9<<"\nPercentage in +2 :- "<<p1<<"\n";
									file20.close();
									file9.close();
									
											if(p1>=90)
									{
										cout<<"\n\n/*You are among top 10% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 50000 per semester*/\n\n";
									}
									else if(p1>=80&&p1<=89.9)
									{
										cout<<"\n\n/*You are among top 11-20% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 40000 per semester*/\n\n";
									}
									else if(p1>=70&&p1<=79.9)
									{
										cout<<"\n\n/*You are among top 21-35% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 30000 per semester*/\n\n";
									}
										else
						        	{
								cout<<"\n\n/*You are not eligible for scholarship*/\n\n";
						        	}
								break;
							}
								break;
								
							
							
							case 2:
								system("cls");
									cout<<"\n\n  Enter your LPUNEST marks - ";
									cin>>j;
									fstream file20;
									string h1,h3;
									string h2=".txt";
									h3=y+h2;
									file20.open(h3.c_str(),ios::out);
									file9.open(s.c_str(),ios::app);
									file20<<j;
									file9<<"\nScore in LPUNEST :- "<<j<<"\n";
									file20.close();
									file9.close();
									
									if(j>=200)
									{
								   cout<<"\n\n/*You are among top 10% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 50000 per semester*/\n\n";
							}
							else if(j>=100&&j<=200)
							{
								cout<<"\n\n/*You are among top 11-20% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 40000 per semester*/\n\n";
							}
							else if(j>=50&&j<=100)
							{
								cout<<"\n\n/*You are among top 21-35% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 30000 per semester*/\n\n";
							}
							else
							{
								cout<<"\n\n/*You are not eligible for scholarship*/\n\n";
							}
							break;
					}
					break;
					case 3:
						system("cls");
						cout<<"\n\n*/Actual fee is 89500 per semester*/\n\n"<<endl;
			
					cout<<"\n\n  Select any one of the scholarship scheme - "<<endl;
					cout<<"\n\n1. Scholarship based on 12th marks\n\n2. Scholarship based on LPUNEST marks\n\n";
					cin>>e;
					switch(e)
					{
					
					
						case 1:
							system("cls");
							cout<<"\n\n  Select 12th board";
							cout<<"\n\n1.CBSE\n\n2.State Board\n\n";
							cin>>f;
							switch(f)
							{
								case 1:
									{
									system("cls");
									cout<<"\n\n  Enter your marks - ";
									cin>>h;
									p=(h/500)*100;
									cout<<"\n\nYour percentage is - "<<p<<"%";
									fstream file20;
									string h1,h3;
									string h2=".txt";
									h3=y+h2;
									file20.open(h3.c_str(),ios::out);
									file9.open(s.c_str(),ios::app);
									file20<<p;
									file9<<"\nPercentage in +2 :- "<<p<<"\n";
									file20.close();
									file9.close();
									
									if(p>=90)
									{
										cout<<"\n\n/*You are among top 10% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 50000 per semester*/\n\n";
									}
									else if(p>=80&&p<=89.9)
									{
										cout<<"\n\n/*You are among top 11-20% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 40000 per semester*/\n\n";
									}
									else if(p>=70&&p<=79.9)
									{
										cout<<"\n\n/*You are among top 21-35% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 30000 per semester*/\n\n";
									}
										else
							{
								cout<<"\n\n/*You are not eligible for scholarship*/\n\n";
							}
									break;
								
					}
							case 2:
								system("cls");
								cout<<"\n\n  Enter your marks - ";
								cin>>g;
								p1=(g/1000)*100;
								cout<<"\n\nYour percentage is - "<<p1<<"%";
								fstream file20;
									string h1,h3;
									string h2=".txt";
									h3=y+h2;
									file20.open(h3.c_str(),ios::out);
									file9.open(s.c_str(),ios::app);
									file20<<p1;
									file9<<"\nPercentage in +2 :- "<<p1<<"\n";
									file20.close();
									file9.close();
									
											if(p1>=90)
									{
										cout<<"\n\n/*You are among top 10% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 50000 per semester*/\n\n";
									}
									else if(p1>=80&&p1<=89.9)
									{
										cout<<"\n\n/*You are among top 11-20% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 40000 per semester*/\n\n";
									}
									else if(p1>=70&&p1<=79.9)
									{
										cout<<"\n\n/*You are among top 21-35% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 30000 per semester*/\n\n";
									}
										else
						        	{
								cout<<"\n\n/*You are not eligible for scholarship*/\n\n";
						        	}
								break;
							}
								break;
								
							
							
							case 2:
								system("cls");
									cout<<"\n\n  Enter your LPUNEST marks - ";
									cin>>j;
									fstream file20;
									string h1,h3;
									string h2=".txt";
									h3=y+h2;
									file20.open(h3.c_str(),ios::out);
									file9.open(s.c_str(),ios::app);
									file20<<j;
									file9<<"\nScore in LPUNEST :- "<<j<<"\n";
									file20.close();
									file9.close();
									
									if(j>=200)
									{
								   cout<<"\n\n/*You are among top 10% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 50000 per semester*/\n\n";
							}
							else if(j>=100&&j<=200)
							{
								cout<<"\n\n/*You are among top 11-20% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 40000 per semester*/\n\n";
							}
							else if(j>=50&&j<=100)
							{
								cout<<"\n\n/*You are among top 21-35% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 30000 per semester*/\n\n";
							}
							else
							{
								cout<<"\n\n/*You are not eligible for scholarship*/\n\n";
							}
							break;
					}
					break;
					case 4:
						system("cls");
						cout<<"\n\n*/Actual fee is 89500 per semester*/\n\n"<<endl;
			
					cout<<"\n\n  Select any one of the scholarship scheme - "<<endl;
					cout<<"\n\n1. Scholarship based on 12th marks\n\n2. Scholarship based on LPUNEST marks\n\n";
					cin>>e;
					switch(e)
					{
					
					
						case 1:
							system("cls");
							cout<<"\n\n  Select 12th board";
							cout<<"\n\n1.CBSE\n\n2.State Board\n\n";
							cin>>f;
							switch(f)
							{
								case 1:
									{
										system("cls");
									cout<<"\n\nEnter your marks - ";
									cin>>h;
									p=(h/500)*100;
									cout<<"\n\nYour percentage is - "<<p<<"%";
									fstream file20;
									string h1,h3;
									string h2=".txt";
									h3=y+h2;
									file20.open(h3.c_str(),ios::out);
									file9.open(s.c_str(),ios::app);
									file20<<p;
									file9<<"\nPercentage in +2 :- "<<p<<"\n";
									file20.close();
									file9.close();
									
									if(p>=90)
									{
										cout<<"\n\n/*You are among top 10% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 50000 per semester*/\n\n";
									}
									else if(p>=80&&p<=89.9)
									{
										cout<<"\n\n/*You are among top 11-20% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 40000 per semester*/\n\n";
									}
									else if(p>=70&&p<=79.9)
									{
										cout<<"\n\n/*You are among top 21-35% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 30000 per semester*/\n\n";
									}
										else
							{
								cout<<"\n\n/*You are not eligible for scholarship*/\n\n";
							}
									break;
								
						}
							case 2:
								system("cls");
								cout<<"\n\n  Enter your marks - ";
								cin>>g;
								p1=(g/1000)*100;
								cout<<"\n\nYour percentage is - "<<p1<<"%";
								fstream file20;
									string h1,h3;
									string h2=".txt";
									h3=y+h2;
									file20.open(h3.c_str(),ios::out);
									file9.open(s.c_str(),ios::app);
									file20<<p1;
									file9<<"\nPercentage in +2 :- "<<p1<<"\n";
									file20.close();
									file9.close();
									
											if(p1>=90)
									{
										cout<<"\n\n/*You are among top 10% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 50000 per semester*/\n\n";
									}
									else if(p1>=80&&p1<=89.9)
									{
										cout<<"\n\n/*You are among top 11-20% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 40000 per semester*/\n\n";
									}
									else if(p1>=70&&p1<=79.9)
									{
										cout<<"\n\n/*You are among top 21-35% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 30000 per semester*/\n\n";
									}
										else
						        	{
								cout<<"\n\n/*You are not eligible for scholarship*/\n\n";
						        	}
								break;
							}
								break;
								
							
							
							case 2:
								system("cls");
									cout<<"\n\n  Enter your LPUNEST marks - ";
									cin>>j;
									fstream file20;
									string h1,h3;
									string h2=".txt";
									h3=y+h2;
									file20.open(h3.c_str(),ios::out);
									file9.open(s.c_str(),ios::app);
									file20<<j;
									file9<<"\nScore in LPUNEST:- "<<j<<"\n";
									file20.close();
									file9.close();
									
									if(j>=200)
									{
								   cout<<"\n\n/*You are among top 10% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 50000 per semester*/\n\n";
							}
							else if(j>=100&&j<=200)
							{
								cout<<"\n\n/*You are among top 11-20% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 40000 per semester*/\n\n";
							}
							else if(j>=50&&j<=100)
							{
								cout<<"\n\n/*You are among top 21-35% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 30000 per semester*/\n\n";
							}
							else
							{
								cout<<"\n\n/*You are not eligible for scholarship*/\n\n";
							}
							break;
					}
					break;
						case 5:
							system("cls");
						cout<<"\n\n*/Actual fee is 89500 per semester*/\n\n"<<endl;
			
					cout<<"\n\n  Select any one of the scholarship scheme - "<<endl;
					cout<<"\n\n1. Scholarship based on 12th marks\n\n2. Scholarship based on LPUNEST marks\n\n";
					cin>>e;
					switch(e)
					{
					
					
						case 1:
							system("cls");
							cout<<"\n\n  Select 12th board";
							cout<<"\n\n1.CBSE\n\n2.State Board\n\n";
							cin>>f;
							switch(f)
							{
								case 1:
									{
									system("cls");
									cout<<"\n\n  Enter your marks - ";
									cin>>h;
									p=(h/500)*100;
									cout<<"\n\nYour percentage is - "<<p<<"%";
									fstream file20;
									string h1,h3;
									string h2=".txt";
									h3=y+h2;
									file20.open(h3.c_str(),ios::out);
									file9.open(s.c_str(),ios::app);
									file20<<p;
									file9<<"\nPercentage in +2 :- "<<p<<"\n";
									file20.close();
									file9.close();
									
									if(p>=90)
									{
										cout<<"\n\n/*You are among top 10% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 50000 per semester*/\n\n";
									}
									else if(p>=80&&p<=89.9)
									{
										cout<<"\n\n/*You are among top 11-20% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 40000 per semester*/\n\n";
									}
									else if(p>=70&&p<=79.9)
									{
										cout<<"\n\n/*You are among top 21-35% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 30000 per semester*/\n\n";
									}
										else
							{
								cout<<"\n\n/*You are not eligible for scholarship*/\n\n";
							}
									break;
								
						}
							case 2:
								system("cls");
								cout<<"\n\n  Enter your marks - ";
								cin>>g;
								p1=(g/1000)*100;
								cout<<"\n\nYour percentage is - "<<p1<<"%";
								fstream file20;
									string h1,h3;
									string h2=".txt";
									h3=y+h2;
									file20.open(h3.c_str(),ios::out);
									file9.open(s.c_str(),ios::app);
									file20<<p1;
									file9<<"\nPercentage in +2 :- "<<p1<<"\n";
									file20.close();
									file9.close();
									
											if(p1>=90)
									{
										cout<<"\n\n/*You are among top 10% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 50000 per semester*/\n\n";
									}
									else if(p1>=80&&p1<=89.9)
									{
										cout<<"\n\n/*You are among top 11-20% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 40000 per semester*/\n\n";
									}
									else if(p1>=70&&p1<=79.9)
									{
										cout<<"\n\n/*You are among top 21-35% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 30000 per semester*/\n\n";
									}
										else
						        	{
								cout<<"\n\n/*You are not eligible for scholarship*/\n\n";
						        	}
								break;
							}
								break;
								
							
							
							case 2:
								system("cls");
									cout<<"\n\n  Enter your LPUNEST marks - ";
									cin>>j;
									fstream file20;
									string h1,h3;
									string h2=".txt";
									h3=y+h2;
									file20.open(h3.c_str(),ios::out);
									file9.open(s.c_str(),ios::app);
									file20<<j;
									file9<<"\nScore in LPUNEST :- "<<j<<"\n";
									file20.close();
									file9.close();
									
									if(j>=200)
									{
								   cout<<"\n\n/*You are among top 10% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 50000 per semester*/\n\n";
							}
							else if(j>=100&&j<=200)
							{
								cout<<"\n\n/*You are among top 11-20% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 40000 per semester*/\n\n";
							}
							else if(j>=50&&j<=100)
							{
								cout<<"\n\n/*You are among top 21-35% students*/\n";
								   cout<<"\n\n/*So you get a scholarship of 30000 per semester*/\n\n";
							}
							else
							{
								cout<<"\n\n/*You are not eligible for scholarship*/\n\n";
							}
							break;
					}
					break;
						
				}
		
		}
		void showdata()
		{
			cout<<"\n\n  Your E-Receipt is being generated....";
			for(i=0;i<1000000000;i++){}
			/*cout<<"\n\n\n-  Student's name is "<<y;
			cout<<"\n\n-  Father's name is "<<u;
			cout<<"\n\n-  Contact Number is "<<m;
			cout<<"\n\n-  Email is "<<x;*/
		/*	fstream file21;
			file21.open(s.c_str(),ios::in);
			char ch;
			while(file21)
			{
				file21>>ch;
				putchar(ch);
			}*/
			if(b==1)
			{
				cout<<"\n\n-  Selected course is Computer science and engineering";
			}
			else if(b==2)
			{
				cout<<"\n\n-  Selected course is Mechanical engineering";
			}
			else if(b==3)
			{
				cout<<"\n\n-  Selected course is Electronics and Communication engineering";
			}
			else
			{
				cout<<"\n\n-  Selected course is Electronics and Elecrical engineering";
			}
			if(p>=90||p1>=90||j>=200)
			{
				cout<<"\n\n-  Allotted Scholarship is 50000";
			}
			else if(p>=80&&p<=89.9||p1>=80&&p1<=89.9||j>=100&&j<=200)
			{
				cout<<"\n\n-  Allotted scholarship is 40000";
			}
			else if(p>=70&&p<=79.9||p1>=70&&p1<=79.9||j>=50&&j<=100)
			{
				cout<<"\n\n-  Allotted scholarship is 30000";
			}
			else
			{
				cout<<"\n\n-  No scholarship is allotted";
			}
	}

	

};
int main()
{
	 system("title Jayram");
	//system("help");
	system("color 02");
	int k=0;
	A : cout<<"\n\n\n\n\n\n\t"<<"Enter Username  :-"<<endl;
	printf("\t ");
	E : fstream file3;
	fstream file4;
	file3.open("username.txt",ios::out);
	char username[50];
	cin>>ws;
	gets(username);
	file3<<username;
	file3.close();
	
	file3.open("username.txt",ios::in);
	file3.seekg(0,ios::end);
	int l=file3.tellg();
	file3.close();
	file4.open("origusernamejayram.txt",ios::in);
	file4.seekg(0,ios::end);
	int m=file4.tellg();
	file4.close();
	if(l==m)
	{
	file3.open("username.txt",ios::in);
	file4.open("origusernamejayram.txt",ios::in);
	char c,d;
	int i=0;
	while(file3&&file4)
	{
		file3>>c;
		file4>>d;
		if(c==d)
		{
			i++;
		}
		
	}
	file3.close();
	file4.close();
	if(i==l+1||i==m+1)
	{
		B : cout<<"\n\n\t"<<"Enter Password :-"<<endl;
		printf("\t ");
		fstream file1;
	fstream file2;
	file1.open("Password.txt",ios::out);
	string pass;
	char ch;
	ch=_getch();
	while(ch!=13)
	{
		pass.push_back(ch);
		cout<<"¤";
		Beep(5000,30);//(frequency,delay in milli second);
		ch=_getch();
	}
	
	file1<<pass;
	file1.close();
	
	file1.open("Password.txt",ios::in);
	file1.seekg(0,ios::end);
	int n=file1.tellg();
	file1.close();
	file2.open("origpasswordjayram.txt",ios::in);
	file2.seekg(0,ios::end);
	int o=file2.tellg();
	file2.close();
	if(n==o)
	{
	file1.open("Password.txt",ios::in);
	file2.open("origpasswordjayram.txt",ios::in);
	char e,f;
	int j=0;
	while(file1&&file2)
	{
		file1>>e;
		file2>>f;
		if(e==f)
		{
			j++;
		}
		
	}
	file1.close();
	file2.close();
	if(j==n+1||j==o+1)
	{
		cout<<"\n\n\t\t\t"<<"You Are Sucessfully logged in";
		getch();
		system("cls");
		int a1;
		for(a1=5;a1>=1;a1--)
		{
			cout<<"\n\n\n\t  Taking you to our server page in "<<a1<<" seconds....\n";
			Sleep(1000);
			Beep(5000,50);
			system("cls");
			//getch
			
			
		}
}
else
	{   k++;
		cout<<"\n\n\n\t"<<"access denied";
		getch();
		if(k>=3)
		{
			cout<<"\n\n\n\t"<<"You have entered password three times wrong";
			cout<<"\n\tWait for ";//5 seconds";
			int s;
				for(s=5;s>=1;s--)
			{
				
				cout<<"\n\tWait for "<<s<<" seconds....";
					Sleep( 1000 );
					Beep(5000,50);
					system("cls");
			}
			getch();
			cout<<"\n\tpress enter";
			k=0;
			system("cls");
		goto B;
	
		}
		system("cls");
		goto B;
	}
}
else
{  k++;
	cout<<"\n\n\n\t"<<"not accepted"<<endl;
	getch();
	if(k>=3)
		{
			cout<<"\n\n\n\t"<<"You have entered password three times wrong";
			int r;
			for(r=5;r>=1;r--)
			{
				
				cout<<"\n\tWait for "<<r<<" seconds....";
					Sleep( 1000 );
					Beep(5000,50);
					system("cls");
			}
			getch();
			cout<<"\n\tpress enter";
			k=0;
			system("cls");
		goto B;
	}
		system("cls");
		goto B;
	
}
}
	else
	{
		cout<<"\n\n\n\t"<<"Wrong username";
		getch();
		system("cls");
		goto A;
	}
}
else
{
	cout<<"\n\n\n\t"<<"Wrong username"<<endl;
	getch();
	system("cls");
	goto A;
	
}

	scholarship s1;
	s1.putinfo1();
	
    s1.showdata();

}
