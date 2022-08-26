/*name:lalith
about: taking the average of 4 numbers in general and using scanf function
date:24/06/2019 */


#include<stdio.h> //its the preprocessive directive
int main() //starting the program 

{

  int n1,n2,n3,n4,average ; // declaring different variables
  n1=10 ;          
  n2=20 ;
  n3=30 ;
  n4=40 ; // assigning values for the declared variables
  average=n1+n2+n3+n4/4 ; // taking average of taken 4 nos
  printf("average=%d\n" , average); // taking average of taken 4 nos 
  
  if (average<50) // taking the if then condition
  {
    printf(" sorry! you failed\n");
  }

  else
  {
    printf("congrats! you passed\n");
  } 
 
  printf("calculating the average of user given numbers\n"); // displaying output for user given nos

  printf("enter n1: "); // for any number to be substituted for general in the container using printf and scanf function for input no1
  scanf(" %d",&n1);

  printf("enter n2:"); //for any number to be substituted in general in the container using printf and scanf function for input no2 
  scanf(" %d",&n2);

  printf("enter n3:"); // for any number to be substituted in general in the container using printf and scanf function for input no3 
  scanf(" %d",&n3);

  printf("enter n4:"); // for any number to be substituted in general in the container using printf anf scanf function for input no4
  scanf(" %d",&n4);

  average=(n1+n2+n3+n4)/4  ; // taking average  for user given numbers 

  printf("average=%d\n" , average); // printing the average on the numbers given by the user

  if (average<50)
   {

   printf(" you failes ");

   } 


  else
 { 

  printf(" you pass");

 } 

} // program ends

