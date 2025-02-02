//program for mystrcmp.c
//your info here
/***************************************
* Lab02 *
* Author: Advincula, Miguel *
* EECS/Prism username: jmiguela *
* Yorku Student #: 220523627 *
* Email: jmiguela@my.yorku.ca *
****************************************/

#include<stdio.h>
#include<string.h>
// more header file and declarations as needed

#define SIZE 36

int main(){
   char a[SIZE];
   char b[SIZE];

   int my_strcmp(char x[], char y[]);
   
   printf("Enter the first string(with no spaces) stored in array 'a': ");
   scanf("%s",a);

   printf("Enter the first string(with no spaces) stored in array 'b': ");
   scanf("%s",b);
    
   while (strcmp(a, "xxx") != 0 && strcmp(b, "xxx") != 0){
      int result = strcmp(a,b); 
      if (result < 0) 
         printf("strcmp:   \"%s\" appears earlier in dictionary than \"%s\"\n", a,b);
      else if (result > 0) 
         printf("strcmp:   \"%s\" appears later in dictionary than \"%s\"\n", a,b);
      else 
         printf("\"%s\" and \"%s\" have same content\n", a, b);
      
      int result2 = my_strcmp(a,b);
      if (result2 < 0) printf("mystrcmp: \"%s\" appears earlier in dictionary than \"%s\"\n\n", a,b);
      else if (result2 > 0) printf("mystrcmp: \"%s\" appears later in dictionary than \"%s\"\n\n", a,b);
      else printf("\"%s\" and \"%s\" have same content\n\n", a,b);

      //Ask for input again till "xxx" is entered for both arrays
      printf("Enter the first string(with no spaces) stored in array 'a': ");
      scanf("%s",a);

      printf("Enter the first string(with no spaces) stored in array 'b': ");
      scanf("%s",b);
   }
   return 0;
}

// your version of strcmp implementation here
int my_strcmp(char x[], char y[]){
   int i;
   for (i = 0; x[i] != '\0' || y[i] != '\0'; i++){
      if (x[i] != y[i]){
         return x[i] - y[i];
      }
   }
   return 0;
}
