// ��������������� ����:
// ������ ��������    

#pragma once
#include <iostream>
using namespace std;

namespace StructArray
{
    struct Point
    {
        int X;
        int Y;
    };

    void main()
    {
        Point p1;
        Point* p2 = new Point; 

        p1.X = 1;
        p1.Y = 2;

        p2->X = 3;
        (*p2).Y = 4;

        Point pArray1[5]; // ����������� ��������� ������ ��� ������ ��������
        pArray1[0] = p1;

        Point* pArray2 = new Point[5]; // ������������ ��������� ������ ��� ������ ��������
        pArray2[0] = *p2; // ���������� �������� "*", ����� ������������� ��������� � ��������, �.�. ������� �� ������ ���������� ������ ������

        Point** pArray3 = new Point*[5]; // ������������ ��������� ������ ��� ������ ���������� �� ���������
                                         // � ���� ������� �������� �� ���� ���������, � ��������� (�.�. ������) �� ��� ���������
                                         // ���� ��������� ����������� � ������ � ������ �����, ������ ������ ������ ��� ������

        pArray3[0] = p2;

        cout << pArray1[0].X << "; " << pArray1[0].Y << endl; // 1; 2
        cout << pArray2[0].X << "; " << pArray2[0].Y << endl; // 3; 4
        cout << pArray3[0]->X << "; " << pArray3[0]->Y << endl; // 3; 4
        // ������ ������� ������� pArray3 - ��������� (�.�. �����),
        // �� ������������ �������� "." ������, � ����� ������������ �������� "->",
        // ����� ��������� ������� ������������� � ������ ����� �� "�����" ������ �������.

        delete p2;
        delete[] pArray3;
        delete[] pArray2;

        // ��� ��������� ������ �������?
        Point* pArray = new Point[2];
        for (int i = 0; i < 2; i++)
        {
            Point p;

            cout << "pArray[" << i << "].X: "; cin >> p.X;
            cout << "pArray[" << i << "].Y: "; cin >> p.Y;

            pArray[i] = p;
        }
        // ��� ����� ��� ������:
        for (int i = 0; i < 2; i++)
        {
            cout << "pArray[" << i << "].X: "; cin >> pArray[i].X;
            cout << "pArray[" << i << "].Y: "; cin >> pArray[i].Y;
        }
        delete[] pArray;
    }
}