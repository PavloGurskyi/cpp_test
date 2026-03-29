#include <random>

int main () {
random_device rd; // отримує випадкове число від апаратного забезпечення
mt19937 gen(rd()); // ініціалізує генератор випадкових чисел Mersenne Twister
uniform_int_distribution<> dis(1, 100); // визначає діапазон випадкових чисел
int num = dis(gen); // генерує випадкове число в діапазоні від 1 до 100
cout << num << endl;
return 0;
}
