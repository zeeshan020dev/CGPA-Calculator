#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//--------------------- Functions --------------------------------//

void Physics();
void PF();
void ICT();
void Logic();
void ECC();
void PFlab();
void ICTlab();
void Calculate();
float points(float point);

//--------------------- Classes --------------------------------//

class subjects
{
	public:
		float assign,assign1,assign2,assign3,assign4;
		float quiz,quiz1,quiz2,quiz3,quiz4;
		float mid,final,project;
		float labtask,viva;
		float assignments,quizes,midterm,finalterm,projects,percentage,points;
};

//--------------------- Variables --------------------------------//

subjects physics,pf,ict,logic,ecc,PFLab,ICTLab;
float pointsum,gpa;

//--------------------- Main Function --------------------------------//

int main()
{
	int exit = 0;
	
	do
	{
		system ("cls");
		
		cout << "______________________\n\n";
		cout << "           Superior Semester 1 CGPA Calculator                 \n";
		cout << "______________________\n\n";
		
		cout << "1. Enter ( Physics ) Applied Physics Marks . \n";
		cout << "2. Enter ( PF      ) Programming fundamentals Marks . \n";
		cout << "3. Enter ( ICT     ) Intro. to information & communication Technology Marks . \n";
		cout << "4. Enter ( Logic   ) Intro. to logic Marks . \n";
		cout << "5. Enter ( English ) English composition and comprehension  Marks . \n";
		cout << "6. Enter ( PF lab  ) Marks. \n";
		cout << "7. Enter ( ICT Lab ) Marks. \n";
		cout << "8. Calculate CGPA . \n";
		cout << "9. Exit. \n";
		
		int choice;
		cout << "Enter your Choice :  ";
		cin >> choice ;
		
		exit = choice;
		
		switch (choice)
		{
			case 1: Physics() ; break;
			case 2: PF() ; break;
			case 3: ICT() ; break;
			case 4: Logic() ; break;
			case 5: ECC() ; break;
			case 6: PFlab() ; break;
			case 7: ICTlab() ; break;
			case 8: Calculate() ; break;
			case 9: cout << "Exited."; break;
			default : cout << "Invalid input.";
		}
	
	}while(exit != 9);
	
	return 0;
}

//--------------------- Physics Function --------------------------------//

void Physics()
{
	
	system ("cls");
	
	cout << "______________________\n\n";
	cout << "                        Applied Physics                       \n";
	cout << "______________________\n\n";
	
	cout << "Assignments  : ";
	cin >> physics.assign;
	
	cout << "\n________\n\n";
	
	cout << "\nQuiz  \n";
	cout << "________\n\n";
	cout << "Quiz 1 : ";
	cin >> physics.quiz1;
	cout << "Quiz 2 : ";
	cin >> physics.quiz2;
	cout << "Quiz 3 : ";
	cin >> physics.quiz3;
	cout << "Quiz 4 : ";
	cin >> physics.quiz4;
	cout << "\n________\n\n";
	
	cout << "Mid : ";
	cin >> physics.mid;
	cout << "\n________\n\n";
	
	cout << "Final : ";
	cin >> physics.final;
	cout << "\n________\n\n";
		
	cout << "Presentation : ";
	cin >> physics.project;
	cout << "\n________\n\n";
}

//--------------------- PF Functions --------------------------------//

void PF()
{
	
	system ("cls");
	
	cout << "______________________\n\n";
	cout << "                 Programming Fundamentals                     \n";
	cout << "______________________\n\n";
	
	cout << "Assignments  \n";
	cout << "________\n\n";
	cout << "Assignment 1 : ";
	cin >> pf.assign1;
	cout << "Assignment 2 : ";
	cin >> pf.assign2;
	cout << "Assignment 3 : ";
	cin >> pf.assign3;
	cout << "Assignment 4 : ";
	cin >> pf.assign4;
	cout << "\n________\n\n";
	
	cout << "\nQuiz  \n";
	cout << "________\n\n";
	cout << "Quiz 1 : ";
	cin >> pf.quiz1;
	cout << "Quiz 2 : ";
	cin >> pf.quiz2;
	cout << "Quiz 3 : ";
	cin >> pf.quiz3;
	cout << "Quiz 4 : ";
	cin >> pf.quiz4;
	cout << "\n________\n\n";
	
	cout << "Mid : ";
	cin >> pf.mid;
	cout << "\n________\n\n";
	
	cout << "Final : ";
	cin >> pf.final;
	cout << "\n________\n\n";
		
	cout << "Project : ";
	cin >> pf.project;
	cout << "\n________\n\n";
}

//--------------------- ICT Function --------------------------------//

void ICT()
{
	
	system ("cls");
	
	cout << "______________________\n\n";
	cout << "     Intro. to information & communication Technology         \n";
	cout << "______________________\n\n";
	
	cout << "Assignments  \n";
	cout << "________\n\n";
	cout << "Assignment 1 : ";
	cin >> ict.assign1;
	cout << "Assignment 2 : ";
	cin >> ict.assign2;
	cout << "Assignment 3 : ";
	cin >> ict.assign3;
	cout << "Assignment 4 : ";
	cin >> ict.assign4;
	cout << "\n________\n\n";
	
	cout << "\nQuiz  \n";
	cout << "________\n\n";
	cout << "Quiz 1 : ";
	cin >> ict.quiz1;
	cout << "Quiz 2 : ";
	cin >> ict.quiz2;
	cout << "Quiz 3 : ";
	cin >> ict.quiz3;
	cout << "Quiz 4 : ";
	cin >> ict.quiz4;
	cout << "\n________\n\n";
	
	cout << "Mid : ";
	cin >> ict.mid;
	cout << "\n________\n\n";
	
	cout << "Final : ";
	cin >> ict.final;
	cout << "\n________\n\n";
		
	cout << "Presentation : ";
	cin >> ict.project;
	cout << "\n________\n\n";
}

//--------------------- Logic Function --------------------------------//

void Logic()
{
	
	system ("cls");
	
	cout << "______________________\n\n";
	cout << "                       Intro. to Logic                        \n";
	cout << "______________________\n\n";
	
	cout << "Assignments : ";
	cin >> logic.assign;
	cout << "\n________\n\n";
	
	cout << "Quizes : ";
	cin >> logic.quiz;
	cout << "\n________\n\n";
	
	cout << "Mid : ";
	cin >> logic.mid;
	cout << "\n________\n\n";
	
	cout << "Final : ";
	cin >> logic.final;
	cout << "\n________\n\n";
		
	cout << "Project : ";
	cin >> logic.project;
	cout << "\n________\n\n";
}

//--------------------- ECC Function --------------------------------//

void ECC()
{
	
	system ("cls");
	
	cout << "______________________\n\n";
	cout << "            English Composition And Comprehension              \n";
	cout << "______________________\n\n";
	
	cout << "Assignments  \n";
	cout << "________\n\n";
	cout << "Assignment 1 : ";
	cin >> ecc.assign1;
	cout << "Assignment 2 : ";
	cin >> ecc.assign2;
	cout << "Assignment 3 : ";
	cin >> ecc.assign3;
	cout << "Assignment 4 : ";
	cin >> ecc.assign4;
	cout << "\n________\n\n";
	
	cout << "\nQuiz  \n";
	cout << "________\n\n";
	cout << "Quiz 1 : ";
	cin >> ecc.quiz1;
	cout << "Quiz 2 : ";
	cin >> ecc.quiz2;
	cout << "Quiz 3 : ";
	cin >> ecc.quiz3;
	cout << "Quiz 4 : ";
	cin >> ecc.quiz4;
	cout << "\n________\n\n";
	
	cout << "Mid : ";
	cin >> ecc.mid;
	cout << "\n________\n\n";
	
	cout << "Final : ";
	cin >> ecc.final;
	cout << "\n________\n\n";
		
	cout << "Presentation : ";
	cin >> ecc.project;
	cout << "\n________\n\n";
}

//--------------------- PF Lab Function --------------------------------//

void PFlab()
{
	system ("cls");
	
	cout << "______________________\n\n";
	cout << "                              PF Lab                          \n";
	cout << "______________________\n\n";
	
	cout << "Viva : ";
	cin >> PFLab.viva;
	cout << "\n________\n\n";
	
	cout << "Lab Task : ";
	cin >> PFLab.labtask;
	cout << "\n________\n\n";
		
	cout << "Project : ";
	cin >> PFLab.project;
	cout << "\n________\n\n";
}

//--------------------- ICT Lab Function --------------------------------//

void ICTlab()
{
	system ("cls");
	
	cout << "______________________\n\n";
	cout << "                             ICT Lab                          \n";
	cout << "______________________\n\n";
	
	cout << "Viva : ";
	cin >> ICTLab.viva;
	cout << "\n________\n\n";
	
	cout << "Lab Task : ";
	cin >> ICTLab.labtask;
	cout << "\n________\n\n";
		
	cout << "Project : ";
	cin >> ICTLab.project;
	cout << "\n________\n\n";
}

//--------------------- Calculate Function --------------------------------//

void Calculate()
{
	system ("cls");
	
	//--------------------- Applied Physics --------------------------------//
	
	physics.assignments = ( physics.assign / 40 ) * 10;
	
	physics.quiz   = physics.quiz1   + physics.quiz2   + physics.quiz3   + physics.quiz4 ;
	physics.quizes = ( physics.quiz / 40 ) * 10;
	
	physics.midterm = ( physics.mid / 30 ) * 30;
	physics.finalterm = ( physics.final / 40 ) * 40;
	physics.projects = ( physics.project / 10 ) * 10;
	
	physics.percentage = physics.assignments + physics.quizes + physics.midterm + physics.finalterm + physics.projects;
	
	//--------------------- Programming Fundamentals --------------------------------//
	
	pf.assign = pf.assign1 + pf.assign2 + pf.assign3 + pf.assign4;
	pf.assignments = ( pf.assign / 40 ) * 10;
	
	pf.quiz  = pf.quiz1   + pf.quiz2   + pf.quiz3   + pf.quiz4 ;
	pf.quizes = ( pf.quiz / 40 ) * 10;
	
	pf.midterm = ( pf.mid / 30 ) * 30;
	pf.finalterm = ( pf.final / 50 ) * 40;
	pf.projects = ( pf.project / 10 ) * 10;
	
	pf.percentage = pf.assignments + pf.quizes + pf.midterm + pf.finalterm + pf.projects;
	
	//--------------------- Into. to comm. and Technologies --------------------------------//
	
	ict.assign = ict.assign1 + ict.assign2 + ict.assign3 + ict.assign4;
	ict.assignments = ( ict.assign / 40 ) * 10;
	
	ict.quiz  = ict.quiz1   + ict.quiz2   + ict.quiz3   + ict.quiz4 ;
	ict.quizes = ( ict.quiz / 40 ) * 10;
	
	ict.midterm = ( ict.mid / 30 ) * 30;
	ict.finalterm = ( ict.final / 40 ) * 40;
	ict.projects = ( ict.project / 10 ) * 10;
	
	ict.percentage = ict.assignments + ict.quizes + ict.midterm + ict.finalterm + ict.projects;
	
	//--------------------- Intro. to Logic --------------------------------//
		
	logic.assignments = ( logic.assign / 40 ) * 10;
	
	logic.quizes = ( logic.quiz / 40 ) * 10;
	
	logic.midterm = ( logic.mid / 30 ) * 30;
	logic.finalterm = ( logic.final / 40 ) * 40;
	logic.projects = ( logic.project / 10 ) * 10;
	
	logic.percentage = logic.assignments + logic.quizes + logic.midterm + logic.finalterm + logic.projects;
	
	//--------------------- English Composition and comprehension --------------------------------//
	
	ecc.assign = ecc.assign1 + ecc.assign2 + ecc.assign3 + ecc.assign4;
	ecc.assignments = ( ecc.assign / 40 ) * 10;
	
	ecc.quiz  = ecc.quiz1   + ecc.quiz2   + ecc.quiz3   + ecc.quiz4 ;
	ecc.quizes = ( ecc.quiz / 40 ) * 10;
	
	ecc.midterm = ( ecc.mid / 30 ) * 30;
	ecc.finalterm = ( ecc.final / 40 ) * 40;
	ecc.projects = ( ecc.project / 10 ) * 10;
	
	ecc.percentage = ecc.assignments + ecc.quizes + ecc.midterm + ecc.finalterm + ecc.projects;
	
	//--------------------- PF Lab --------------------------------//
	
	PFLab.percentage = (( PFLab.viva + PFLab.labtask + PFLab.project)*100) / 100;
	
	//--------------------- ICT Lab --------------------------------//
	
	ICTLab.percentage = (( ICTLab.viva + ICTLab.labtask + ICTLab.project)*100) / 100;
	
	//--------------------- Calculating Grades --------------------------------//
	
	physics.points = points(physics.percentage);
	pf.points = points(pf.percentage);
	ict.points = points(ict.percentage);
	logic.points = points(logic.percentage);
	ecc.points = points(ecc.percentage);
	PFLab.points = points(PFLab.percentage);
	ICTLab.points = points(ICTLab.percentage);
	
	//--------------------- GPA --------------------------------//
	
	pointsum = physics.points * 3 +  pf.points * 3 + ict.points * 3 + logic.points * 3 + ecc.points * 3 + PFLab.points * 1 + ICTLab.points * 1;
	gpa = pointsum / 17;
	
	//--------------------- Display GPA --------------------------------//
	
	cout << "_______________________\n\n";
	cout << "                              CGPA                                    \n";
	cout << "_______________________\n\n";
	
	cout << "|    Subjects    |   Percentage   |    Credit Hour    |    Grade    |" << endl;
	cout << "_______________________\n\n";
	cout << setw(18) << "|    Physics     |       " << setw(9) << left << physics.percentage << "|         3         |      " << setw(7) << left << physics.points <<"|" <<endl;
	cout << setw(18) << "|    PF          |       " << setw(9) << left << pf.percentage      << "|         3         |      " << setw(7) << left << pf.points      <<"|" <<endl;
	cout << setw(18) << "|    ICT         |       " << setw(9) << left << ict.percentage     << "|         3         |      " << setw(7) << left << ict.points     <<"|" <<endl;
	cout << setw(18) << "|    Logic       |       " << setw(9) << left << logic.percentage   << "|         3         |      " << setw(7) << left << logic.points   <<"|" <<endl;
	cout << setw(18) << "|    ECC         |       " << setw(9) << left << ecc.percentage     << "|         3         |      " << setw(7) << left << ecc.points     <<"|" <<endl;
	cout << setw(18) << "|    PF Lab      |       " << setw(9) << left << PFLab.percentage   << "|         1         |      " << setw(7) << left << PFLab.points   <<"|" <<endl;
	cout << setw(18) << "|    ICT Lab     |       " << setw(9) << left << ICTLab.percentage  << "|         1         |      " << setw(7) << left << ICTLab.points  <<"|" <<endl;
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
