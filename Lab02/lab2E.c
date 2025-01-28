//program for mystrcmp.c
//your info here
/***************************************
* Lab02 *
* Author: Last name, first name *
* EECS/Prism username: Your eecs login username *
* Yorku Student #: Your student number *
* Email: Your email address *
****************************************/

#include<stdio.h>

// more header file and declarations as needed

#define SIZE 36

int main(){
   char a[SIZE];
   char b[SIZE];
   
   printf("Enter the first string(with no spaces) stored in array 'a': ");
   scanf("%s",a);

   printf("Enter the first string(with no spaces) stored in array 'b': ");
   scanf("%s",b);
    
   while (     ){
      int result = strcmp(a,b); 
      if (  ) 
         printf("strcmp:   \"%s\" appears earlier in dictionary than \"%s\"\n", a,b);
      else if (  ) 
         printf("strcmp:   \"%s\" appears later in dictionary than \"%s\"\n", a,b);
      else 
         printf("\"%s\" and \"%s\" have same content\n", a, b);
      
      int result2 = my_strcmp(a,b);
      if (  ) printf("mystrcmp: \"%s\" appears earlier in dictionary than \"%s\"\n\n", a,b);
      else if (  ) printf("mystrcmp: \"%s\" appears later in dictionary than \"%s\"\n\n", a,b);
      else printf("\"%s\" and \"%s\" have same content\n\n", a,b);

      //Ask for input again till "xxx" is entered for both arrays
   }
}

// your version of strcmp implementation here
int my_strcmp(char x[], char y[]){

}
