#include <string>
#include <iostream>
#include <memory>


class Student
{
    std::string name;
    int age;

public:

    Student(std::string input_name, int input_age)
    {
        name = input_name;
        age = input_age;
    }

    ~Student()
    {
        std::cout << "I am dying" << std::endl;
    }

    std::string getName()
    {
        return name;
    }

    void SaySomething()
    {
        std::cout << "saying something!" << std::endl;
    }

};

class Class
{
    std::unique_ptr<Student> smartPtr = std::make_unique<Student>();

};

void SayHello(std::shared_ptr<Student> p)
{
    auto local_ptr = p;

    std::cout << "hello from function" << std::endl;
    local_ptr->SaySomething();
}


int main()
{

    // Unique pointers
    int number = 15;

    auto smartPtr = std::make_unique<Student>("Dave", 16);


    std::cout << smartPtr->getName() << std::endl;

    
    std::cout << "END OF PROGRAM!" << std::endl;


    // Shared ptrs
    std::shared_ptr beep = std::make_shared<Student>("Tyler", 99);

    std::cout << "hello from main" << std::endl;
    SayHello(beep);



    return 0;
}