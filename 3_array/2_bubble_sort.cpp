#include <iostream>
using namespace std;





void swapper(int &a , int &b){
      
       a = a^b  ;
       b = a^b  ;
       a = a^b  ;
        
}



void bubble_sort(int arr[] , int size){

                for(int i = 0 ; i<size ; i++){

                                            for(int j = 0 ; j < size-1-i ; j++){
                                                    if(arr[j+1] > arr[j]){
                                                                swapper(   arr[j+1] , arr[j] );
                                                    }
                                            }
                }


}




int main() {


    int arr[] = {1,2,4,3 , 0  , -12 , 90 , 44,67 , -10,2,5 , 0 } ; 

    int size = 13 ; 


    bubble_sort(arr , size) ; 


    for(int i =0 ; i< size ; i++){
        cout << arr[i] << '\t'  ; 
    }
    
}
