/*
GPA Calculator
By: Erik Rodabaugh
Website: www.ErikRodabaugh.com
Copyright (C) 2016 Erik Rodabaugh

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

// Setup.
#include <iostream>
#include <unistd.h>
using namespace std;

// Variables.
int courses, a , current = 0;
float input;
double sum, gpa;


int main()
{
  // Display the title.
  cout << "GPA Calculator" << endl << "By: Erik Rodabaugh" << endl << "Website: www.ErikRodabaugh.com" << endl << endl;

  // Ask the user how many courses they have?
  cout << "Number of courses: ";
  cin >> courses;

  // Create an array to fill with grades.
  double grades[courses];

  // Ask the user for their grades, and put them in an array.
  while (current < courses){
    cout << "Grade in course " << current+1 << ": ";
    cin >> input;
    current++;
    grades[current]=input;
    }

  // Add the grades of the user together.
  for (a=1; a < courses+1; a++){
    sum = sum + grades[a];
  }

  // Divide the sum of the grades, by the number of courses. The result will be the final GPA. 
  gpa = sum / courses;

  // Tell the user their letter grade.
  cout << "Your GPA is " << gpa << "%." << endl;
  if (gpa >= 90){
    cout << "That is an A." << endl;
  }
    if (gpa == 100){
      cout << "That is a perfect grade!" << endl;
  } else if (gpa >= 80){
    cout << "That is an B." << endl;
  } else if (gpa >= 70){
    cout << "That is an C." << endl;
  } else if (gpa >= 60){
    cout << "That is an D." << endl;
  } else if (gpa <= 50){
    cout << "That is an F..." << endl;
  }
}
