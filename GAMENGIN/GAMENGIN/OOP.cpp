#include <iostream>
#include <string>
using namespace std;

//What are Data Structures ?
//Data structures are ways of organizing and storing data in a computer so that it can be accessed and modified efficiently.
//Common OOP - based data structures : Arrays, Linked Lists, Stacks, Queues, Trees, and Graphs.

namespace DataStructure 
{
    class Node {
    public:
        int data = 0;
        Node* next;
    };
}

//What are Classes ?
//A class is a blueprint for creating objects(instances).It encapsulates data and functions that manipulate the data.
//Classes define the properties(attributes) and behaviors(methods) that an object can have.

namespace Class
{
    class Car {
    public:
        string model;
        int year;
        void display() {
            cout << "Model: " << model << ", Year: " << year << endl;
        }
    };
}

//Access Modifiers:
//Public: Members accessible from outside the class.
//Private : Members accessible only within the class.
//Protected : Members accessible in the class and subclasses.

namespace AccessModifier
{
    class Person {
    private:
        string name;
    public:
        void setName(string n) {
            name = n;
        }
    };
}

//What is Inheritance ?
//Inheritance allows a class to inherit properties and behaviors from another class.
//It promotes code reuse and establishes relationships between classes(base class and derived class).

namespace AccessModifier
{
    class Animal {
    public:
        void eat() {
            cout << "Eating..." << endl;
        }
    };

    class Dog : public Animal {
    public:
        void bark() {
            cout << "Barking..." << endl;
        }
    };
}

//What is Polymorphism ?
//Polymorphism allows objects of different types to be treated as objects of a common superclass.It can be achieved through function overloading and overriding.
//Compile - time Polymorphism : Function overloading, operator overloading.
//Run - time Polymorphism : Method overriding.

namespace
{
    class Shape {
    public:
        virtual void draw() {
            cout << "Drawing Shape" << endl;
        }
    };

    class Circle : public Shape {
    public:
        void draw() override {
            cout << "Drawing Circle" << endl;
        }
    };
}

//What are Abstract Classes ?
//An abstract class cannot be instantiated and serves as a base class for other classes.
//It can have both pure virtual functions and normal functions.

namespace Abstract 
{
    class Shape {
    public:
        virtual void draw() = 0; // Pure virtual function
    };

    class Rectangle : public Shape {
    public:
        void draw() override {
            cout << "Drawing Rectangle" << endl;
        }
    };
}

//What is an Interface ?
//In C++, interfaces can be implemented using abstract classes with all pure virtual functions.They define the "what" but not the "how."
//An interface specifies a set of methods that must be implemented by any class that inherits from it.

namespace Interface
{
    class IShape {
    public:
        virtual void draw() = 0;
    };

    class Circle : public IShape {
    public:
        void draw() override {
            cout << "Drawing Circle" << endl;
        }
    };
}

//OOP in Action
//Create a simple program demonstrating multiple OOP principles : classes, inheritance, polymorphism, and interfaces.

namespace Practical
{
    class Vehicle {
    public:
        virtual void drive() = 0;
    };

    class Car : public Vehicle {
    public:
        void drive() override {
            cout << "Driving a car" << endl;
        }
    };

    class Bike : public Vehicle {
    public:
        void drive() override {
            cout << "Riding a bike" << endl;
        }
    };
}