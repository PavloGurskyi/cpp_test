#include <iostream> // для std::cout і std::cin
#include <locale>   // для setlocale()
#include <windows.h> // для SetConsoleOutputCP() і SetConsoleCP()
#include <conio.h> // для _kbhit() і _getch()


//? === St 21.03.26 ===


// This is a simple C++ program that prints //!"Hello World!" to the console.
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

// This program sets the locale to Ukrainian and prints "Hello, World!" in //! Ukrainian.
// int main() {
//     setlocale(LC_ALL, "uk_UA.UTF-8");
//     SetConsoleOutputCP(65001);
//     SetConsoleCP(65001);
//     std::cout << "Привіт, світ!" << std::endl;
//     std::cout << std::endl;
//     std::cout << "Press ESC to exit..." << std::endl;
//     int key = 0;
//     while (key != 27) { // 27 = код клавіші ESC
//         if (_kbhit()) {
//             key = _getch();
//         }
//     }
//     return 0;
// }


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

//! Types of variables.
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

//! Char variable.
// char sym = '+';

//! Boolean variables.
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

//todo Autocheck for positive or negative number.
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

//todo This program checks if the entered number is even or odd.

//!"Press ESC to exit..."
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


//? === Th 26.03.26 ===


//! if / else if / else construction.
// This program checks if the entered number is greater than, less than, or equal to 3, and prints the appropriate message in Ukrainian. It also waits for the user to press the ESC key before exiting.
// int main(){
//     setlocale(LC_ALL, "uk_UA.UTF-8");
//     SetConsoleOutputCP(65001);
//     SetConsoleCP(65001);
//     int num;
// std::cout << "Введіть число: ";
// std::cin >> num;
// if(num > 3) {
//     std::cout << "Число " << num << " є більшим." << std::endl;
// } else if (num < 3) {
//     std::cout << "Число " << num << " є меншим." << std::endl;
// } else if (num == 3) {
//     std::cout << "Це і є число 3." << std::endl;
// } else {
//     std::cout << "Це не число." << std::endl;}
//     std::cout << std::endl;
//         std::cout << "Press ESC to exit..." << std::endl;
//     int key = 0;
//     while (key != 27) { // 27 = код клавіші ESC
//         if (_kbhit()) {
//             key = _getch();
//         }
//     }
// return 0;
// }

//! if / else if / else construction with checking for number 13.
// int main(){
//     setlocale(LC_ALL, "uk_UA.UTF-8");
//     SetConsoleOutputCP(65001);
//     SetConsoleCP(65001);
//     int num;
// std::cout << "Введіть число: ";
// std::cin >> num;
// if(num == 13) {
//     std::cout << "Це — число 13." << std::endl;
// } else if (num > 3) {
//     std::cout << "Число " << num << " є більшим." << std::endl;
// } else if (num < 3) {
//     std::cout << "Число " << num << " є меншим." << std::endl;
// } else if (num == 3) {
//     std::cout << "Це і є число 3." << std::endl;
// } else {
//     std::cout << "Це не число." << std::endl;}
//     std::cout << std::endl;
//         std::cout << "Press ESC to exit..." << std::endl;
//     int key = 0;
//     while (key != 27) { // 27 = код клавіші ESC
//         if (_kbhit()) {
//             key = _getch();
//         }
//     }
// return 0;
// }

//! if / else if / else construction without {} brackets.
// int main(){
//     setlocale(LC_ALL, "uk_UA.UTF-8");
//     SetConsoleOutputCP(65001);
//     SetConsoleCP(65001);
//     int num;
// std::cout << "Введіть число: ";
// std::cin >> num;
// if(num == 1)
//     std::cout << "Це — число 1." << std::endl;
// else if(num == 2)
// std::cout << "Це — число 2." << std::endl;
// else if (num == 3)
// std::cout << "Це — число 3." << std::endl;
// else 
// std::cout << "Це не число 1, 2 або 3." << std::endl;
//     std::cout << std::endl;
//         std::cout << "Press ESC to exit..." << std::endl;
//     int key = 0;
//     while (key != 27) { // 27 = код клавіші ESC
//         if (_kbhit()) {
//             key = _getch();
//         }
//     }
// return 0;
// }

//todo switch construction.
// int main() {
//     setlocale(LC_ALL, "uk_UA.UTF-8");
//     SetConsoleOutputCP(65001);
//     SetConsoleCP(65001);
//     int num;
//     std::cin >> num;
//     switch (num) {
//         case 5:
//             std::cout << "Is 5.";
//         break;
//         case 10:
//             std::cout << "Is 10.";
//         break;
//         default:
//             std::cout << "Is not.";
//         break;
//     }
//         std::cout << std::endl;
//         std::cout << "Press ESC to exit..." << std::endl;
//     int key = 0;
//     while (key != 27) { // 27 = код клавіші ESC
//         if (_kbhit()) {
//             key = _getch();
//         }
//     }
// return 0;
// }


//? === Su 29.03.26 ===


//todo Simple calculator using switch construction.
/*int main() {
setlocale(LC_ALL, "uk_UA.UTF-8");
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int num;
float num1, num2;
char sym;
std::cout << "Введіть перше число: ";
std::cin >> num1;
std::cout << "Оберіть дію (+, -, *, /): ";
std::cin >> sym;
std::cout << "Введіть друге число: ";
std::cin >> num2;
std::cout << std::endl;
switch (sym) {
    case '+':
        std::cout << "Результат: " << num1 + num2 << std::endl;
        break;
    case '-':
        std::cout << "Результат: " << num1 - num2 << std::endl;
        break;
    case '*':
        std::cout << "Результат: " << num1 * num2 << std::endl;
        break;
    case '/':
        if (num2 != 0) {
            std::cout << "Результат: " << num1 / num2 << std::endl;
        } else {
            std::cout << "Помилка: ділення на нуль!" << std::endl;
        }
        break;
    default:
        std::cout << "Невірна операція!" << std::endl;
        break;
}
std::cout << std::endl;
std::cout << std::endl;
std::cout << "Press ESC to exit..." << std::endl;
int key = 0;
while (key != 27)
{ // 27 = код клавіші ESC
    if (_kbhit())
    {
        key = _getch();
    }
    }
return 0;
}*/

//todo Simple calculator using if / else if / else construction.
/*int main() {
setlocale(LC_ALL, "uk_UA.UTF-8");
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int num;
float num1, num2;
char sym;
std::cout << "Enter first number: ";
std::cin >> num1;
std::cout << "Choose operation (+, -, *, /): ";
std::cin >> sym;
std::cout << "Enter second number: ";
std::cin >> num2;
std::cout << std::endl;
if (sym == '+') {
    std::cout << "Result is: " << num1 + num2 << std::endl;
} else if (sym == '-') {
    std::cout << "Result is: " << num1 - num2 << std::endl;
} else if (sym == '*') {
    std::cout << "Result is: " << num1 * num2 << std::endl;
} else if (sym == '/') {
    if (num2 != 0) {
        std::cout << "Result is: " << num1 / num2 << std::endl;
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
    }
} else {
    std::cout << "Invalid operation!" << std::endl;
}
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Press ESC to exit..." << std::endl;
    int key = 0;
    while (key != 27) { // 27 = код клавіші ESC
        if (_kbhit()) {
            key = _getch();
        }
    }
return 0;
}*/

//todo Simple calc #2 without text.
/*int main() {
    float num1, num2, res;
    char sym;
        std::cin >> num1;
    std::cin >> sym;
    std::cin >> num2;
    if (sym == '+') {
        res = num1 + num2;
    } else if (sym == '-') {
        res = num1 - num2;
    } else if (sym == '*') {
        res = num1 * num2;
    } else if (sym == '/') {
        res = num1 / num2;
    } else {
        std::cout << "Error" << std::endl;
    }
std::cout << std::endl;
    std::cout << "Equals: " << res << std::endl;
    return 0;
    */

//! Modulo operation (rest of dividing)
/*int main() {
    int a, b, z;
    std::cin >> a >> b;
    z = a % b;
    std::cout << z << std::endl;
    return 0;
}*/

//? a = a + 1; a += 1; a++; ++a;


//! ============================== using namespace std; ==============================


using namespace std;

//todo Start using namespace std; and rewrite the first simple calculator without std:: prefix.
/*int main() {
    int a, b, c;
    cin >> a >> b;
    c = a + b;
    cout << c << endl;
    return 0;
}*/

//todo Randomize number from 1 to 20.
/*int main () {
    srand(time(0));
    int a = 1 + rand() % 20;
    cout << a << endl;
    return 0;
}*/

//! ============================== Homework ==============================

//todo Simple calculator using switch construction.
/*int main() {
setlocale(LC_ALL, "uk_UA.UTF-8");
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int num;
float num1, num2;
char sym;
cout << "Введіть перше число: ";
cin >> num1;
cout << "Оберіть дію (+, -, *, /): ";
cin >> sym;
cout << "Введіть друге число: ";
cin >> num2;
cout << endl;
switch (sym) {
    case '+':
        cout << "Результат: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Результат: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Результат: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "Результат: " << num1 / num2 << endl;
        } else {
            cout << "Помилка: ділення на нуль!" << endl;
        }
        break;
    default:
        cout << "Невірна операція!" << endl;
        break;
}
}*/

//! Simple randomizer from 1 to 100.
#include <cstdlib>
#include <ctime>
/*int main () {
    srand(time(0));
    int num = 1 + rand() % 100;
    cout << num << endl;
    return 0;
}*/

//? Better randomizer from 1 to 100 using <random> library.
#include <random>
/*int main() {
    random_device rd; // отримує випадкове число від апаратного забезпечення
    mt19937 gen(rd()); // ініціалізує генератор випадкових чисел
    uniform_int_distribution<> dis(1, 100); // визначає діапазон випадкових чисел
    int num = dis(gen); // генерує випадкове число в діапазоні від 1 до 100
    cout << num << endl;
    return 0;
}*/

