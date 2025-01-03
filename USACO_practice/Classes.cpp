#include <bits/stdc++.h>
using namespace std;

class Human {
  private:  // internal properties
	int body_temp;
	int temper;
	string name;

  public:  // external reactions
	Human(string name_, int body_temp_, int temper_) {
		name = name_;
		body_temp = body_temp_;
		temper = temper_;
	}

	string get_name() { return name; }

	string get_feeling() {
		if (body_temp >= 97 && body_temp <= 99) { return "good"; }
		return "bad";
	}

	string get_emotion() {
		if (temper <= 10) {
			return "sad";
		} else if (temper <= 30) {
			return "happy";
		}
		return "angry";
	}
};

int main() {
	Human sal("Sal", 98, 25);
	cout << sal.get_name() << " feels " << sal.get_feeling() << " and is "
	     << sal.get_emotion() << endl;
}