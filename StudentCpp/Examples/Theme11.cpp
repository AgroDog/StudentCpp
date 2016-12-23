#pragma once

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string.h>
#include <conio.h>

using namespace std;

namespace Theme11
{

    const char* FILE_NAME = "Employees.txt"; // ���� � ��������� Win1251

    class Employee // ����� ���������
    {
    private:
        char* _name;
        int _birthYear;
        float _pay;

        int _lName, _lYear;

    public:
        Employee(int lName = 32, int lYear = 5) : _lName(lName), _lYear(lYear)
        {
            _name = new char[lName + 1];
        }

        ~Employee() { delete[] _name; }

        void SetData(const char* data)
        {
            strncpy(_name, data, _lName);
            _name[_lName] = 0;

            _birthYear = atoi(data += _lName);
            _pay = atof(data += _lYear);
        }

        void Print()
        {
            cout << _name << " " << _birthYear << " �.�, " << _pay << " ���.\n";
        }

        int GetBirthYear() { return _birthYear; }

        float GetPay() { return _pay; }
    };


    void Theme11_Main()
    {
        setlocale(LC_ALL, "Russian");

        // �������� ����� � ������� � �����������

        ifstream f(FILE_NAME);
        if (!f) { cout << "���� �� ������";  _getch(); return; }

        Employee employees[100]; // ������ �����������, �������� default �����������

        int i = 0;

        // ���������� ����������� �� �����

        char buf[255];
        while (f.getline(buf, 254))
        {
            employees[i++].SetData(buf);
        }

        int emplCount = i;

        // ����� ����������� �� ���� ��������

        int year = 1984;

        float sumPay = 0;
        int count = 0;

        for (i = 0; i < emplCount; i++)
        {
            if (employees[i].GetBirthYear() != year) continue;

            employees[i].Print();

            sumPay += employees[i].GetPay();
            count++;
        }

        if (count)
        {
            cout << "\n" << "������� ����� " << sumPay / count << " ���. " << year << " �.�.";
        }

        _getch();
    }
}