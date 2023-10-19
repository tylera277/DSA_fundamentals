#include <iostream>
#include <memory>
#include <string>


class Student
{
std::string name;
int age;
std::unique_ptr<Student> beep;

public:

    Student(std::string i_name, int i_age)
    {
        age = i_age;
        name = i_name;
        std::cout << "Creation..." << std::endl;
    }
    ~Student()
    {
        std::cout << "...Destruction" << std::endl;
    }

    void printAge()
    {
        std::cout << "Age= " << this->age << std::endl;
    }
};




int main()
{
    auto smart_ptr = std::make_unique<Student>("johnny", 22);

    smart_ptr->printAge();


    std::cout << "END OF EXECUTION IN MAIN BODY" << std::endl;


}