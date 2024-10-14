#include <math.h>

int main() 
{
     int  n,s=0,rem,armst;
     printf("enter the  n value ");
     scanf("%d",&n);
     while(n>0)
     
     { 
      rem=n%10;
      s=s+rem*rem*rem;
      n=n/10;
     
     
     
     }
     if(n==s)
     printf("armst no",n);
     else
     printf(" not armst no",n);
     
     
     
     
     
     
    
  
 
       
         
       
         
       
       
     
     
      
      
      
      
      
     
     
      
 }    
 
     


    