//program for my_strcat.c
//your information here
/***************************************
* Lab02 *
* Author: Last name, first name *
* EECS/Prism username: Your eecs login username *
* Yorku Student #: Your student number *
* Email: Your email address *
****************************************/

#include<stdio.h>
//include string library header files

//more declarations as needed

#define SIZE 35

int main(){
   char a[SIZE];
   char b[SIZE];
   char c[SIZE];
   char d[SIZE];

   printf("Enter the first string(with no spaces) stored in array 'a': ");
   scanf("%s",a);

   printf("Enter the first string(with no spaces) stored in array 'b': ");
   scanf("%s",b);
   
   //Complete the Code
   while (   ){
    
      strcpy(c,a); 
      strcpy(d,b);

      strcat(a,b);
      my_strcat(c,d);
      
      printf("Original function strcat(a,b) results:   %s\n", a); 
      printf("My function my_strcat(c,d) results: %s\n\n", c);

      //Take the inputs again till you enter "xxx" for both arrays 
   }
}

//your version of strcat implementation here
void my_strcat(char des[], char src[]){

}
