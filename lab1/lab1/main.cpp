#include "Triangle.h"
#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");

    int n;
    std::cout << "Введите количество треугольников: ";
    std::cin >> n;

    Triangle* triangles = new Triangle[n];  // Массив треугольников

    // Ввод данных о треугольниках
    for (int i = 0; i < n; ++i) {
        double base, side;
        std::cout << "Введите основание и боковую сторону для треугольника " << i + 1 << ": ";
        std::cin >> base >> side;
        if (!triangles[i].setProperties(base, side)) {
            std::cerr << "Повторите ввод для треугольника " << i + 1 << "." << std::endl;
            --i;
        }
    }

    int index = 0;  // Индекс выбранного треугольника
    bool running = true;

    while (running) {
        std::cout << "\nВыбран треугольник " << index + 1 << ": ";
        triangles[index].displayProperties();  // Показываем свойства выбранного треугольника

        // Меню выбора действий
        std::cout << "\nМеню:\n";
        std::cout << "1. Выбрать другой треугольник\n";
        std::cout << "2. Увеличить/уменьшить размер\n";
        std::cout << "3. Вычислить медиану\n";
        std::cout << "4. Вычислить периметр\n";
        std::cout << "5. Вычислить площадь\n";
        std::cout << "6. Вычислить углы\n";
        std::cout << "0. Выйти\n";
        std::cout << "Введите номер операции: ";
        int operation;
        std::cin >> operation;

        switch (operation) {
        case 1: {  // Выбор другого треугольника
            std::cout << "Выберите треугольник (1-" << n << "): ";
            std::cin >> index;
            --index;  // Индексация с 0
            if (index < 0 || index >= n) {
                std::cerr << "Неверный индекс треугольника. Пожалуйста, повторите ввод." << std::endl;
                index = 0;  // Возвращаемся к первому треугольнику
            }
            break;
        }
        case 2: {  // Увеличить/уменьшить размер
            double percent;
            std::cout << "Введите процент для изменения размера: ";
            std::cin >> percent;
            triangles[index].scale(percent);
            std::cout << "Размер треугольника изменен." << std::endl;
            break;
        }
        case 3: {  // Вычисление медианы
            std::cout << "Выберите сторону для медианы (1 - основание, 2 - боковая сторона): ";
            int sideChoice;
            std::cin >> sideChoice;
            if (sideChoice == 1) {
                std::cout << "Медиана к основанию: " << triangles[index].median(true) << std::endl;
            }
            else if (sideChoice == 2) {
                std::cout << "Медиана к боковой стороне: " << triangles[index].median(false) << std::endl;
            }
            else {
                std::cerr << "Неверный выбор!" << std::endl;
            }
            break;
        }
        case 4:  // Периметр
            std::cout << "Периметр: " << triangles[index].perimeter() << std::endl;
            break;
        case 5:  // Площадь
            std::cout << "Площадь: " << triangles[index].area() << std::endl;
            break;
        case 6:  // Углы
            std::cout << "Угол при основании: " << triangles[index].angleAtBase() << " градусов\n";
            std::cout << "Вершинный угол: " << triangles[index].angleAtVertex() << " градусов\n";
            break;
        case 0:  // Выход
            running = false;
            break;
        default:
            std::cout << "Неверный выбор. Пожалуйста, выберите операцию из списка." << std::endl;
        }
    }

    delete[] triangles;  // Освобождаем память
    std::cout << "Программа завершена." << std::endl;
    return 0;
}
