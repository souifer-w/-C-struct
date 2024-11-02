#include<iostream>
#include<string>
using namespace std;

struct MyStruct
{
	string firstname;
	string lastname;
	string age;
	string city;

};

void readinfo(MyStruct &info)
{
	cout << "please enter your first name :" << endl;
	cin >> info.firstname;

	cout << "please enter your last name :" << endl;
	cin >> info.lastname;

	cout << "please enter your age :" << endl;
	cin >> info.age;

	cout << "please enter your city:" << endl;
	cin >> info.city;


}

void printinfo(MyStruct info)
{
	cout << "************************************************\n";

	cout << "first name :" << info.firstname << endl;
	cout << "last name :" << info.lastname << endl;
	cout << "age :" << info.age << endl;
	cout << "city :" << info.city << endl;

	cout << "************************************************\n";

}

void readifopersone(MyStruct persone[2])
{
	readinfo(persone[0]);
	printinfo(persone[1]);




}

void printinfopersone(MyStruct persone[2])
{

	readinfo(persone[0]);
	printinfo(persone[1]);


}

int main()
{
	MyStruct persone1[2];

	readifopersone(persone1);
	printinfopersone(persone1);

	return 0;



}