#include <iostream>
//#pragma warning (disable: 4996)

enum class Subject {
    English,
    Programming,
    Maths,
};

class Teacher {
    private:
        char name[128];
        int age;
        Subject subject;
        float salary;

    public:
        Teacher(char[], int, Subject, float);
        
        void setName(char name[]) {
            for (size_t i = 0; i < 128; i++)
            {
                this->name[i] = name[i];
            }
        }

        const char* getName() const {
            return name;
        }

        void setAge(int age) {
            this->age = age;
        }

        int getAge() const {
            return age;
        }

        void setSubject(Subject subject) {
            this->subject = subject;
        }

        Subject getSubject() const {
            return subject;
        }

        void setSalary(float salary) {
            this->salary = salary;
        }

        float getSalary() const {
            return salary;
        }
};

Teacher::Teacher(char name[], int age, Subject subject, float salary) {
    setName(name);
    setAge(age);
    setSubject(subject);
    setSalary(salary);
}



int main() {
    char name[] = "Pepe";
    Teacher teacher(name, 19, Subject::Maths, 2030);
    std::cout << teacher.getAge();
}
