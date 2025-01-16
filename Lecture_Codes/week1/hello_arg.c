/* This program takes the arguments during runtime.
   It is developed during first day of the class.
   Author: Dr. Sukhwant Sagar
*/

#include <stdio.h>		//Directive

int main(int argc, char** argv)			//Main function
{
  printf("Hi,%s\n",argv[1]); 	//print message
  printf("The number of arguments passed is :  %d", argc);
  return 0;			//successful termination
}				//End of Main function

