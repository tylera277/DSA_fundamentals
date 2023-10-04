
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

    Box* currentValue;

public:

    LinkedList(int number)
    {   
        currentValue = new Box(number);
    }

    void insert(int number)
    {   
        Box* newValue = new Box(number);

        (*newValue).next_value = currentValue;

        currentValue = newValue;

    }

    void print()
    {
        std::cout << "List contents are: ";

        while( (currentValue) != nullptr)
        {
            std::cout << (*currentValue).own_number_value << ", ";
            currentValue = currentValue->next_value;
        }
        std::cout << std::endl;
    }


};


int main()
{

    LinkedList ll(9);

    ll.insert(14);
    ll.insert(16);
    ll.insert(19);

    ll.print();


}