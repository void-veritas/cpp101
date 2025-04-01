#include <iostream>
//#include <print>
//import std;
//import <print>;
using namespace std;

int main() {
//    std::cout << "Hello, World!"<< std::endl;
//    std::println(std::cerr, "Error: {}",6);
//    std::println("Hello World");
    println("Hello world, using namespace");//works only with using namespace
    int uninitialisedInt;
    int initialisedInt{7};
    println ("{} is a random value coming from uninitilise var", uninitialisedInt);
    println ("{} is a  value coming from initilise var", initialisedInt);

    println ("int:");
    println("Max int value: {}",numeric_limits<int>::max());
    println("lowest int {}", numeric_limits<int>::lowest());

    float myFloat {3.14f};
    println ("myFloat value is : {}",myFloat);
    int myFloatToInt {static_cast<int>(myFloat)};
    println ("Int converted from myFloat : {}",myFloatToInt);


    println ("Testing different int types");

    int someInt {256};
    short someShort;
    long someLong;
    float someFloat;
    double someDouble;

    someInt++;
    someInt *=2;
    someShort = static_cast<short>(someInt);
    someLong = someShort*10000;
    someFloat = someLong +0.785f;
    someDouble = static_cast<double>(someFloat)/100000;

    println("Some Int : {}",someInt);
    println("Some Short : {}",someShort);
    println("Some Long: {}",someLong);
    println("Some Float: {}",someFloat);
    println("Some Double: {}",someDouble);

    println("Trying multiplying short by 1_000_000_000 {}",someShort*1000000000);

    return 0;
}
