#include <cmath>
#include <iostream>
#include <cstring>

using namespace std;

class Clock {
    private:
        int hour, minute, second;
    
    public:
        Clock(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}

        void show_time() {
            cout << hour << ":" << minute << ":" << second << endl;
        }

        Clock &operator++() {
            second++;
            if (second >= 60) {
                second = second - 60;
                minute++;
                if (minute >= 60) {
                    minute = minute - 60;
                    hour++;
                    hour %= 24;
                }
            }
            return *this;
        }

        Clock operator++(int) {
            Clock old = *this;
            ++(*this);
            return old;
        }
};


class Circle {
    double x, y, r;

public:
    Circle(double _x, double _y, double _r) : x(_x), y(_y), r(_r) {}

    operator int() {return int(r);}
    operator double() {return 2 * 3.14 * r;}
    operator float() {return (float) 3.14 * r * r; }
};

class Sale {
private:
    char name[10];
    char id[18];
    int age;
public:
    Sale(char* _name, char* _id, int _age) {
        strcpy(name, _name);
        strcpy(id, _id);
        age = _age;
    }

    friend Sale &operator<<(ostream &os, Sale &s) {
        os << s.name << " " << s.id << " " << s.age << endl;
        return s;
    }

    friend Sale &operator>>(istream &is, Sale &s) {
        cout << "inpur name,id,age\n";
        is >> s.name >> s.id >> s.age;
        return s;
    }
};

class Distance {
private:
    int feet, inch;
public:
    Distance() {};
    Distance(int f, int i) : feet(f), inch(i) {}
    friend ostream& operator<<(ostream &os, const Distance &d) {
        os << "F: " << d.feet << " I: " << d.inch;
        return os;
    }

    friend istream& operator>>(istream &is, Distance &d) {
        cin >> d.feet >> d.inch;
        return is;
    }
};


int main() {
    Clock clock(23, 59, 59);
    clock.show_time();

    (clock++).show_time();

    (++clock).show_time();

    Circle c(2.3, 3.4, 2.5);
    int r = c;
    double length = c;
    float area = c;
    double len = (double)c;
    cout << r << endl;
    cout << length << endl;
    cout << len << endl;
    cout << area << endl;

    Sale  s("li", "12345", 30);
    cout << s;
    cin >> s;
    cout << s;


    Distance D1(11, 10), D2(5, 11), D3;
 
   cout << "Enter the value of object : " << endl;
   cin >> D3;
   cout << "First Distance : " << D1 << endl;
   cout << "Second Distance :" << D2 << endl;
   cout << "Third Distance :" << D3 << endl;

    return 0;
}