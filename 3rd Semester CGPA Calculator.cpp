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

void COAL();
void DSA();
void STATS();
void ALGEBRA();
void DM();
void DSALAB();
void COALLAB();
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

subjects coal,dsa,stats,algebra,dm,dsalab,coallab;
float pointsum,gpa;

main()
{
	int exit = 0;
	
	do
	{
		system ("cls");
		titleBar();
		cout << "\n\n\t\t\t\t          Superior 3RD Semester CGPA Calculator                 \n";
		cout<<RESET<<BOLDCYAN;
		cout<<"\n\n";
		cout << "\t[1] Enter ( COAL ) COMPUTER ORGANIZATION & ASSEMBLY LANGUAGE Marks  \n\n";
		cout << "\t[2] Enter ( DSA ) DATA STRUCTURES & ALGORITHMS Marks  \n\n";
		cout << "\t[3] Enter ( STATS  ) PROBABILITY & STATISTICS Marks  \n\n";
		cout << "\t[4] Enter ( ALGEBRA ) LINEAR ALGEBRA Marks \n\n";
		cout << "\t[5] Enter ( DM ) DIGTIAL MARKETING  Marks  \n\n";
		cout << "\t[6] Enter ( DSA lab ) Marks \n\n";
		cout << "\t[7] Enter ( COAL Lab ) Marks \n\n";
		cout << "\t[8] Calculate CGPA  \n\n";
		cout << "\t[9] Exit \n\n";
		
		int choice;
		cout << "\t ENTER YOUR CHOICE ->  "<<RESET<<GREEN;
		cin >> choice ;
		
		exit = choice;
		
		switch (choice)
		{
			case 1: COAL() ; break;
			case 2: DSA() ; break;
			case 3: STATS() ; break;
			case 4: ALGEBRA() ; break;
			case 5: DM() ; break;
			case 6: DSALAB() ; break;
			case 7: COALLAB() ; break;
			case 8: Calculate() ; break;
			case 9: cout << "Exited."; break;
			default : cout << "Invalid input.";
		}
	
	}while(exit != 9);
	
	return 0;
}

void COAL()
{
	
	system ("cls");
	cout<<RESET<<BOLDYELLOW;
	cout << "______________________\n\n";
	cout << "                        COMPUTER ORGANIZATION & ASSEMBLY LANGUAGE                       \n";
	cout << "______________________\n\n";
	
	cout << "Enter obtained marks in Assignments  : \n\n";
	
	cout << "Assignment 1 : ";
	cin >> coal.assign1;
	cout << "Assignment 2 : ";
	cin >> coal.assign2;
	cout << "Assignment 3 : ";
	cin >> coal.assign3;
	cout << "Assignment 4 : ";
	cin >> coal.assign4;
	
	cout<<RESET<<RED;
	cout << "\n________\n\n";
	
	cout << "\nQuiz  \n";
	cout << "________\n\n";
	cout << "Quiz 1 : ";
	cin >> coal.quiz1;
	cout << "Quiz 2 : ";
	cin >> coal.quiz2;
	cout << "Quiz 3 : ";
	cin >> coal.quiz3;
	cout << "Quiz 4 : ";
	cin >> coal.quiz4;
	cout<<RESET<<BOLDCYAN;
	cout << "\n________\n\n";
	
	cout << "Mid : ";
	cin >> coal.mid;
	cout<<RESET<<BOLDGREEN;
	cout << "\n________\n\n";
	
	cout << "Final : ";
	cin >> coal.final;
	cout<<RESET<<BOLDWHITE;
	cout << "\n________\n\n";
		
	cout << "Presentation : ";
	cin >> coal.project;
	cout << "\n________\n\n";
}

void DSA()
{
	
	system ("cls");
	cout<<RESET<<BOLDYELLOW;
	cout << "______________________\n\n";
	cout << "                 OBJECT ORIENTED PROGRAMMING                    \n";
	cout << "______________________\n\n";
	
	cout << "Assignments  \n";
	cout << "________\n\n";
	cout << "Assignment 1 : ";
	cin >> dsa.assign1;
	cout << "Assignment 2 : ";
	cin >> dsa.assign2;
	cout << "Assignment 3 : ";
	cin >> dsa.assign3;
	cout << "Assignment 4 : ";
	cin >> dsa.assign4;
	cout << "\n________\n\n";
	cout<<RESET<<MAGENTA;
	cout << "\nQuiz  \n";
	cout << "________\n\n";
	cout << "Quiz 1 : ";
	cin >> dsa.quiz1;
	cout << "Quiz 2 : ";
	cin >> dsa.quiz2;
	cout << "Quiz 3 : ";
	cin >> dsa.quiz3;
	cout << "Quiz 4 : ";
	cin >> dsa.quiz4;
	cout << "\n________\n\n";
	cout<<RESET<<BOLDGREEN;
	cout << "Mid : ";
	cin >> dsa.mid;
	cout << "\n________\n\n";
	cout<<RESET<<BOLDCYAN;
	cout << "Final : ";
	cin >> dsa.final;
	cout << "\n________\n\n";
	cout<<RESET<<BOLDWHITE;
	cout << "Project : ";
	cin >> dsa.project;
	cout << "\n________\n\n";
}

void STATS()
{
	
	system ("cls");
	cout<<RESET<<BOLDCYAN;
	cout << "______________________\n\n";
	cout << "     PROBABILITY & STATISTICS         \n";
	cout << "______________________\n\n";
	
	cout << "Assignments  \n";
	cout << "________\n\n";
	cout << "Assignment 1 : ";
	cin >> stats.assign1;
	cout << "Assignment 2 : ";
	cin >> stats.assign2;
	cout << "Assignment 3 : ";
	cin >> stats.assign3;
	cout << "Assignment 4 : ";
	cin >> stats.assign4;
	cout << "\n________\n\n";
	cout<<RESET<<GREEN;
	cout << "\nQuiz  \n";
	cout << "________\n\n";
	cout << "Quiz 1 : ";
	cin >> stats.quiz1;
	cout << "Quiz 2 : ";
	cin >> stats.quiz2;
	cout << "Quiz 3 : ";
	cin >> stats.quiz3;
	cout << "Quiz 4 : ";
	cin >> stats.quiz4;
	cout << "\n________\n\n";
	cout<<RESET<<RED;
	cout << "Mid : ";
	cin >> stats.mid;
	cout << "\n________\n\n";
	cout<<RESET<<BOLDMAGENTA;
	cout << "Final : ";
	cin >> stats.final;
}

void ALGEBRA()
{
	
	system ("cls");
	
	cout << "______________________\n\n";
	cout << "                       LINEAR ALGEBRA                       \n";
	cout << "______________________\n\n";
	cout<<RESET<<BLUE;
	cout << "Assignments : ";
	cin >> algebra.assign;
	cout << "\n________\n\n";
	cout<<RESET<<RED;
	cout << "Quizes : ";
	cin >> algebra.quiz;
	cout << "\n________\n\n";
	cout<<RESET<<BOLDRED;
	cout << "Mid : ";
	cin >> algebra.mid;
	cout << "\n________\n\n";
	cout<<RESET<<BOLDMAGENTA;
	cout << "Final : ";
	cin >> algebra.final;
	cout << "\n________\n\n";
	cout<<RESET<<BOLDWHITE;
	cout << "Class Participation : ";
	cin >> algebra.project;
	cout << "\n________\n\n";
}

void DM()
{
	
	system ("cls");
	cout<<RESET<<BOLDWHITE;
	cout << "______________________\n\n";
	cout << "            DIGITAL MARKETING              \n";
	cout << "______________________\n\n";
	
	cout << "Assignments  \n";
	cout << "________\n\n";
	cout << "Assignment 1 : ";
	cin >> dm.assign1;
	cout << "Assignment 2 : ";
	cin >> dm.assign2;
	cout << "Assignment 3 : ";
	cin >> dm.assign3;
	cout << "Assignment 4 : ";
	cin >> dm.assign4;
	cout << "\n________\n\n";
	
	cout << "\nQuiz  \n";
	cout << "________\n\n";
	cout << "Quiz 1 : ";
	cin >> dm.quiz1;
	cout << "Quiz 2 : ";
	cin >> dm.quiz2;
	cout << "Quiz 3 : ";
	cin >> dm.quiz3;
	cout << "Quiz 4 : ";
	cin >> dm.quiz4;
	cout << "\n________\n\n";
	
	cout << "Mid : ";
	cin >> dm.mid;
	cout << "\n________\n\n";
	
	cout << "Final : ";
	cin >> dm.final;
	cout << "\n________\n\n";
		
	cout << "Presentation : ";
	cin >> dm.presentation;
	cout << "\n________\n\n";
	
	cout<< "Participation: ";
	cin>> dm.project;
	cout<<"\n________\n\n";
}

void DSALAB()
{
	system ("cls");
	cout<<RESET;
	cout << "______________________\n\n";
	cout << "                              DSA Lab                          \n";
	cout << "______________________\n\n";
	
	cout << "Viva : ";
	cin >> dsalab.viva;
	cout << "\n________\n\n";
	
	cout << "Lab Task : ";
	cin >> dsalab.labtask;
	cout << "\n________\n\n";
		
	cout << "Project : ";
	cin >> dsalab.project;
	cout << "\n________\n\n";
	
	cout<< "Final: ";
	cin>> dsalab.final;
}

void COALLAB()
{
	system ("cls");
	
	cout << "______________________\n\n";
	cout << "                             COAL Lab                          \n";
	cout << "______________________\n\n";
	
	cout << "Viva : ";
	cin >> coallab.viva;
	cout << "\n________\n\n";
	
	cout << "Lab Task : ";
	cin >> coallab.labtask;
	cout << "\n________\n\n";
		
	cout << "Project : ";
	cin >> coallab.project;
	cout << "\n________\n\n";
}

void Calculate()
{
	system ("cls");
	
	//--------------------- coal --------------------------------//
	coal.assign = coal.assign1 + coal.assign2 + coal.assign3 + coal.assign4;
	coal.assignments = ( coal.assign / 40 ) * 10;
	
	coal.quiz   = coal.quiz1   + coal.quiz2   + coal.quiz3   + coal.quiz4 ;
	coal.quizes = ( coal.quiz / 40 ) * 10;
	
	coal.midterm = ( coal.mid / 20 ) * 20;
	coal.finalterm = ( coal.final / 40 ) * 40;
	coal.projects = ( coal.project / 20 ) * 20;
	
	coal.percentage = coal.assignments + coal.quizes + coal.midterm + coal.finalterm + coal.projects;
	
	//--------------------- DSA --------------------------------//
	
	dsa.assign = dsa.assign1 + dsa.assign2 + dsa.assign3 + dsa.assign4;
	dsa.assignments = ( dsa.assign / 40 ) * 10;
	
	dsa.quiz  = dsa.quiz1   + dsa.quiz2   + dsa.quiz3   + dsa.quiz4 ;
	dsa.quizes = ( dsa.quiz / 40 ) * 10;
	
	dsa.midterm = ( dsa.mid / 30 ) * 30;
	dsa.finalterm = ( dsa.final / 40 ) * 40;
	dsa.projects = ( dsa.project / 10 ) * 10;
	
	dsa.percentage = dsa.assignments + dsa.quizes + dsa.midterm + dsa.finalterm + dsa.projects;
	
	//--------------------- stats --------------------------------//
	
	stats.assign = stats.assign1 + stats.assign2 + stats.assign3 + stats.assign4;
	stats.assignments = ( stats.assign / 40 ) * 20;
	
	stats.quiz  = stats.quiz1   + stats.quiz2   + stats.quiz3   + stats.quiz4 ;
	stats.quizes = ( stats.quiz / 30 ) * 20;
	
	stats.midterm = ( stats.mid / 20 ) * 20;
	stats.finalterm = ( stats.final / 40 ) * 40;
	
	stats.percentage = stats.assignments + stats.quizes + stats.midterm + stats.finalterm + stats.projects;
	
	//--------------------- algebra --------------------------------//
		
	algebra.assignments = ( algebra.assign / 40 ) * 15;
	
	algebra.quizes = ( algebra.quiz / 40 ) * 15;
	
	algebra.midterm = ( algebra.mid / 20 ) * 20;
	algebra.finalterm = ( algebra.final / 40 ) * 40;
	algebra.projects = ( algebra.project / 10 ) * 10;
	
	algebra.percentage = algebra.assignments + algebra.quizes + algebra.midterm + algebra.finalterm + algebra.projects;
	
	//--------------------- dm --------------------------------//
	
	dm.assign = dm.assign1 + dm.assign2 + dm.assign3 + dm.assign4;
	dm.assignments = ( dm.assign / 40 ) * 10;
	
	dm.quiz  = dm.quiz1   + dm.quiz2   + dm.quiz3   + dm.quiz4 ;
	dm.quizes = ( dm.quiz / 30 ) * 10;
	
	dm.midterm = ( dm.mid / 20 ) * 20;
	dm.finalterm = ( dm.final / 40 ) * 40;
	dm.projects = ( dm.project / 10 ) * 10;
	dm.presentation = (dm.presentation /10) * 10;
	
	dm.percentage = dm.assignments + dm.quizes + dm.midterm + dm.finalterm + dm.projects +dm.presentation;
	
	//--------------------- dsa Lab --------------------------------//
	
	dsalab.percentage = (( dsalab.viva + dsalab.labtask + dsalab.project + dsalab.final)*100) / 100;
	
	//--------------------- coal Lab --------------------------------//
	
	coallab.percentage = (( coallab.viva + coallab.labtask + coallab.project)*100) / 100;
	
	//--------------------- Calculating Grades --------------------------------//
	
	coal.points = points(coal.percentage);
	dsa.points = points(dsa.percentage);
	stats.points = points(stats.percentage);
	algebra.points = points(algebra.percentage);
	dm.points = points(dm.percentage);
	dsalab.points = points(dsalab.percentage);
	coallab.points = points(coallab.percentage);
	
	//--------------------- GPA --------------------------------//
	
	pointsum = coal.points * 3 +  dsa.points * 3 + stats.points * 3 + algebra.points * 3 + dm.points * 3 + dsalab.points * 1 + coallab.points * 1;
	gpa = pointsum / 17;
	
	//--------------------- Display GPA --------------------------------//
	cout<<RESET<<BOLDWHITE;
	cout << "_______________________\n\n";
	cout << "                              CGPA                                    \n";
	cout << "_______________________\n\n";
	
	cout << "|    Subjects    |   Percentage   |    Credit Hour    |    Grade    |" << endl;
	cout << "_______________________\n\n";
	cout << setw(18) << "|    COAL         |       " << setw(9) << left << coal.percentage << "|         3         |      " << setw(7) << left << coal.points <<"|" <<endl;
	cout << setw(18) << "|    DSA          |       " << setw(9) << left << dsa.percentage      << "|         3         |      " << setw(7) << left << dsa.points      <<"|" <<endl;
	cout << setw(18) << "|    STATS        |       " << setw(9) << left << stats.percentage     << "|         3         |      " << setw(7) << left << stats.points     <<"|" <<endl;
	cout << setw(18) << "|    ALGEBRA      |       " << setw(9) << left << algebra.percentage   << "|         3         |      " << setw(7) << left << algebra.points   <<"|" <<endl;
	cout << setw(18) << "|    DM           |       " << setw(9) << left << dm.percentage     << "|         3         |      " << setw(7) << left << dm.points     <<"|" <<endl;
	cout << setw(18) << "|    DSA Lab      |       " << setw(9) << left << dsalab.percentage   << "|         1         |      " << setw(7) << left << dsalab.points   <<"|" <<endl;
	cout << setw(18) << "|    COAL Lab     |       " << setw(9) << left << coallab.percentage  << "|         1         |      " << setw(7) << left << coallab.points  <<"|" <<endl;
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