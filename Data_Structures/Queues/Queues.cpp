#include <iostream>
#include <string>

class Student{
    std::string name;
    int age;
    Student* next_student;

public:
    Student()
    {
    }

    Student(std::string i_name, int i_age)
    {
        this->name = i_name;
        this->age = i_age;
        this->next_student = nullptr;
    }

    std::string getName()
    {
        return this->name;
    }

    int getAge()
    {
        return this->age;
    }

    Student* getNextStudentInQueue()
    {
        return this->next_student;
    }

    void setNextStudentInQueue(Student* student)
    {
        this->next_student = student;
    }
};

class Queue{
    Student* start_of_queue;
    Student* end_of_queue;
    int length_of_queue;

public:
    Queue()
    {
        start_of_queue = nullptr;
        end_of_queue = nullptr;
        length_of_queue = 0;
    }

    void Enqueue(std::string name, int age)
    {
        Student* new_student = new Student(name, age);

        if(length_of_queue == 0)
        {
            start_of_queue = new_student;
            end_of_queue = new_student;
        }
        else
        {
            new_student->setNextStudentInQueue(end_of_queue);
            end_of_queue = new_student;
        }

        length_of_queue++;

        delete new_student;
    }

    void Dequeue()
    {
        std::cout << "Student being removed from queue is= " << end_of_queue->getName() << std::endl;
        start_of_queue = start_of_queue->getNextStudentInQueue();
    }

    std::string beep(std::string test)
    {
        return test;
    }


    void print()
    {
        int current_place = 1;

        std::cout << "Current queue is: " << std::endl;
        
        Student* current_student = new Student;

        current_student = start_of_queue;

        while(current_student != nullptr)
        {
            std::cout << current_place << ": Name- " << current_student->getName() << " Age- " << current_student->getAge() << std::endl;

            // Updating section
            current_student = current_student->getNextStudentInQueue();
            current_place++;
        }

    }
};


int main()
{

    Queue my_queue;

    my_queue.Enqueue("Jared", 12);
    //my_queue.Enqueue("Tyler", 26);

    my_queue.print();

}