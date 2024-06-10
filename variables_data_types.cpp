#include <iostream>

int main() {

    //datatypes
    //integers (whole integer)
    int age = 35;
    int year = 2024;
    int days = 7;

    // std::cout << age << '\n';
    // std::cout << year << '\n';
    // std::cout << days << '\n';

    //double (number including decimal)
    double price = 10.99;
    double gpa = 3.9;
    double temperature = 95.5;

    // std::cout << price << '\n';
    // std::cout << gpa << '\n';
    // std::cout << temperature << '\n';

    //char (single character), use single quotes
    char grade = 'A';
    char initial = 'S';
    char currenty = '$';

    // std::cout << grade << '\n';
    // std::cout << initial << '\n';

    //boolean (true or false), where output is true=1 and false=0
    bool isStudent = false;
    bool isPoweredOn = true;
    bool isInStock = true;

    // std::cout << isPoweredOn << '\n';
    // std::cout << isInStock << '\n';

    // string (objects that represents a sequence of text), use double quotes
    std::string name = "John";
    std::string day = "Monday";
    std::string food = "Pizza";
    std::string address = "123 Some St.";

    std::cout << name << '\n';
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old."; //make sure you have a space in string

    return 0;
}

