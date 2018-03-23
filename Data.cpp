#include<iostream>
#include<string.h>
#include<string>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;

/******************************************************
*		class start from here in program:             *
******************************************************/

class Lovely
{
	
	
	public:
			
	void percentage()
	{
		system("color B5");
		system("cls");
		cout<<"\n\n\t\t\t01.STUDENT SCORING 98% OR ABOVE";
		cout<<"\n\n\t\t\t02.STUDENT SCORING 90% TO 97.99%";
		cout<<"\n\n\t\t\t03.STUDENT SCORING 80% TO 89.99%";
		cout<<"\n\n\t\t\t04.STUDENT SCORING 70% TO 79.99%";
		cout<<"\n\n\t\t\t05.STUDENT SCORING <70% ";
		cout<<"\n\n\t\t\t06.RETURN TO THE MAIN";
		cout<<"\n\n\t\t\tCHOOSE YOUR OPTION.   ";
		char per;
		per=getche();
		switch(per)
		{
			case '1':
			cout<<"\n\n\n\tOn the basis of your board result your scholarship is 55000/sem\n\n";
	 		break;
			case '2':
	  		cout<<"\n\n\n\tOn the basis of your board result your scholarship is 45000/sem\n\n";
	   	 	break;
			case '3':
	 		cout<<"\n\n\n\tOn the basis of your board result your scholarship is 35000/sem\n\n";
	 		break;
			case '4':
  	  		cout<<"\n\n\n\tOn the basis of your board result your scholarship is 25000/sem\n\n";
  	  		break;
  	  		case '5':
  	  		cout<<"\n\n\n\tSorry there is no scholarship for you should go for lpunest\n\n";
  	  		break;
  	  		case '6':
  	  		return ;
			default :cout<<"\a";
		}	
	}
		
		
};
//first class end here

class Student:public Lovely
{
	
	
	
	public:
		
        void student()
		{
			system("cls");
			int reg;			
	  		cout<<"\n\n\t\t\t Enter your LPUNEST registration number:  ";
	  		cin>>reg;					
		}
		
		
		
		void lpunest()
		{
			system("color A4");
			system("cls");
			char cat;
			cout<<"\n\n\n\t\t\t01.TOP 5% STUDENT IN LPUNEST";
			cout<<"\n\n\t\t\t02.TOP 10% STUDENT IN LPUNEST";
			cout<<"\n\n\t\t\t03.TOP 11-20% STUDENT IN LPUNEST";
			cout<<"\n\n\t\t\t04.TOP 21-35% STUDENT IN LPUNEST";
			cout<<"\n\n\t\t\t05.TOP 35-100% STUDENT IN LPUNEST";
			cout<<"\n\n\t\t\t06.RETURN TO MAIN";
			cout<<"\n\n\t\t\tENTER YOUR CATEGORY.";
			cat=getche();
			switch(cat)
	
			{
				case '1':
	  				cout<<"\n\n\n\tOn the basis of LPUNEST your scholarship is 55000/sem.";
	 				break;
				case '2':
	  				cout<<"\n\n\n\tOn the basis of LPUNEST your scholarship is 45000/sem.";
	   	 			break;
				case '3':
	 				cout<<"\n\n\n\tOn the basis of LPUNEST your scholarship is 35000/sem.";
	 				break;
				case '4':
  	  				cout<<"\n\n\n\tOn the basis of LPUNEST your scholarship is 25000/sem.";
  	  				break;
  	  			case '5':
  	  				cout<<"\n\n\n\tSorry there is no scholarship for you , try next time 'Best of luck'";
  	  				break;
				case '6':return ;
		  	
				default :cout<<"\a";
			}
    	
		}
		
};


class Jee:public Lovely
{
	
	
	public:
		
		
		void national()
		{
			system("color A3");
			system("cls");
			cout<<"\n\n\t\t\t01.STUDENT SCORING 150-180 MARKS IN JEE MAINS.";
			cout<<"\n\n\t\t\t02.STUDENT SCORING 130-149 MARKS IN JEE MAINS";
			cout<<"\n\n\t\t\t03.STUDENT SCORING 110-129 MARKS IN JEE MAINS";
			cout<<"\n\n\t\t\t04.STUDENT SCORING 90-109 MARKS IN JEE MAINS";
			cout<<"\n\n\t\t\t05.STUDENT SCORING 70-89 MARKS IN JEE MAINS";
			cout<<"\n\n\t\t\t06.STUDENT SCORING <70 MARKS IN JEE MAINS";
			cout<<"\n\n\t\t\t07.RETURN TO THE MAIN";
			cout<<"\n\n\t\t\tCHOOSE YOUR OPTION.   ";
			char per;
			per=getche();
			switch(per)
			{
				case '1':
					cout<<"\n\n\n\tOn the basis of your JEE MAINS result your scholarship is 55000/sem\n\n";
	 				break;
				case '2':
	  				cout<<"\n\n\n\tOn the basis of your JEE MAINS result your scholarship is 45000/sem\n\n";
	   	 			break;
				case '3':
	 				cout<<"\n\n\n\tOn the basis of your JEE MAINS result your scholarship is 35000/sem\n\n";
	 				break;
				case '4':
  	  				cout<<"\n\n\n\tOn the basis of your JEE MAINS result your scholarship is 25000/sem\n\n";
  	  				break;
  	  			case '5':
  	  				cout<<"\n\n\n\tOn the basis of your JEE MAINS result your scholarship is 20000/sem\n\n";
  	  				break;
  	  			case '6':
  	  				cout<<"\n\n\nSorry there is no scholarship for you  " ;
  	  			case '7':
  	  				return ;
				default :cout<<"\a";
			}		
		}
};
//second class end here


/***************************************************
*   FUNCTION STARTS HERE                       *
***************************************************/

void sport()
{
	system("color B1");
	system("cls");

	int cate;
	char cat;
	cout<<"\n\n\n\t\t\t01.CRICKET";
	cout<<"\n\n\t\t\t02.FOOTBALL";
	cout<<"\n\n\t\t\t03.HOCKEY";
	cout<<"\n\n\t\t\t04.BASEBALL";
	cout<<"\n\n\t\t\tENTER YOUR CATEGORY. ";
	cin>>cate;	
	cout<<"\n\n\n\t\t\t01.FIRST RANK";
	cout<<"\n\n\t\t\t02.SECOND RANK";
	cout<<"\n\n\t\t\t03.THIRD RANK";
	cout<<"\n\n\t\t\t04.RETURN TO MAIN";
	cout<<"\n\n\t\t\tChoose your position.";
	cat=getche();
	switch(cat)
	
	{
		case '1':
			cout<<"\n\n\n\tOn the basis of your sport result your scholarship is 55000/sem.";
			break;
		case '2':
			cout<<"\n\n\n\tOn the basis of your sport result your scholarship is 45000/sem.";
 			break;
		case '3':
			cout<<"\n\n\n\tOn the basis of your sport result your scholarship is 35000/sem.";
			break;
		case '4':return ;
		  	default :cout<<"\a";
	}
		
}

void culture()
{
	system("cls");	
	cout<<"\n\n\n\n\t\t\tNOT AVAILABLE";
	
}

void social()
{
	system("cls");
	cout<<"\n\n\n\n\t\t\tNOT AVAILABLE";
	
}



/***************************************************
*   MAIN FUNCTION START HERE                       *
***************************************************/

int main()
{
			system("color B4");
			cout<<"\n\n\t\tUNIVERSITY ";
			cout<<"SCHOLARSHIP ";
			cout<<"SCHEME";
			cout<<"\n\n\t\tMADE BY : ASHUTOSH PRATAP RAO";
			cout<<"\n\n\t\tUNIVERSITY NAME : LOVELY PROFESSIONAL UNIVERSITY";
			Student obj2;
			Jee obj3;
			int get;
			cout<<"\n\n\n\t\t\tHave you given lpunest exam ";
			cout<<"\n\n\n\t\t01.YES";
			cout<<"\n\n\n\t\t02.NO";
			cout<<"\n\n\n\t\t\tChoose your option ";
			cin>>get;
			if(get==1)
			{
				obj2.student();
			}
			else
			{
				cout<<"\n\n\n\t\tSorry you are not elligible for scholarship\n";
				return 0;
			}
			
			char ch;
			system("cls");
			do
			{
				
				cout<<"\n\n\n\t\t\t SCHOLARSHIP SCHEME (LPU SS)";
				cout<<"\n\n\n\t\t\t SCHOLARSHIP AVAILABLE ON THE BASIS OF:";
		
		
				cout<<"\n\n\t\t\t\t01. % OF MARKS IN ELIGIBILITY CRITERIA";
				cout<<"\n\n\t\t\t\t02. PERFORMANCE IN LPUNEST-2017";
	  			cout<<"\n\n\t\t\t\t03. PERFORMANCE IN NATIONAL LEVEL ENTRANCE EXAM";
	  			cout<<"\n\n\t\t\t\t04. PERFORMANCE IN SPORTS";
	  			cout<<"\n\n\t\t\t\t05. PERFORMANCE IN CULTURAL & CO-CURRICULAR ACTIVITIES";
	  			cout<<"\n\n\t\t\t\t06. PERFORMANCE IN SOCIAL SERVICE";
	  			cout<<"\n\n\t\t\t\t07. EXIT";
	  			
	  			cout<<"\n\n\t\t\t Please Select Your Option (1-7):  ";
	  	
	  	
	  			ch=getche();
	  			switch(ch)
	  			{
					case '1':
				  		obj2.percentage();
			   	 		break;
		  			case '2':
			  	  		obj2.lpunest();
			    	 	break;
		  			case '3':
			  	  		obj3.national();
				 		break;
		  			case '4':
			  	  		sport();
			  	  		break;
		  			case '5':
			  	  		culture();
			  			break;
		  			case '6':
			  	  		social();
			  	  		break;
		  			case '7':exit(0);
		  	
		  			default :cout<<"\a";
				}
    
			}while(ch!='7');
	return 0;
}
