/*name:lalith 
 about: taking average of 4 numbers and giving condition 
 date:21/06/2019 */


#include<stdio.h> // its a preprocessor directive

int main() // my program starts execution 
{ 

 
  int inp1=67,inp2=56,inp3=89,inp4=99 , resadd, resavg ,resdiv,resmul ; // here i am declaring all the different types of variables 

  resadd= inp1+inp2+inp3+inp4; // addition operation

  resmul=inp1*inp3 ; // multiplication operation
   
  resavg= resadd/4 ; // taking average using resadd since i have aldready declared resadd

  resdiv =inp4/inp3 ; // division operation

  printf("resavg=%d\n, resadd=%d\n, resmul=%d\n, resdiv=%d\n" , resavg,resadd,resmul,resdiv)  ; // printing the outputs for resadd, resmul, resdiv,resavg
  
  if(resavg < 50) // giving the if then else conditon for resavg variable
  { 
   
   printf("sorry! you have failed\n");

  } 

  else

  {
 
  printf("congrats!you have passed\n");
  
  }

}   // ending the program	
