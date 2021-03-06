# Тезисы к защите лабораторных

## Лабораторная 1. Простейшие конструкции
### Темы для изучения: 
* точка входа в программу, подключение библиотек, ввод/вывод на экран (cin, cout)
* переменная, типы данных, оператор, приведение типов
* локальная переменная, глобальная переменная, условный оператор if, цикл for, цикл while, цикл do-while, пошаговая отладка
* библиотека math, условный оператор, тернарный оператор
* функция, передача параметров в функция, возрат результата работы функции
* (advanced) защита от дурака, getch, форматированный ввод/вывод, таблица ASCII, анимация, обработка нажатий клавиш

### Примеры вопросов на защите:
* Что такое cin/cout
* Что такое std
* Что происходит с локальной переменной при завершении блока кода
* Приоритет типов данных
* Синтаксис записи функции

## Лабораторная 2. Память.
### Темы для изучения: 
* массив, память программы, где хранятся переменные, как массив хранится в памяти
* динамическая память, куча программы, указатель, выделение памяти, высвобождение памяти
* оператор "&", "*"
* строка, символ конца строки, строковые функции
* указатель на указатель, ступенчатый массив, динамически расширяемый массив
* двумерный массив (матрица), как хранится в памяти двумерный массив, многомерный массив
* передача указателя в функцию, возврат указателя из функции, разделяемая память между несколькими переменными, опасные ситуации при работе с указателями (на примере строк)
* Запишите выражение `array[7]` без использования оператора "[]"
* (advanced) зачем указателю тип данных, указатель на указатель "игры" с типом данных указателя, чернуха с массивами (массив строк, массив массивов)
### Примеры вопросов на защите:

## Лабораторная 3. Файлы.
### Темы для изучения: 
* поток, файл, ввод/вывод в файл, проверка на существование файла, признак конца файла
* чтение сложных данных из файла, getline, atoi, itoa, обратная польская запись
* сериализация, дессериализация, сохранение и восстановление состояния программы из файла
* (advanced) Json, Xml, csv
### Примеры вопросов на защите:
* Что такое поток? Поток ввода, поток вывода
* Приемущества потокового ввода/вывода по сравнению с Си подобным вводом/выводом
* Ввод/вывод языка Си
* Что такое сериализация и десериализация, зачем нужны, как используются
* (advanced) Формат хранения информации json, xml, csv - синтаксис, преимущества и недостатки, распространенность

## Лабораторная 4. Структуры.
### Темы для изучения: 
* ссылка, передача параметров по ссылке, передача параметров по ссылке, то же самое для возврата значения
* структура, область видимости, поля, методы
* оператор ".", "->"
### Примеры вопросов на защите:
* 2 способа передачи параметров в функция
* 2 способа возврата значений из функции
* Разница между этими двумя способами
* Что такое структура
* Что такое поле и метод структуры
* В чем отличие структур языка С++ от структур языка Си
* Как применять оператор ".", что он делает
* Как применять оператор "->", что он делает
* Как записать выражение `ptr->a` без использования оператора "->". Обяснить, как дошли до своего решения

## Лабораторная 5. Объектно-ориентированное программирование
### Темы для изучения: 
* класс, объект, правило "черного ящика", инкапсуляция, многомодульное программирование, статическое создание объекта, динамическое создание объекта
* дружественная функция, указатель this, конструктор, деструктор, конструктор по умолчанию, конструктор копирования
* перегрузка унарного оператора, перегрузка бинарного оператора, перегрузка оператора как дружественной функции, перегрузка оператора как метода класса
* наследование, родитель, потомок, порядок вызова конструкторов, перегрузка методов родителя
* виртуальный метод, чисто виртуальный метод, абстрактный класс, полиморфизм
* тип данных string
* vector, map, итератор
* (advanced) графический интерфейс, Qt (QtCreator)/WinForms (Embarcadero C++ Builder)/Windows 8.1 App (VS2015+)
### Примеры вопросов на защите:
* Понятие класса и объекта
* Что такое абстракция
* Отличие класса от структуры

## Лабораторная 6. Творчество
### Темы для изучения: 
Развитие навыка по описанию проблемы научиться составлять оптимальную объектную модель и реализацию программы
### Примеры вопросов на защите:

## Курсовое проектирование
### Темы для изучения: 
* Шаблон, универсальная шаблонная коллекция
### Примеры вопросов на защите:

## Летняя практика
### Темы для изучения: 
* Сложность алгоритмов, алгоритмы сортировки
* Структуры данных: стэк, очередь, очередь с приоритетами, коллекция ключ-значение, хэш-таблица
### Примеры вопросов на защите:
