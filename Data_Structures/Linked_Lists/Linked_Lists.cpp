
#include <iostream>


class Box{
    int own_value;
    Box* next_value;

public:
    Box::Box()
    {
        own_value = NULL;
        next_value = nullptr;
    }
    Box::Box(int number)
    {
        own_value = number;
        next_value = nullptr;
    }

    void Box::insert(int number)
    {
        this->next_value = new Box(number);

    }

    void Box::print(Box *total_list)
    {
        Box current = *total_list;

        while(current.ptr_next_value != nullptr)
        {
            std::cout << current.own_value << std::endl;
            current = current.ptr_next_value;
        }
    }

};


int main()
{
    Box listerino = Box(9);

    listerino.insert(12);



}