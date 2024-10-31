#include <iostream>
#include <sstream>

using namespace std;

class Student {
private:
  int age, standard;
  string first_name, last_name;

public:
  int get_age() { return age; }
  void set_age(int age) { this->age = age; }

  int get_standard() { return standard; }
  void set_standard(int standard) { this->standard = standard; }

  string get_first_name() { return first_name; }
  void set_first_name(string first_name) { this->first_name = first_name; }

  string get_last_name() { return last_name; }
  void set_last_name(string last_name) { this->last_name = last_name; }

  string to_string() {
    stringstream ss;
    ss << age << ',' << first_name << ',' << last_name << ',' << standard;
    return ss.str();
  }
};

int main() {
  Student student;
  int x;
  string s;
  cin >> x;
  student.set_age(x);
  cin >> s;
  student.set_first_name(s);
  cin >> s;
  student.set_last_name(s);
  cin >> x;
  student.set_standard(x);

  cout << student.get_age() << '\n';
  cout << student.get_last_name() << ", " << student.get_first_name() << '\n';
  cout << student.get_standard() << "\n\n";

  cout << student.to_string();
}
