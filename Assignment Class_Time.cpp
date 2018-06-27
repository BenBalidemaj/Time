#include <iostream>

using namespace std;

class Time
{

private:
	int hour;
	int min;
	int sec;

public:

	Time() {
		hour = 0;
		min = 0;
		sec = 0;
	}

	Time(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}

	int getHours() const {
		return hour;
	}

	int getMinutes() const {
		return min;
	}

	int getSeconds() const {
		return sec;
	}

	void setHours(int h) {
		hour = h;
	}

	void setMinutes(int m) {
		min = m;
	}

	void setSeconds(int s) {
		sec = s;
	}

	bool LessThan(Time time) {

		int totalseconds = ((hour * 3600) + (min * 60) + (sec));
		int totalseconds = ((hour * 3600) + (min * 60) + (sec));
		int totalseconds2 = ((time.getHours() * 3600) + (time.getMinutes() * 60) + (time.getSeconds()));
		cout << totalseconds2;
		if (totalseconds < totalseconds2) {
			return true;
		}

		return false;

		bool lessthan = false;

	}

	bool GreaterThan(Time time) const {

		int totalseconds = ((hour * 3600) + (min * 60) + (sec));
		int totalseconds2 = ((time.getHours() * 3600) + (time.getMinutes() * 60) + (time.getSeconds()));
		cout << totalseconds;
		cout << totalseconds2;

		if (totalseconds > totalseconds2) {
			return true;
		}

		return false;
	}

	bool EqualTo(Time time) const {

		if ((hour == time.getHours()) && (min == time.getMinutes()) && (sec == time.getSeconds())) {
			return true;
		}
	}

	void Read() {

		cout << "Enter the values:" << endl;
		cout << "Hour: ";
		cin >> hour;
		cout << "Minutes: ";
		cin >> min;
		cout << "Seconds: ";
		cin >> sec;

	}

	void Write() {

		cout << hour << ":" << min << ":" << sec << endl;

	}

};

int main()
{
	Time t1;
	Time t2 = Time(12, 45, 35);

	cout << "Part one: Comparing two values" << endl;
	t1.Read();

	t1.Write();

	t2.Write();

	t1.GreaterThan(t2);

	//Part two- User enters two values
	cout << "Part two: User enters two values and prints in Ascending/Decending";
	t1.Read();
	t2.Read();

	if (!t1.EqualTo(t2)) {

		if (t1.LessThan(t2)) {
			t1.Write();
			t2.Write();
		}

		else {
			t2.Write();
			t1.Write();
		}

	}
	else {
		cout << "The two times are equal" << endl;
	}


	return 0;
}
