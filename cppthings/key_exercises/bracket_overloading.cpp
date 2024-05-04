#include <cstring>
#include <iostream>

using namespace std;

struct Person {
    double salary;
    char* name;
};

class SalaryManage {
    private:
        Person* employ;
        int max;
        int n;
    public:

        SalaryManage(int _max = 0) {
            max = _max;
            n = 0;
            employ = new Person[_max];
        }

        double& operator[](char* name) {
            Person* p;
            for (p = employ; p < employ + n; ++p) {
                if (strcmp(p->name, name) == 0) {
                    return p->salary;
                }
            }
            p = employ + n++;
            p->name = new char[strlen(name) + 1];
            strcpy(p->name, name);
            p->salary = 0;
            return p->salary;
        }

        void display() {
            for (int i = 0; i < n; i++)
                cout << employ[i].name << " : " << employ[i].salary << endl;
        }

        ~SalaryManage() {
            delete[] employ;
        }
};




int main() {
    SalaryManage s(3);
    s["joe"] = 20000;
    s["wang"] = 30000;
    s["liu"] = 200;

    cout << "joe\t" << s["joe"] << endl;
    cout << "wang\t" << s["wang"] << endl;
    cout << "liu\t" << s["liu"] << endl;

    cout << "-------下为display的输出--------\n\n";
    s.display();
}
