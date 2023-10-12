
#include <iostream>


class Element
{
    int value;
    Element* next_element;

    public:

    Element(int number)
    {
        this->value = number;
        next_element = nullptr;
    }

    int getInternalValue()
    {
        return this->value;
    }

    Element* getNextElement()
    {
        return this->next_element;
    }

    void setNextElement(Element* new_element)
    {
        this->next_element = new_element;
    }

};


class Stack
{
    Element* top_of_stack;

public:
    
    Stack()
    {
        top_of_stack = nullptr;

    }

    // ~Stack()
    // {
    //     delete top_of_stack;
    // }

    void push(int number)
    {
        
        Element* element = new Element(number);


        element->setNextElement(top_of_stack);

        std::cout << element->getInternalValue() << std::endl;
        top_of_stack = element;
        std::cout << (*top_of_stack).getInternalValue() << std::endl;

    }

    void pop()
    {
        std::cout << "Getting rid of element:" << (*top_of_stack).getInternalValue() << std::endl;
        top_of_stack = (*top_of_stack).getNextElement();

    }

    void print()
    {


        Element* current_element = top_of_stack;

        std::cout << "Elements are: " << std::endl;

        while(current_element != nullptr)
        {
            std::cout << current_element->getInternalValue() << std::endl;

            current_element = current_element->getNextElement();

        }   
        std::cout << "-------" << std::endl;
    }


};





int main()
{

    Stack stack;

    stack.push(12);

    stack.print();


    stack.push(17);
    stack.push(18);
    stack.pop();

    stack.print();

}