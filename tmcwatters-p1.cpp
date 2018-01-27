/****************************
Timothy McWatters
tmcwatters-p1.cpp
programming in C++ project 1

Write a program that takes 
three grades and finds their 
higest, lowest, and avg.
*****************************/

#include<iostream>
using namespace std;

int main ()
{
   int midterm = 0;
	int project = 0;
	int homework = 0;
	int highestGrade = 0;
	int lowestGrade = 0;
	int averageGrade = 0;
	
	// get all grades
	cout << "Please enter your midterm grade: ";
	cin >> midterm;
	
	cout << "Please enter your project average: ";
	cin >> project; 
	
	cout << "Please enter your homework average: ";
	cin >> homework;
		
	// calculates and prints the highest grade
	if ((midterm == project) && (project == homework)) {
	   cout << "All three of your grades are the same at " << midterm << " % " << endl;
	}
	else if ((midterm == project) && (midterm > homework)) {
	   cout << "Your midterm and project are tied as the highest grade at " 
		     << midterm << " % " << endl;
	}
	else if ((midterm == homework) && (midterm > project)) {
	   cout << "Your midterm and homework are tied as the highest grade at " 
		     << midterm << " % " << endl;
	}
	else if ((homework == project) && (homework > midterm)) {
	   cout << "Your homework and project are tied as the highest grade at " 
		     << homework << " % " << endl;
	}
	else if (midterm > project && midterm > homework) {
	   highestGrade = midterm;
		cout << "Your highest grade is midterm at " << highestGrade << "%" << endl;
	}
	else if (project > midterm && project > homework) {
	   highestGrade = project;
		cout << "Your highest grade is project at " << highestGrade << "%" << endl;
	}
	else {
	   highestGrade = homework;
		cout << "Your highest grade is homework at " << highestGrade << "%" << endl;
   }
	
	// calculates and prints the lowest grade
   if ((midterm == project) && (project == homework)) {
	   // do nothing, starts lowest grade if else conditions, but does not print
		// printing is already handled above in highest conditions
	}
	else if ((midterm == project) && (midterm < homework)) {
	   cout << "Your midterm and project are tied as the lowest grade at " 
		     << midterm << " % " << endl;
	}
	else if ((midterm == homework) && (midterm < project)) {
	   cout << "Your midterm and homework are tied as the lowest grade at " 
		     << midterm << " % " << endl;
	}
	else if ((homework == project) && (homework < midterm)) {
	   cout << "Your homework and project are tied as the highest grade at " 
		     << homework << " % " << endl;
	}
	else if (midterm < project && midterm < homework) {
	   lowestGrade = midterm;
		cout << "Your lowest grade is midterm at " << lowestGrade << "%" << endl;
	}
	else if (project < midterm && project < homework) {
	   lowestGrade = project;
		cout << "Your lowest grade is project at " << lowestGrade << "%" << endl;
	}
	else {
	   lowestGrade = homework;
		cout << "Your lowest grade is homework at " << lowestGrade << "%" << endl;
   }
	
	// calculates and prints the average grade
	averageGrade = ((midterm * .2) + (project * .4) + (homework * .15)) / .75;
	cout << "Your current average is " << averageGrade << " %" << endl;
	
	// announces if any of the grades are below 70%
	if (midterm < 70) {
	cout << "Your grade on the midterm is below a 70%." << endl;
	}
	if (project < 70) {
	cout << "Your grade on your project is below a 70%." << endl;
	}
	if (homework < 70) {
	cout << "Your grade on your homework is below a 70%." << endl;
	}
	
	// announce and print if all your grades are 70 or above
	if ((midterm >= 70) && (project >= 70) && (homework >= 70)) {
	cout << "All three of your grades are 70% or above!" << endl;
	}
	
	return 0;
}
	