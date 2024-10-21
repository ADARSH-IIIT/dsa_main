#include<iostream>

using namespace std ;



void printer( char s , char e  ){

  
        while(s<=e){          
            cout << int(s) << s  << '\t' ; 
            s++ ;
        }


}


int main(){

    printer('a' , 'g') ; 

}



// 97a     98b     99c     100d    101e    102f    103g

// char is stored in memeoy as interger with the help of ascii code 