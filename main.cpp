#include<iostream> // basic in out
//#include <limits>

int main(){
    std::cout <<"Hello World!\n";

    int x;

    std::cout <<"Enter a number!\n";
    std::cin >> x; // how to get input from user

    for (int i = 0; i <= x; i++) {
    std::cout << i << "\n";
    }


    /*
    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character
    std::cin.get(); // get one more char from the user
    */

    return 0;
}
