/*************************************************************************
* Program:                                                                 
*    Assignment 35, Advanced Conditionals                                  
*    Brother Ridges, CS124                                                 
* Author:                                                                  
*    Alexander Berryhill                                                   
* Summary:                                                                 
*    This program will take a grade and give back a letter grade.          
*                                                                          
*                                                                          
*                                                                          
*                                                                          
*    Estimated:  0.5 hrs                                                   
*    Actual:     0.5 hrs                                                   
*      The most difficult part was getting the correct letters and signs   
*************************************************************************/

#include <iostream>
using namespace std;

/*************************************************************************
 * computeLetterGrade will take the grade and return its letter.           
 ************************************************************************/
char computeLetterGrade(int grade)
{
   int letterNum = grade - (grade % 10);
   switch (letterNum)
   {
      case 100:
         return 'A';
      case 90:
         return 'A';
               case 80:
         return 'B';
      case 70:
         return 'C';
      case 60:
         return 'D';
      default:
         return 'F';
   }
}

/*************************************************************************
 * computeGradeSign will take a grade and compute its sign.                
 ************************************************************************/
char computeGradeSign(int grade)
{
   int signNum = grade % 10;

   if (grade >= 95)
      return '*';
   else if (grade <= 65)
      return '*';
   switch (signNum)
   {
      case 9:
      case 8:
      case 7:
         return '+';
      case 6:
      case 5:
      case 4:
      case 3:
         return '*';
      default:
         return '-';
   }
}

/*************************************************************************
 * main will prompt and get a grade. The PUT the grade, the grade letter   
 * and the gradeSign if necessary.                                         
 ************************************************************************/
int main()
{
   int grade;

   cout << "Enter number grade: ";
   cin >> grade;
   char gradeSign = computeGradeSign(grade);
   cout << grade << "% is " << computeLetterGrade(grade);
   if (gradeSign == '*')
      cout << endl;
   else
      cout << gradeSign << endl;
   return 0;
}