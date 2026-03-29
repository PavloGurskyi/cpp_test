int main() {
setlocale(LC_ALL, "uk_UA.UTF-8");
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int num;

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
}
