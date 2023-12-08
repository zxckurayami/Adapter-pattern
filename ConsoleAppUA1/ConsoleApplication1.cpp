// Виконав Іван Єнко
#include <Windows.h>
#include <iostream>

// Старий інтерфейс
class OldLibrary {
public:
    void oldMethod() {
        std::cout << "Old Library Method" << std::endl;
    }
};

// Новий інтерфейс, який ми хочемо використовувати
class NewInterface {
public:
    virtual void newMethod() = 0;
};

// Адаптер, який забезпечує взаємодію нового інтерфейсу зі старим
class Adapter : public NewInterface {
private:
    OldLibrary oldLibrary;

public:
    void newMethod() override {
        // Викликаємо старий метод через адаптер
        oldLibrary.oldMethod();
    }
};

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Створення об'єкта адаптера
    Adapter adapter;

    // Використання нового інтерфейсу через адаптер
    adapter.newMethod();

    return 0;
}
