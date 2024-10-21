#include<iostream>

using namespace std ;




void for_printer( int a , int b ){


    for(int i  = a ;  i <=b ; i++ ){
          cout << i << '\t' ; 
    }

}


void while_printer( int a , int b ){

     while( a<=b ){
        cout << a << "\t" ; 
        a++ ;
    }



}




void do_while_printer( int a , int b ){

     do{
        cout << a << "\t" ; 
        a++ ;
    }while(a<=b);



}







int main(){

            while_printer(10,20) ; 


}