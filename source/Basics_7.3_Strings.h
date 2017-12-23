#pragma once

#include <iostream>
using namespace std;

namespace Strings
{
    char* readString()
    {
        char buf[255]; // ������� ����� � "�������", ����� �������
        cin.get(buf, 255); // ������ ������ � ����
        char* str = new char[strlen(buf)]; // �������� ����� ������� ������, ������� "��������" �������� � ������
                                            // strlen - �-��� ����������� ����� ������. ��� ������� ������� ������ �� �������� �����
                                            // ���� ������������ ���� ����� 10 ��������, �� strlen � ������ 10
        strcpy(str, buf); // �������� �������� ������ �� ������ � ���������� str2
        return str;
    }

    int main()
    {
        char str0[7] = "qwerty";
        cout << str0 << endl;
        str0[6] = '!';
        cout << str0 << endl;

        char str1[5];
        cout << "������� ������ str1: ";
        cin.getline(str1, 5);
        cout << str1 << endl;


        char* buf = new char[255]; // ������� ����� � "�������", ����� �������
        cout << "������� ������ str2: ";
        cin.getline(buf, 255); // ������ ������ � ����
        char* str2 = new char[strlen(buf)]; // �������� ����� ������� ������, ������� "��������" �������� � ������
        // strlen - �-��� ����������� ����� ������. ��� ������� ������� ������ �� �������� �����
        // ���� ������������ ���� ����� 10 ��������, �� strlen � ������ 10
        strcpy(str2, buf); // �������� �������� ������ �� ������ � ���������� str2
        delete[] buf; // ������� �������� ������ �����
        cout << str2 << endl;

        cout << "������� ������ str3: ";
        char* str3 = readString();
        cout << str3 << endl;

        return 0;
    }
}