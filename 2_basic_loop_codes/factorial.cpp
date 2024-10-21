#include<iostream>

using namespace std ;




int incremental_factorial( int num ){

    // calculation num to 0 

    int result = 1 ; 
    int i  = 1 ; 
    while(i<=num ){

                result = result * i ;
                i++ ;
    }

    return result ;

}



int decremental_factorial( int num ){

    // calcualtion 0 to num 

    int result = 1 ; 
    int i  = num  ; 
    while(   i>0 ){

                result = result * i ;
                i-- ;
    }

    return result ;

}






int main(){


cout << decremental_factorial(  -10   );




}