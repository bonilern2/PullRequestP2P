#include <iostream>
using namespace std;
class Animal {
protected:
    //static int count = 0;
    string name;
    int runlimit;
    int jumplimit;
    int swimlimit;
public:
    Animal(string n) {
        name = n;
        //увеличить на 1 count
    }
    void run(int distance) {
        if (distance <= runlimit) {
            cout << name << " бегает на расстояние " << distance << " метров" << endl;
        }
        else {
            cout << name << " не может пробежать заданную дистанцию" << endl;
        }
    }
    void swim(int distance) {
        if (distance <= swimlimit) {
            cout << name << " плавает на расстояние " << distance << " метров" << endl;
        }
        else {
            cout << name << " не может проплыть заданную дистанцию" << endl;
        }
    }
    void jump(int distance) {
        if (distance <= jumplimit) {
            cout << name << " прыгает на расстояние " << distance << " метров" << endl;
        }
        else {
            cout << name << " не может прыгнуть заданную дистанцию" << endl;
        }
    }
};

class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {
        int runlimit = 500;
        int swimlimit = 10;
        int jumplimit = 0;
    }

    
};

class Cat : public Animal {
public:
    Cat(string n) : Animal(n) {
        int runlimit = 200;
        int swimlimit = 0;
        int jumplimit = 2;
    }

   
};

int main() {
    Dog dog("Бобик");
    Cat cat("Мурзик");
    dog.run(5);
    dog.swim(8);
    cat.run(3);
    dog.jump(2);
    cat.jump(1);

    cout << "1 Кот, 1 Собака, 2 Животных" << endl;

    return 0;
}
