


#include <iostream>

using namespace std;


int main()
{
    int number_one = 6;

    cout << &number_one << endl;

    int *ptr_to_number_one = &number_one;

    cout << ptr_to_number_one << endl;
    cout << &ptr_to_number_one << endl;
    cout << *ptr_to_number_one << endl;

    /////////////////
    cout << "------ BREAK --------" << endl;
    ////////////////

    int listerino[] = {1,2,3};

    cout << *(listerino) << endl;
    
       

}