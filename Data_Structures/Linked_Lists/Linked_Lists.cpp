
#include <iostream>


class Box{
    
public:

    int own_number_value;
    Box* next_value;

    Box()
    {
        own_number_value = 0;
        next_value = nullptr;
    }
    Box(int number)
    {
        own_number_value = number;
        next_value = nullptr;
    }

   

};

class LinkedList:Box{

    Box* startValue;
    Box* endValue;


public:

    LinkedList(int number)
    {   
        startValue = new Box(number);
        endValue = startValue;
    }

    void insert_before(int number)
    {   
        Box* newValue = new Box(number);

        (*newValue).next_value = startValue;

        startValue = newValue;

    }
    
    void insert_after(int number)
    {
        Box* newValue = new Box(number);

        (*endValue).next_value = newValue;

        endValue = newValue;
    }

    void print()
    {
        std::cout << "List contents are: ";

        Box* temp_place_holder = startValue;

        while( (temp_place_holder) != nullptr)
        {
            std::cout << (*temp_place_holder).own_number_value << ", ";
            temp_place_holder = temp_place_holder->next_value;
        }
        std::cout << std::endl;
    }


};


int main()
{

    LinkedList ll(9);

    ll.insert_before(14);
    ll.insert_before(16);
    ll.insert_before(19);

    ll.print();

    ll.insert_after(1);
    ll.insert_after(2);

    ll.print();

}