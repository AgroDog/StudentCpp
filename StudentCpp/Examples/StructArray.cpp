//#include <iostream>
//#include <cstdlib>
//#include <string.h>
//using namespace std;
//
//struct Book
//{
//	char* Name;
//	int Year;
//};
//
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	int arraySize = 3;
//	Book* array = new Book[arraySize];
//
//	for(int i = 0; i < arraySize; i++)
//	{
//		Book book;
//
//		char* buff = new char[255];
//		cout << "����� " << i << ". ��������: "; 
//		cin >> buff;
//
//		book.Name = new char[strlen(buff)+1];
//		strcpy(book.Name, buff);
//		book.Name[strlen(buff)] = '\0';
//
//		cout << "����� " << i << ". ���: "; 
//		cin >> book.Year;
//
//		array[i] = book;
//	}
//
//	cout << endl;
//
//	cout << "������ ����:" << endl;
//	for(int i = 0; i < arraySize; i++)
//		cout << array[i].Name << " (" << array[i].Year << ")" << endl;
//
//	// �� ������ NEW - ���� DELETE!!!
//
//	// ����� ������ ������ �� �����,
//	// ������ ����� �����������
//
//	// ������� ������������ ��� ������, ����������
//	// ��� ���� ���������
//	for(int i = 0; i < arraySize; i++)
//		delete[] array[i].Name;
//
//	// ����� ����� ����� ����������� ������ ������ �������
//	delete[] array;
//}
