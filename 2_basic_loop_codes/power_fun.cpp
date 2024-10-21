#include<iostream>
using namespace std ;




int power( int a , int b ){

    int i = 1 ; 
    int result = 1 ; 

    while(i<=b){
        result = result  * a ; 
        i++ ; 
    }

    return  result  ;

}


int main(){


cout << power(5,5) ;



}