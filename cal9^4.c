/*name:lalith
  about:calculate 9^4 
date:19/06/2019 */

 #include<stdio.h>
void  main()
{ 

 int base=9, exp=4, product=base ;
 int count=1;
//[ while count<exp ;]
product=product*base ;
count= count+1 ;
product=product*base ;
count=count+1 ;
product=product*base ;
count=count+1 ;
 printf("=%d" , product );
} 
 
