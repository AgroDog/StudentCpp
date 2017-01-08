// ��������������� ����:
// ���������

#pragma once

#include <iostream>
using namespace std;

namespace Structures
{
    // ��������� - ��� ��������� ����������, ������������ ��� ����� ������.
    // 
    // ����� ������, ��������� - ��� ������� � ������, ������ ������� ����� ����� ����������.

    // �������� � ������� ����� � �������� ���������:
    struct Point
    {
        int x;
        int y;
    }; // <== �� ��������� ';' ����� �������� ���������!
    
    // ����� ���������� �� ������, ��� �������� ��������� �����������
    // � � ��� ��������� ������ ����������� � ������������ �����������.

    // ��������� - ��� ���������������� ��� ������.
    // �.�. �������� �����-�� ���������, ��������, �� ������� ��������� Point (�����),
    // �� ������� ���� ����������� ��� ������, ����� �� ��� int, char, double � �.�.
    // ������� �� ����������� ����� ������ ���� int ������ � ���, ���
    // int - ������� ��� ������ � ���������� ������ ���� ������ ������ ���� ������������� �����,
    // � ���������� ���� ������ ����� ����� ������� ����� 2 ���������� ���� ������ int.

    // � ������ ��������� �������� ����� ������� ������, ��� ����� ������ ������ ��������� ���������� ������ ���������
    // ��� ������ ���������� ���� ������ Point ����� ���������� 8 ���� ������:
    // 4 ����� ��� ���������� x + 4 ����� ��� ���������� y
    // � � ������ ������ ��� ������ ����� ���� �� ������ ������.

    // ��������� - ��� ��� ������! ������, ����� ��������� ���������� ������ ����.

    // �������� ��� ���� ���������, �����������:
    struct Triangle
    {
        Point v1, v2, v3; // ����������� ��������������� 3 ���������
    };

    // ����� ������� � ������������ ����� 3 �������,
    // ������ �� ������� - ��� ����� � 2-�� ������������ x � y

    // �� � ������ ���������� ��� �� �������� �� �����������:

    void main()
    {
        Point p1; // ����������� �������� ���������� ���� ���������
        Point* p2 = new Point; // ������������ �������� ���������� ���� ���������

        p1.x = 1; // �������� "." - ��������� ������� � ����������� ����������� ���������� ���������� ����
        p1.y = 2;

        p2->x = 3; // �������� "->" - �� ��, ��� � ".", �� �����������, ���� ���������� ����������� ���� - ��� ���������
        (*p2).y = 4; // ��� ����������� ������ 
        // "->" ����� ���������� ������ 2-� ��������: 
        // ��������������� ��������� � ��������� ������� �� ���������� ����

        // ��������� 2 ������� ������ ���� � �� ��, �� � ������� ������ ���������� '.' � '->'
        cout << p2->x << endl; // 3
        cout << (*p2).x << endl; // 3

        // �� � ������ �������� �����������
        Triangle t;

        // �������� �������� ������
        // ������ ���������� t ���� ���������� v1
        // � ������ v1 ���� ���������� x � y
        t.v1.x = 2; 

        // ��� ��� ������� ������ �������.
        // ���� ������� ������� t - �����������, ������ ������� ����
        // 3 ������ ������� v1, v2, v3, ������ ������ �� ������� �����
        // 2 ������������� ���������� x � y

        t.v1.y = 3;
        t.v2.x = 1;
        t.v2.y = 10;
        t.v3.x = 4;
        t.v3.y = -2;
    }
}
