// ��������������� ����:
// ��������� � ������������

#pragma once

#include <iostream>
using namespace std;

namespace StructEnum
{
    enum MoneyType
    {
        Dollar,
        Euro,
        Ruble
    };

    struct MyStruct
    {
        int Num;
        MoneyType Money;
    };

    int main()
    {
        // ������������ ����� ���������
        MyStruct s;
        s.Num = 666;
        s.Money = Dollar;

        if (s.Money == Dollar)
            cout << "$";
        if (s.Money == Euro)
            cout << "Yohoo";
        if (s.Money == Ruble)
            cout << "Loser";
    }
}
