/*Inheritance is one of the key features of Object-oriented programming in C++. It allows user to create a new class (derived class) from an existing class(base class).

The derived class inherits all the features from the base class and can have additional features of its own.

Create game characters using the concept of inheritance.*/

#include <iostream>
using namespace std;

class Person
{
     public:
        string profession;
        int age;

        Person(): profession("unemployed"), age(16) { }
        void display()
        {
             cout << "My profession is: " << profession << endl;
             cout << "My age is: " << age << endl;
             walk();
             talk();
        }
        void walk() { cout << "I can walk." << endl; }
        void talk() { cout << "I can talk." << endl; }
};

// MathsTeacher class is derived from base class Person.
class MathsTeacher : public Person
{
    public:
       void teachMaths() { cout << "I can teach Maths." << endl; }
};

// Footballer class is derived from base class Person.
class Footballer : public Person
{
    public:
       void playFootball() { cout << "I can play Football." << endl; }
};

int main()
{
     MathsTeacher teacher;
     teacher.profession = "Teacher";
     teacher.age = 23;
     teacher.display();
     teacher.teachMaths();

     Footballer footballer;
     footballer.profession = "Footballer";
     footballer.age = 19;
     footballer.display();
     footballer.playFootball();

     return 0;
}
/*Output

My profession is: Teacher
My age is: 23
I can walk.
I can talk.
I can teach Maths.
My profession is: Footballer
My age is: 19
I can walk.
I can talk.
I can play Football.
In this program, Person is a base class, while MathsTeacher and Footballer are derived from Person.

Person class has two data members - profession and age. It also has two member functions - walk() and talk().

Both MathsTeacher and Footballer can access all data members and member functions of Person.

However, MathsTeacher and Footballer have their own member functions as well: teachMaths() and playFootball() respectively. These functions are only accessed by their own class.

In the main() function, a new MathsTeacher object teacher is created.

Since, it has access to Person's data members, profession and age of teacher is set. This data is displayed using the display() function defined in the Person class. Also, the teachMaths() function is called, defined in the MathsTeacher class.

Likewise, a new Footballer object footballer is also created. It has access to Person's data members as well, which is displayed by invoking the display() function. The playFootball() function only accessible by the footballer is called then after.*/


	
Advantages:-

One of the key benefits of inheritance is to minimize the amount of duplicate code in an application by sharing common code amongst several subclasses. Where equivalent code exists in two related classes, the hierarchy can usually be refactored to move the common code up to a mutual superclass. This also tends to result in a better organization of code and smaller, simpler compilation units.

Inheritance can also make application code more flexible to change because classes that inherit from a common superclass can be used interchangeably. If the return type of a method is superclass

Reusability -- facility to use public methods of base class without rewriting the same Extensibility -- extending the base class logic as per business logic of the derived class Data hiding -- base class can decide to keep some data private so that it cannot be altered by the derived class

Overriding--With inheritance, we will be able to override the methods of the base class so that meaningful implementation of the base class method can be designed in the derived class.

Disadvantages:-

One of the main disadvantages of inheritance is the increased time/effort it takes the program to jump through all the levels of overloaded classes. If a given class has ten levels of abstraction above it, then it will essentially take ten jumps to run through a function defined in each of those classes
Main disadvantage of using inheritance is that the two classes (base and inherited class) get tightly coupled. This means one cannot be used independent of each other.
Also with time, during maintenance adding new features both base as well as derived classes are required to be changed. If a method signature is changed then we will be affected in both cases (inheritance & composition)
If a method is deleted in the "super class" or aggregate, then we will have to re-factor in case of using that method.Here things can get a bit complicated in case of inheritance because our programs will still compile, but the methods of the subclass will no longer be overriding superclass methods. These methods will become independent methods in their own right.
