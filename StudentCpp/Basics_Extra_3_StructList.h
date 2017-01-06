// ��������������� ����:
// ������ ��������

#pragma once

#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

namespace StructList
{
    struct Book
    {
        char* Name;
        int Year;
    };

    struct Node
    {
        Book data;

        Node* next;
        Node* prev;
    };

    // ���������� ���������� ���������� � �������� ����������,
    // ������ ��� ��� ��� �� ������� �������� �� ���.
    // � ������� ������������� ���������� ����������
    // �������� ����� �������� � ����������.
    // �� ������������� ��������� ������ � ������� � ���������� ����������.
    Node* head = nullptr;
    // NULL = 0
    // nullptr - ������ ���������
    // ������� � ���, ���
    // NULL - ��� �����, �
    // nullptr - �������� ����� � ���������� ��� ������ ���������, �������� �������� ����� 0
    // ��������, nullptr ������������ ���  ���������� ������������ �������, ��� ���� ����� ������������ ��� ������ ���������

    void addFirst(Book book)
    {
        Node* temp = new Node;
        temp->data = book;
        temp->next = NULL;
        temp->prev = NULL;

        if (head == NULL)
        {
            head = temp;
            return;
        }

        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    void print()
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            cout << temp->data.Name << " (" << temp->data.Year << ")" << endl;
            // ������, ��� ��������� - ��� ������ �����, �.�. �����
            // � ���� ������� �� ��������� � ���������� ����� ���������� ��������
            temp = temp->next;
        }
    }

    void clear()
    {

        while (head != nullptr)
        {
            // ������� ������������ ��� ������, ����������
            // ��� ���� ���������
            delete[] head->data.Name;

            Node* temp = head;
            head = head->next;

            // ����� ����� ����� ����������� ������ ������ �������� ������
            delete temp;
        }
    }

    void main()
    {
        setlocale(LC_ALL, "Rus");

        int arraySize = 3;

        for (int i = 0; i < arraySize; i++)
        {
            Book book;

            char* buff = new char[255];
            cout << "����� " << i << ". ��������: ";
            cin >> buff;

            book.Name = new char[strlen(buff) + 1];
            strcpy(book.Name, buff);
            book.Name[strlen(buff)] = '\0';

            cout << "����� " << i << ". ���: ";
            cin >> book.Year;

            addFirst(book);
        }

        print();

        // ��� ������� ���� ������?
        clear();
    }
}
