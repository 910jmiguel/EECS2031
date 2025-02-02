//program for my_strcat.c
//your information here
/***************************************
* Lab02 *
* Author: Advincula, Miguel *
* EECS/Prism username: jmiguela *
* Yorku Student #: 220523627 *
* Email: jmiguela@my.yorku.ca *
****************************************/

#include<stdio.h>
//include string library header files
#include<string.h>

//more declarations as needed

#define SIZE 35

void my_strcat(char des[], char src[]);

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
   while(strcmp(a, "xxx") != 0 && strcmp(b, "xxx") != 0) {

      strcpy(c,a); 
      strcpy(d,b);

      strcat(a,b);
      my_strcat(c,d);
      
      printf("Original function strcat(a,b) results:   %s\n", a); 
      printf("My function my_strcat(c,d) results: %s\n\n", c);

      printf("Enter the first string(with no spaces) stored in array 'a': ");
      scanf("%s",a);

      printf("Enter the first string(with no spaces) stored in array 'b': ");
      scanf("%s",b);
   }
   return 0;
}

//your version of strcat implementation here
void my_strcat(char des[], char src[]){
   int i, j;
   for(i = 0; des[i] != '\0'; ++i) {
   }

   for(j = 0; src[j] != '\0'; j++) {
      des[i + j] = src[j];
   }

   des[i + j] = '\0';
}


