#include<iostream>
#include<cmath>
using namespace std ;


bool checkprime(int num){

    int  sq_of_num = sqrt(num) ;

     int i = 2 ; 

     while(i<= sq_of_num){

         if(num % i==0){
            return false ;
         }



        i++;
     }
    
    return true ; 
  

}



int main(){

   int A ;  
   cin >>A ; 
   cout <<  checkprime(A) ;

} 


