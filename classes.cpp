#include <stdlib.h>
#include <iostream>
#include <vector>

class Student {
    public:
        int age;
        Student(int t_age){
            age = t_age;
        };
        ~Student(){
        };
        void sayAge(){
            std::cout << age << std::endl;
        }

};
int main(){
    Student derp = Student(96);
    derp.sayAge();
    return 0;
}