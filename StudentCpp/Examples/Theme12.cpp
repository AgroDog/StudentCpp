//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//#include <cstdio>
//#include <string.h>
//#include <conio.h>
//
//using namespace std;
//
//const char* FILE_NAME = "Employees.txt";
//
//class Employee // ����� ���������, ������� �������������
//{
//private:
//	char* _name;
//	int _birthYear;
//	float _pay;
//
//	int _lName, _lYear;
//
//public:
//	Employee(int lName = 32, int lYear = 5) : _lName(lName), _lYear(lYear)
//	{  
//		_name = NULL; // ������� (������) ���������
//	}
//
//	Employee(const Employee &empl) // ����������� �����������
//	{
//		Copy(empl);
//	}
//
//	~Employee()
//	{
//		if (_name != NULL) delete [] _name;
//	}
//
//	void SetData(const char* data)
//	{
//		if (_name != NULL) delete [] _name; // ���� ������ ��� ��� ��������
//
//		// ��������� �������� Trim(), �.�. �������� ������� � ����� ������:
//
//		int lengthName = _lName;
//		while (lengthName > 0 && data[lengthName - 1] == ' ') lengthName--;
//
//		_name = new char[lengthName + 1];
//		strncpy(_name, data, lengthName);
//		_name[lengthName] = 0;
//
//		_birthYear = atoi(data += _lName);
//		_pay = atof(data += _lYear);
//	}
//
//	void Print() 
//	{
//		cout << _name << " " << _birthYear << " �.�, " << _pay << " ���.\n";
//	}
//
//	int GetBirthYear() const { return _birthYear; } // �������� �������� �� 'const'
//
//	float GetPay() const { return _pay; }
//
//	void Copy(const Employee &empl) // ����������� �������
//	{
//		_lName = empl._lName;
//		_lYear = empl._lYear;
//
//		_birthYear = empl._birthYear;
//		_pay = empl._pay;
//
//		int lengthName = strlen(empl._name);
//		_name = new char[lengthName + 1];
//		strcpy(_name, empl._name);
//	}
//};
//
//
//// ����������� ����������� ����������� 2 ����
//Employee PrintLine(Employee empl) { cout << "\n"; empl.Print(); return empl; }
//
//// ����������� ����������� ����������� 1 ���
//Employee PrintLineRef(Employee &empl) { cout << "\n"; empl.Print(); return empl; }
//
//// ����������� ����������� �� �����������
//Employee& PrintLineRef2(Employee &empl) { cout << "\n"; empl.Print(); return empl; }
//
//
//void main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	// �������� ����� � ������� � �����������
//
//	ifstream f(FILE_NAME);
//	if (!f) { cout << "���� �� ������"; return; }
//
//	Employee employees[100]; // ������ �����������, �������� default �����������
//
//	int i = 0;
//
//	// ���������� ����������� �� �����
//
//	char buf[255];
//	while(f.getline(buf, 254))
//	{
//		employees[i++].SetData(buf);
//	}
//	
//	int emplCount = i;
//	if (!emplCount) return;
//	
//	// ������������ ������������ �������� �������� � ������ ������������ �����������
//
//	Employee empl = employees[0];
//	empl.Print();
//
//	// ������� �������� ��������
//
//	Employee empl1;
//	Employee empl2(32, 5);
//	Employee empl3 = Employee(32, 5);
//	
//	// ����� ������� � �������� � ��� �������
//
//	Employee e1 = PrintLine(empl);
//	Employee e2 = PrintLineRef(empl);
//	Employee e3 = PrintLineRef2(empl); // e3 - ��� ������ �� empl
//
//	// ��������, ����������� ����������� �� �������� � ����� ������:
//	// empl1 = empl; !!!
//	// � ���� ������ ���������� ����������� �������� '='
//	// �����:
//
//	empl1.Copy(empl);
//
//	// ������������ ������ ��������
//
//	Employee* employees2 = new Employee[emplCount];
//	
//	cout << "\n\n";
//	for (int i = 0; i < emplCount; i++) 
//	{
//		employees2[i].Copy(employees[i]);
//		employees2[i].Print();
//	}
//	
//	_getch();
//}