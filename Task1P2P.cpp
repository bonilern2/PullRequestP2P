#include <iostream>
using namespace std;
class Employee {
private:
    string fio;
    string position;
    string email;
    string phone;
    double salary;
    short age;
public:
    Employee(string fio, string position, string email, string phone, double salary, short age) {
        this->fio = fio;
        this->position = position;
        this->email = email;
        this->phone = phone;
        this->salary = salary;
        this->age = age;
    }
    void displayInfo() {
        cout << "ФИО: " << fio << endl;
        cout << "Должность: " << position << endl;
        cout << "Email: " << email << endl;
        cout << "Телефон: " << phone << endl;
        cout << "Зарплата: " << salary << endl;
        cout << "Возраст: " << age << endl;
    }
    short getAge() {
        return age;
    }

};
int main() {
    Employee employees[5] = {
    Employee("Иванов Иван Иванович", "Менеджер", "ivanov@gmail.com", "+79123456789", 50000, 35),
    Employee("Петров Петр Петрович", "Разработчик", "petrov@gmail.com", "+79234567890", 70000, 28),
    Employee("Сидоров Сидор Сидорович", "Бухгалтер", "sidorov@gmail.com", "+79345678901", 60000, 40),
    Employee("Николаев Николай Николаевич", "Дизайнер", "nikolaev@gmail.com", "+79456789012", 55000, 32),
    Employee("Козлов Константин Константинович", "Тестировщик", "kozlov@gmail.com", "+79567890123", 45000, 25) };
    for (int i = 0; i < 5; i++) {
        if (employees[i].getAge() > 30) {
            employees[i].displayInfo();
            cout << endl;
        }
    }
    return 0;
}
