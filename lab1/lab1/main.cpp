#include "Triangle.h"
#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");

    int n;
    std::cout << "������� ���������� �������������: ";
    std::cin >> n;

    Triangle* triangles = new Triangle[n];  // ������ �������������

    // ���� ������ � �������������
    for (int i = 0; i < n; ++i) {
        double base, side;
        std::cout << "������� ��������� � ������� ������� ��� ������������ " << i + 1 << ": ";
        std::cin >> base >> side;
        if (!triangles[i].setProperties(base, side)) {
            std::cerr << "��������� ���� ��� ������������ " << i + 1 << "." << std::endl;
            --i;
        }
    }

    int index = 0;  // ������ ���������� ������������
    bool running = true;

    while (running) {
        std::cout << "\n������ ����������� " << index + 1 << ": ";
        triangles[index].displayProperties();  // ���������� �������� ���������� ������������

        // ���� ������ ��������
        std::cout << "\n����:\n";
        std::cout << "1. ������� ������ �����������\n";
        std::cout << "2. ���������/��������� ������\n";
        std::cout << "3. ��������� �������\n";
        std::cout << "4. ��������� ��������\n";
        std::cout << "5. ��������� �������\n";
        std::cout << "6. ��������� ����\n";
        std::cout << "0. �����\n";
        std::cout << "������� ����� ��������: ";
        int operation;
        std::cin >> operation;

        switch (operation) {
        case 1: {  // ����� ������� ������������
            std::cout << "�������� ����������� (1-" << n << "): ";
            std::cin >> index;
            --index;  // ���������� � 0
            if (index < 0 || index >= n) {
                std::cerr << "�������� ������ ������������. ����������, ��������� ����." << std::endl;
                index = 0;  // ������������ � ������� ������������
            }
            break;
        }
        case 2: {  // ���������/��������� ������
            double percent;
            std::cout << "������� ������� ��� ��������� �������: ";
            std::cin >> percent;
            triangles[index].scale(percent);
            std::cout << "������ ������������ �������." << std::endl;
            break;
        }
        case 3: {  // ���������� �������
            std::cout << "�������� ������� ��� ������� (1 - ���������, 2 - ������� �������): ";
            int sideChoice;
            std::cin >> sideChoice;
            if (sideChoice == 1) {
                std::cout << "������� � ���������: " << triangles[index].median(true) << std::endl;
            }
            else if (sideChoice == 2) {
                std::cout << "������� � ������� �������: " << triangles[index].median(false) << std::endl;
            }
            else {
                std::cerr << "�������� �����!" << std::endl;
            }
            break;
        }
        case 4:  // ��������
            std::cout << "��������: " << triangles[index].perimeter() << std::endl;
            break;
        case 5:  // �������
            std::cout << "�������: " << triangles[index].area() << std::endl;
            break;
        case 6:  // ����
            std::cout << "���� ��� ���������: " << triangles[index].angleAtBase() << " ��������\n";
            std::cout << "��������� ����: " << triangles[index].angleAtVertex() << " ��������\n";
            break;
        case 0:  // �����
            running = false;
            break;
        default:
            std::cout << "�������� �����. ����������, �������� �������� �� ������." << std::endl;
        }
    }

    delete[] triangles;  // ����������� ������
    std::cout << "��������� ���������." << std::endl;
    return 0;
}
