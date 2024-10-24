#include <iostream>
using namespace std;



void swapper(int &a  , int &b){
       
         a = a^b ; 
         b = a^b ;
          a = a^b ; 
}


void  reverser(int arr[] , int start , int end ){


    for(int i = start ; i <(start + end+1)/2 ; i++){
        swapper(arr[i] , arr[end+start-i]) ;
    }

        
}


void  rotater(int arr[] , int size ,  int unit){

    reverser(arr , 0 , size-1 );
    reverser(arr , 0 , unit-1) ; 
    reverser(arr , unit , size-1);


}

int main() {
    
int arr[] = {1,2,3,4,5,6} ;

int unit = 3 ; 

rotater(arr , 6 ,  unit) ;
   
   for(int i = 0 ; i<6;i++){
    cout << arr[i] << '\t' ; 
   }



}
