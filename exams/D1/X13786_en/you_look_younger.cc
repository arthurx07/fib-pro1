#include <iostream>
using namespace std;

int main() {
  string name, a;
  int age;

  while (cin >> a >> a >> a >> name >> a >> a >> a >> age >> a >> a) {
    int substract = age/10;
    int sug_age = age - substract;
    cout << name << ", you look younger. I thought you were " << sug_age << " years old." << endl;
  }
}
