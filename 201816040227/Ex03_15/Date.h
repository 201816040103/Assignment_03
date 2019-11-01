#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED



#endif // DATE_H_INCLUDED
#include <string> // program uses C++ standard string class
using namespace std;

// Date class definition
class Date
{
public:
   Date (int, int, int);/* Declare a constructor that has one parameter for each data member */
   void setYear(int);/* Declare a set method for the year */
   int getYear();/* Declare a get method for the year */
   void setMonth( int);/* Declare a set method for the month */
   int getMonth();/* Declare a get method for the the month */
   void setDay(int);/* Declare a set method for the day */
   int getDay();/* Declare a get method for the day */
   void displayDate();
private:
   int year;/* Declare a int data member for the year */
   int month;/* Declare a int data member for the month */
   int day;/* Declare an int data member for the day */

}; // end class date
