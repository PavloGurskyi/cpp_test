#include <iostream> // для std::cout і std::cin
#include <locale>   // для setlocale()
#include <windows.h> // для SetConsoleOutputCP() і SetConsoleCP()
#include <conio.h> // для _kbhit() і _getch()


//? === St 21.03.26 ===


// This is a simple C++ program that prints "Hello World!" to the console.
// int main() {
//     std::cout << "Hello World!" << std::endl;
//     return 0;
// }

// This program prompts the user to enter a number, reads the input, and then prints it back to the console.
// int main() {
//     std::cout << "Enter number" << std::endl;
//     int number;
//     std::cin >> number;
//     std::cout << "You entered: " << number << std::endl;
//     std::cout << "Press ESC to exit..." << std::endl;
//     int key = 0;
//     while (key != 27) { // 27 = код клавіші ESC
//         if (_kbhit()) {
//             key = _getch();
//         }
//     }
//     return 0;
// }

// This program sets the locale to Ukrainian and prints "Hello, World!" in Ukrainian.
int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    std::cout << "Привіт, світ!" << std::endl;
    std::cout << std::endl;
    std::cout << "Press ESC to exit..." << std::endl;
    int key = 0;
    while (key != 27) { // 27 = код клавіші ESC
        if (_kbhit()) {
            key = _getch();
        }
    }
    return 0;
}


//? === Wd 25.03.26 ===


// This program initializes an integer variable with the value 12 and prints it to the console.
// int main(){
//     int num = 12;
//     std::cout << "Number " << num << std::endl;
//     return 0;
// }

// This program prompts the user to enter two numbers, reads the inputs, and then prints them back to the console.
// int main() {
//     int a, b;
//     std::cout << "Enter number a: ";
//     std::cin >> a;
//     std::cout << "Enter number b: ";
//     std::cin >> b;
//     std::cout << "A is " << a << ". B is " << b << "." << std::endl;
//     return 0;
// }

// Types of variables.
// int main() {
//     short numShort = 2;
//     int numInt = 4;
//     long numLong = 8;
//     long long numLongLong = 16;
//     unsigned short numUnsignedShort = 3;
//     unsigned int numUnsignedInt = 5;
//     unsigned long numUnsignedLong = 9;
//     unsigned long long numUnsignedLongLong = 17;
//     return 0;
// }

// This program initializes a float and a double variable with specific values and prints them to the console.
// float numFloat = 3.14f;
// double numDouble = 3.14159265358979323846;
// int main() {
//     std::cout << "Float is " << numFloat << std::endl;
//     std::cout << "Double is " << numDouble << std::endl;
//     return 0;
// }

// Char variable.
// char sym = '+';

// Boolean variables.
// bool isTrue = true;
// bool isFalse = false;


//? === Wd 25.03.26 - part 2 ===


// How "if"-construction works.
// int main() {
//     int num;
//     std::cout << "Enter number: ";
//     std::cin >> num;
//     if(num > 3) {
//         std::cout << "Number " << num << " is bigger." << std::endl;
//     }
//     return 0;
// }

// Autocheck for positive or negative number.
// int main() {
//     int num;
//     std::cout << "Enter number: ";
//     std::cin >> num;
//     if(num > 0) {
//         std::cout << "Number " << num << " is positive." << std::endl;
//     } else if (num < 0) {
//         std::cout << "Number " << num << " is negative." << std::endl;
//         }
//         else {
//             std::cout << "It is zero." << std::endl;
//         }
//         return 0;
//     }

// This program checks if the entered number is even or odd. //!"Press ESC to exit..."
// int main() {
//     int num;
//     std::cout << "Enter number: ";
//     std::cin >> num;
//     if(num % 2 == 0) {
//         std::cout << "Number " << num << " is even." << std::endl;
//     } else {
//         std::cout << "Number " << num << " is odd." << std::endl;
//     }
//     std::cout << std::endl;
//     std::cout << "Press ESC to exit..." << std::endl;
                                                                                    //!"Press ESC to exit..." 
//     int key = 0;
//     while (key != 27) { // 27 = код клавіші ESC
//         if (_kbhit()) {
//             key = _getch();
//         }
//     }
//     return 0;
// }


