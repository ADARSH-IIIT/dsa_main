#include<iostream>


using namespace std ; 





void swap(int &a, int &b){
       cout << "swapping " << a << b <<"\n" ; 
        int temp = b ; 
        b = a ; 
        a = temp ; 
}



void recb(int arr[] , int i , int p , int size){

         if(p==size-1) {return ; }
        if(i>size-p-1){   recb(arr , 0 , p+1 , size) ; return ;   }

        if(arr[i] > arr[i+1]){  swap(  arr[i] , arr[i+1]    ) ;   }

        recb(arr , i+1 , p , size) ; 


}






int main(){



int arr [] = {1,1,1,3 , -90  } ; 

int size = sizeof(arr)/sizeof(arr[0]); 




recb( arr , 0 , 0 , size) ; 




for(int i = 0 ; i< size ; i++){

    cout << arr[i] << '\t' ; 
}





    return 0 ; 
}