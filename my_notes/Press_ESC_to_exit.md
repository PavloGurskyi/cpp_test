Press ESC to exit...

insert at the end
BUT BEFORE
return 0;

    std::cout << "Press ESC to exit..." << std::endl;
    int key = 0;
    while (key != 27) { // 27 = код клавіші ESC
        if (_kbhit()) {
            key = _getch();
        }
    }
