#include <iostream>
using namespace std;





void print_fibo(int n ){


    int s = 0 ;
    int e = 1 ; 

    int p1 = 0, p2 = 1; // Initialize the first two Fibonacci numbers

    

    for (int i = 0; i < n; i++) {


        cout << p1 << "\t"; 
        int next = p1 + p2   ; 
          p1 = p2    ; 
           p2 = next; 
    }
}



int main() {
    
    print_fibo( 8) ; 

}

