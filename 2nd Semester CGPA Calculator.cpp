#include<iostream>
#include<iomanip>
#include<cstdlib>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

using namespace std;
void titleBar()
{
		system("cls");
		int ascii=178,choice;
		char ch=ascii;
		cout<<"\n";
		for(int i=1;i<=50;i++)
		{
			cout<<BOLDYELLOW<<ch;
		}
		cout<<RESET<<BOLDGREEN<<" CGPA CALCULATOR ";
		for(int i=1;i<=50;i++)
		{
			cout<<RESET<<BOLDYELLOW<<ch;
		}
}

//--------------------- Functions --------------------------------//

void DLD();
void OOP();
void DS();
void CAL();
void CPS();
void OOPLAB();
void DLDLAB();
void Calculate();
float points(float point);

//--------------------- Classes --------------------------------//

class subjects
{
	public:
		float assign,assign1,assign2,assign3,assign4;
		float quiz,quiz1,quiz2,quiz3,quiz4;
		float mid,final,project,presentation;
		float labtask,viva;
		float assignments,quizes,midterm,finalterm,projects,percentage,points;
};

//--------------------- Variables --------------------------------//

subjects dld,oop,ds,cal,cps,OOPLab,DLDLab;
float pointsum,gpa;

main()
{
	int exit = 0;
	
	do
	{
		system ("cls");
		titleBar();
		cout << "\n\n\t\t\t\t          Superior 2nd Semester CGPA Calculator                 \n";
		cout<<RESET<<BOLDCYAN;
		cout<<"\n\n";
		cout << "\t[1] Enter ( DLD ) DIGITAL LOGIC DESIGN Marks  \n\n";
		cout << "\t[2] Enter ( OOP ) OBJECT ORIENTED PROGRAMMING Marks  \n\n";
		cout << "\t[3] Enter ( DS  ) DISCRETE STRUCTURES Marks  \n\n";
		cout << "\t[4] Enter ( CAL ) CALCULUS & ANALYTICAL GEOMETRY Marks \n\n";
		cout << "\t[5] Enter ( CPS ) COMMUNICATION & PRESENTATION SKILLS  Marks  \n\n";
		cout << "\t[6] Enter ( OOP lab ) Marks \n\n";
		cout << "\t[7] Enter ( DLD Lab ) Marks \n\n";
		cout << "\t[8] Calculate CGPA  \n\n";
		cout << "\t[9] Exit \n\n";
		
		int choice;
		cout << "\t ENTER YOUR CHOICE ->  "<<RESET<<GREEN;
		cin >> choice ;
		
		exit = choice;
		
		switch (choice)
		{
			case 1: DLD() ; break;
			case 2: OOP() ; break;
			case 3: DS() ; break;
			case 4: CAL() ; break;
			case 5: CPS() ; break;
			case 6: OOPLAB() ; break;
			case 7: DLDLAB() ; break;
			case 8: Calculate() ; break;
			case 9: cout << "Exited."; break;
			default : cout << "Invalid input.";
		}
	
	}while(exit != 9);
	
	return 0;
}

void DLD()
{
	
	system ("cls");
	cout<<RESET<<BOLDYELLOW;
	cout << "______________________\n\n";
	cout << "                        DIGITAL LOGIC DESIGN                       \n";
	cout << "______________________\n\n";
	
	cout << "Enter obtained marks in Assignments  : \n\n";
	
	cout << "Assignment 1 : ";
	cin >> dld.assign1;
	cout << "Assignment 2 : ";
	cin >> dld.assign2;
	cout << "Assignment 3 : ";
	cin >> dld.assign3;
	cout << "Assignment 4 : ";
	cin >> dld.assign4;
	
	cout<<RESET<<RED;
	cout << "\n________\n\n";
	
	cout << "\nQuiz  \n";
	cout << "________\n\n";
	cout << "Quiz 1 : ";
	cin >> dld.quiz1;
	cout << "Quiz 2 : ";
	cin >> dld.quiz2;
	cout << "Quiz 3 : ";
	cin >> dld.quiz3;
	cout << "Quiz 4 : ";
	cin >> dld.quiz4;
	cout<<RESET<<BOLDCYAN;
	cout << "\n________\n\n";
	
	cout << "Mid : ";
	cin >> dld.mid;
	cout<<RESET<<BOLDGREEN;
	cout << "\n________\n\n";
	
	cout << "Final : ";
	cin >> dld.final;
	cout<<RESET<<BOLDWHITE;
	cout << "\n________\n\n";
		
	cout << "Presentation : ";
	cin >> dld.project;
	cout << "\n________\n\n";
}

void OOP()
{
	
	system ("cls");
	cout<<RESET<<BOLDYELLOW;
	cout << "______________________\n\n";
	cout << "                 OBJECT ORIENTED PROGRAMMING                    \n";
	cout << "______________________\n\n";
	
	cout << "Assignments  \n";
	cout << "________\n\n";
	cout << "Assignment 1 : ";
	cin >> oop.assign1;
	cout << "Assignment 2 : ";
	cin >> oop.assign2;
	cout << "Assignment 3 : ";
	cin >> oop.assign3;
	cout << "Assignment 4 : ";
	cin >> oop.assign4;
	cout << "\n________\n\n";
	cout<<RESET<<MAGENTA;
	cout << "\nQuiz  \n";
	cout << "________\n\n";
	cout << "Quiz 1 : ";
	cin >> oop.quiz1;
	cout << "Quiz 2 : ";
	cin >> oop.quiz2;
	cout << "Quiz 3 : ";
	cin >> oop.quiz3;
	cout << "Quiz 4 : ";
	cin >> oop.quiz4;
	cout << "\n________\n\n";
	cout<<RESET<<BOLDGREEN;
	cout << "Mid : ";
	cin >> oop.mid;
	cout << "\n________\n\n";
	cout<<RESET<<BOLDCYAN;
	cout << "Final : ";
	cin >> oop.final;
	cout << "\n________\n\n";
	cout<<RESET<<BOLDWHITE;
	cout << "Project : ";
	cin >> oop.project;
	cout << "\n________\n\n";
}

void DS()
{
	
	system ("cls");
	cout<<RESET<<BOLDCYAN;
	cout << "______________________\n\n";
	cout << "     DISCRETE STRUCTURES         \n";
	cout << "______________________\n\n";
	
	cout << "Assignments  \n";
	cout << "________\n\n";
	cout << "Assignment 1 : ";
	cin >> ds.assign1;
	cout << "Assignment 2 : ";
	cin >> ds.assign2;
	cout << "Assignment 3 : ";
	cin >> ds.assign3;
	cout << "Assignment 4 : ";
	cin >> ds.assign4;
	cout << "\n________\n\n";
	cout<<RESET<<GREEN;
	cout << "\nQuiz  \n";
	cout << "________\n\n";
	cout << "Quiz 1 : ";
	cin >> ds.quiz1;
	cout << "Quiz 2 : ";
	cin >> ds.quiz2;
	cout << "Quiz 3 : ";
	cin >> ds.quiz3;
	cout << "Quiz 4 : ";
	cin >> ds.quiz4;
	cout << "\n________\n\n";
	cout<<RESET<<RED;
	cout << "Mid : ";
	cin >> ds.mid;
	cout << "\n________\n\n";
	cout<<RESET<<BOLDMAGENTA;
	cout << "Final : ";
	cin >> ds.final;
	cout << "\n________\n\n";
	cout<<RESET<<BOLDRED;
	cout << "Project : ";
	cin >> ds.project;
	cout << "\n________\n\n";
}

void CAL()
{
	
	system ("cls");
	
	cout << "______________________\n\n";
	cout << "                       CALCULUS AND ANALYTICAL GEOMETRY                        \n";
	cout << "______________________\n\n";
	cout<<RESET<<BLUE;
	cout << "Assignments : ";
	cin >> cal.assign;
	cout << "\n________\n\n";
	cout<<RESET<<RED;
	cout << "Quizes : ";
	cin >> cal.quiz;
	cout << "\n________\n\n";
	cout<<RESET<<BOLDRED;
	cout << "Mid : ";
	cin >> cal.mid;
	cout << "\n________\n\n";
	cout<<RESET<<BOLDMAGENTA;
	cout << "Final : ";
	cin >> cal.final;
	cout << "\n________\n\n";
	cout<<RESET<<BOLDWHITE;
	cout << "Class Participation : ";
	cin >> cal.project;
	cout << "\n________\n\n";
}

void CPS()
{
	
	system ("cls");
	cout<<RESET<<BOLDWHITE;
	cout << "______________________\n\n";
	cout << "            COMMUNCATION AND PRESENTATION SKILLS              \n";
	cout << "______________________\n\n";
	
	cout << "Assignments  \n";
	cout << "________\n\n";
	cout << "Assignment 1 : ";
	cin >> cps.assign1;
	cout << "Assignment 2 : ";
	cin >> cps.assign2;
	cout << "Assignment 3 : ";
	cin >> cps.assign3;
	cout << "Assignment 4 : ";
	cin >> cps.assign4;
	cout << "\n________\n\n";
	
	cout << "\nQuiz  \n";
	cout << "________\n\n";
	cout << "Quiz 1 : ";
	cin >> cps.quiz1;
	cout << "Quiz 2 : ";
	cin >> cps.quiz2;
	cout << "Quiz 3 : ";
	cin >> cps.quiz3;
	cout << "Quiz 4 : ";
	cin >> cps.quiz4;
	cout << "\n________\n\n";
	
	cout << "Mid : ";
	cin >> cps.mid;
	cout << "\n________\n\n";
	
	cout << "Final : ";
	cin >> cps.final;
	cout << "\n________\n\n";
		
	cout << "Presentation : ";
	cin >> cps.presentation;
	cout << "\n________\n\n";
	
	cout<< "Project: ";
	cin>> cps.project;
	cout<<"\n________\n\n";
}

void OOPLAB()
{
	system ("cls");
	cout<<RESET;
	cout << "______________________\n\n";
	cout << "                              OOP Lab                          \n";
	cout << "______________________\n\n";
	
	cout << "Viva : ";
	cin >> OOPLab.viva;
	cout << "\n________\n\n";
	
	cout << "Lab Task : ";
	cin >> OOPLab.labtask;
	cout << "\n________\n\n";
		
	cout << "Project : ";
	cin >> OOPLab.project;
	cout << "\n________\n\n";
}

void DLDLAB()
{
	system ("cls");
	
	cout << "______________________\n\n";
	cout << "                             DLD Lab                          \n";
	cout << "______________________\n\n";
	
	cout << "Viva : ";
	cin >> DLDLab.viva;
	cout << "\n________\n\n";
	
	cout << "Lab Task : ";
	cin >> DLDLab.labtask;
	cout << "\n________\n\n";
		
	cout << "Project : ";
	cin >> DLDLab.project;
	cout << "\n________\n\n";
}

void Calculate()
{
	system ("cls");
	
	//--------------------- DLD --------------------------------//
	dld.assign = dld.assign1 + dld.assign2 + dld.assign3 + dld.assign4;
	dld.assignments = ( dld.assign / 40 ) * 10;
	
	dld.quiz   = dld.quiz1   + dld.quiz2   + dld.quiz3   + dld.quiz4 ;
	dld.quizes = ( dld.quiz / 40 ) * 10;
	
	dld.midterm = ( dld.mid / 20 ) * 20;
	dld.finalterm = ( dld.final / 40 ) * 40;
	dld.projects = ( dld.project / 20 ) * 20;
	
	dld.percentage = dld.assignments + dld.quizes + dld.midterm + dld.finalterm + dld.projects;
	
	//--------------------- OOP --------------------------------//
	
	oop.assign = oop.assign1 + oop.assign2 + oop.assign3 + oop.assign4;
	oop.assignments = ( oop.assign / 40 ) * 10;
	
	oop.quiz  = oop.quiz1   + oop.quiz2   + oop.quiz3   + oop.quiz4 ;
	oop.quizes = ( oop.quiz / 40 ) * 10;
	
	oop.midterm = ( oop.mid / 40 ) * 20;
	oop.finalterm = ( oop.final / 40 ) * 40;
	oop.projects = ( oop.project / 20 ) * 20;
	
	oop.percentage = oop.assignments + oop.quizes + oop.midterm + oop.finalterm + oop.projects;
	
	//--------------------- DS --------------------------------//
	
	ds.assign = ds.assign1 + ds.assign2 + ds.assign3 + ds.assign4;
	ds.assignments = ( ds.assign / 40 ) * 10;
	
	ds.quiz  = ds.quiz1   + ds.quiz2   + ds.quiz3   + ds.quiz4 ;
	ds.quizes = ( ds.quiz / 40 ) * 10;
	
	ds.midterm = ( ds.mid / 30 ) * 30;
	ds.finalterm = ( ds.final / 40 ) * 40;
	ds.projects = ( ds.project / 10 ) * 10;
	
	ds.percentage = ds.assignments + ds.quizes + ds.midterm + ds.finalterm + ds.projects;
	
	//--------------------- CAL --------------------------------//
		
	cal.assignments = ( cal.assign / 40 ) * 10;
	
	cal.quizes = ( cal.quiz / 20 ) * 20;
	
	cal.midterm = ( cal.mid / 20 ) * 20;
	cal.finalterm = ( cal.final / 40 ) * 40;
	cal.projects = ( cal.project / 10 ) * 10;
	
	cal.percentage = cal.assignments + cal.quizes + cal.midterm + cal.finalterm + cal.projects;
	
	//--------------------- CPS --------------------------------//
	
	cps.assign = cps.assign1 + cps.assign2 + cps.assign3 + cps.assign4;
	cps.assignments = ( cps.assign / 40 ) * 10;
	
	cps.quiz  = cps.quiz1   + cps.quiz2   + cps.quiz3   + cps.quiz4 ;
	cps.quizes = ( cps.quiz / 40 ) * 10;
	
	cps.midterm = ( cps.mid / 30 ) * 30;
	cps.finalterm = ( cps.final / 30 ) * 30;
	cps.projects = ( cps.project / 10 ) * 10;
	cps.presentation = (cps.presentation /10) * 10;
	
	cps.percentage = cps.assignments + cps.quizes + cps.midterm + cps.finalterm + cps.projects +cps.presentation;
	
	//--------------------- OOP Lab --------------------------------//
	
	OOPLab.percentage = (( OOPLab.viva + OOPLab.labtask + OOPLab.project)*100) / 100;
	
	//--------------------- DLD Lab --------------------------------//
	
	DLDLab.percentage = (( DLDLab.viva + DLDLab.labtask + DLDLab.project)*100) / 100;
	
	//--------------------- Calculating Grades --------------------------------//
	
	dld.points = points(dld.percentage);
	oop.points = points(oop.percentage);
	ds.points = points(ds.percentage);
	cal.points = points(cal.percentage);
	cps.points = points(cps.percentage);
	OOPLab.points = points(OOPLab.percentage);
	DLDLab.points = points(DLDLab.percentage);
	
	//--------------------- GPA --------------------------------//
	
	pointsum = dld.points * 3 +  oop.points * 3 + ds.points * 3 + cal.points * 3 + cps.points * 3 + OOPLab.points * 1 + DLDLab.points * 1;
	gpa = pointsum / 17;
	
	//--------------------- Display GPA --------------------------------//
	cout<<RESET<<BOLDWHITE;
	cout << "_______________________\n\n";
	cout << "                              CGPA                                    \n";
	cout << "_______________________\n\n";
	
	cout << "|    Subjects    |   Percentage   |    Credit Hour    |    Grade    |" << endl;
	cout << "_______________________\n\n";
	cout << setw(18) << "|    DLD         |       " << setw(9) << left << dld.percentage << "|         3         |      " << setw(7) << left << dld.points <<"|" <<endl;
	cout << setw(18) << "|    OOP         |       " << setw(9) << left << oop.percentage      << "|         3         |      " << setw(7) << left << oop.points      <<"|" <<endl;
	cout << setw(18) << "|    DS          |       " << setw(9) << left << ds.percentage     << "|         3         |      " << setw(7) << left << ds.points     <<"|" <<endl;
	cout << setw(18) << "|    CAL         |       " << setw(9) << left << cal.percentage   << "|         3         |      " << setw(7) << left << cal.points   <<"|" <<endl;
	cout << setw(18) << "|    CPS         |       " << setw(9) << left << cps.percentage     << "|         3         |      " << setw(7) << left << cps.points     <<"|" <<endl;
	cout << setw(18) << "|    OOP Lab     |       " << setw(9) << left << OOPLab.percentage   << "|         1         |      " << setw(7) << left << OOPLab.points   <<"|" <<endl;
	cout << setw(18) << "|    DLD Lab     |       " << setw(9) << left << DLDLab.percentage  << "|         1         |      " << setw(7) << left << DLDLab.points  <<"|" <<endl;
	cout << "_______________________\n\n";
	cout << "                                               CGPA    |      " << setw(7) << gpa << "|" <<endl;
	cout << "_______________________\n\n";
	
	string exit;
	cout << "Type any word to go back : " ;
	cin >> exit; 
}

//--------------------- Points Function --------------------------------//

float points(float percen)
{
	float point;
	
	if( percen >= 85)
	{
		point = 4.00;
	}
	else if( percen >= 80 && percen <=84)
	{
		point = 3.66;
	}
	else if( percen >= 75 && percen <=79)
	{
		point = 3.33;
	}
	else if( percen >= 71 && percen <=74)
	{
		point = 3.00;
	}
	else if( percen >= 68 && percen <=70)
	{
		point = 2.66;
	}
	else if( percen >= 64 && percen <=67)
	{
		point = 2.33;
	}
	else if( percen >= 61 && percen <=63)
	{
		point = 2.00;
	}
	else if( percen >= 58 && percen <=60)
	{
		point = 1.66;
	}
	else if( percen >= 54 && percen <=57)
	{
		point = 1.30;
	}
	else if( percen >= 50 && percen <=53)
	{
		point = 1.00;
	}
	else if( percen < 50)
	{
		point = 0.0;
	}
	
	return point;
}