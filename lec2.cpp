#include "lec2.h"

#include<iostream>
#include<Windows.h>

using namespace std;

class Student
{
    char* name;
    int age;
public:
    Student()  // construct by default
    {
        cout << "By default\n";
        name = nullptr;
        age = 0;
    }
    Student(const char* Name, int Age) // construct by 2 param
    {
        cout << "By 2 params\n";
        name = new char[strlen(Name) + 1];
        strcpy_s(name, strlen(Name) + 1, Name);
        age = Age;
    }
    void Output()
    {
        cout << "Name: " << name << endl
            << "Age: " << age << endl << endl;
    }
    ~Student() // ‰ÂÒÚÛÍÚÓ
    {
        delete[] name;
        cout << "Destruct\n";
        Sleep(1000);
    }
};

void lec2()
{
    {
        Student obj2("Ivan", 20);
        obj2.Output();
    }
    cout << "Delete object obj2\n";

    //obj2.Output();

    system("pause");
}


class Car
{
    char* model;
    char* country;
    int year;
    double price;
public:
    Car();
    Car(const char* m, const char* c, int y, double pr);
    void Input();
    void Print();
    const char* GetModel()
    {
        return model;
    }
    const char* GetCountry();
    int GetYear();
    double GetPrice();
    /// sets
    void SetModel(const char* mod);

    ~Car();

};
