#include <iostream>
#include <sstream>
#include <fstream>
#include <Windows.h>
#include <string>
#include <vector>
using namespace std;



#pragma region String streams


//
//void main() {


	/*int num;
	cin >> num;
	cout << num << endl;*/


	//string data;
	//cin >> data;
	//cout << data << endl;


	/*stringstream ss;
	ss << "Hello World";
	string data;*/
	//ss >> data;
	//getline(ss, data);
	//cout << data << endl;

	//stringstream ss;
	//ss << "Hello World Hello Step";
	//string data;

	/*ss >> data;
	cout << data << endl;

	ss >> data;
	cout << data << endl;*/

	//int counter = 4;

	//while (!ss.eof()) {
	//	ss >> data;
	//	cout << data << endl;
	//}

	/////////// / /  / / /    //////////////


	//string lastname, firstname;
	//int age;
	//double salary;

	//stringstream ss;
	//ss << "Aysen Memmedova 19 2000";
	//ss >> firstname;
	//ss >> lastname;
	//ss >> age;
	//ss >> salary;

	//cout << "Lastname:" << lastname << endl;
	//cout << "Firstname:" << firstname << endl;
	//cout << "Age:" << age << endl;
	//cout << "Salary:" << salary << endl;


//	stringstream ss;
//	ss << "Azerbaycan, Azerbaycan @ Ey qehreman ovladin sanli Veteni! @ Senden otru can vermeye cumle haziriz. @  Senden otru qan tokmeye cumle qadiriz. @  Ucrengli bayraginla mesud yasa.  @ Ucrengli bayraginla mesud yasa. @  Minlerle can qurban oldu, @  Sinan herbe meydan oldu, @  Huququndan kecen esger, @  Here bir qehreman oldu. @  Sen olasan gulustan, @  sene her an can qurban. @  Sene min bir mehebbet, @  sinemde tutmus mekan.  @ Namusunu hifz etmeye, bayragini yukseltemeye @  Cumle gencler mustaqdir. @  Sanli Veten!Sanli Veten!  @ Azerbaycan!Azerbaycan! @  Azerbaycan!Azerbaycan!";
//	string data;
//
//	while (!ss.eof()) {
//		ss >> data;
//		if (data == "@")
//		{
//			cout << endl;
//		}
//		else
//		{
//			cout << data<< " ";
//		}
//		Sleep(500);
//		
//	}
//
//
//}



#pragma endregion

#pragma region File Stream Simple

//void WriteToFile(const string& text, string path = "test.txt") {
//	ofstream fs(path, ios::app);
//	if (fs.is_open())
//	{
//		fs << " " << text;
//	}
//	else
//	{
//		throw string("File coldn't open...");
//	}
//	fs.close();
//}
//
//void ReadFromFile(string& text, string path = "test.txt") {
//	ifstream fs(path);
//	if (fs.is_open())
//	{
//		getline(fs, text);
//
//	}
//	else
//	{
//		throw string("File not fount...");
//	}
//	fs.close();
//}
//
//
//void main() {
//
//	string data = "";
//	try
//	{
//		ReadFromFile(data);
//		cout << "Kohne data" << data << endl;
//	}
//	catch (string ex)
//	{
//		cout << "Error: " << ex << endl;
//	}
//	cout << "Enter text: ";
//	getline(cin, data);
//	WriteToFile(data);
//
//
//}




#pragma endregion

#pragma region TASK

//class MyException {
//	string text;
//	int line;
//	string datetime;
//public:
//	MyException() {
//		this->text = "Unknown exception";
//		this->line = 0;
//		this->datetime = __DATE__;
//	}
//	MyException(string text, int line) {
//		this->text = text;
//		this->line = line;
//		this->datetime = __DATE__;
//	}
//
//	void what() {
//		cout << "Error Message: " << text << endl;
//		cout << "Line: " << line << endl;
//		cout << "Date: " << datetime << endl;
//	}
//
//
//
//
//
//};
//
//
//class Exception {};
//
//class DatabaseException :public MyException {
//public:
//
//};
//
//
//	
//
//class InvalidArgumentException :public Exception {};
//
//class User {
//	string username;
//	string password;
//	string name;
//	string surname;
//public:
//	
//	User() {};
//
//	User(string username, string password, string name, string surname) {
//		SetUsername(username);
//		SetPassword(password);
//		SetName(name);
//		SetSurname(surname);
//	}
//
//	void SetUsername(string Username) {
//		username = Username;
//	}
//
//	string GetUsername() {
//		return username;
//	}
//
//	void SetPassword(string Password) {
//		password = Password;
//	}
//
//	string GetPassword() {
//		return password;
//	}
//
//	void SetName(string Name) {
//		name = Name;
//	}
//
//	string GetName() {
//		return name;
//	}
//
//	void SetSurname(string Surname) {
//		surname = Surname;
//	}
//
//	string GetSurname() {
//		return surname;
//	}
//
//	void Show()const {
//		cout << "Username: " << username <<endl;
//		cout << "Password: " << password <<endl;
//		cout << "Name: " << name <<endl;
//		cout << "Surname: " << surname <<endl;
//
//	}
//};
//
//
//void main() {
//
//	try
//	{
//		throw MyException("Ureyim istedi",__LINE__);
//	}
//	catch (MyException ex)
//	{
//		ex.what();
//	}
//}




#pragma endregion


//
//void main() {
//
//	stringstream ss;
//	ss << "Aysen 19 Mahmud 45";
//
//	string name1, name2;
//	int age1, age2;
//
//	ss >> name1;
//	ss >> age1;
//
//	ss >> name2;
//	ss >> age2;
//
//	cout << " Name: " << name1 << endl;
//	cout << " Age: " << age1 << endl;
//	cout << " Name: " << name2 << endl;
//	cout << " Age: " << age2 << endl;
//
//
//
//}
//


#pragma region File with object

class Person {
public:
	string name;
	int age;
	Person() = default;
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}

	void Show() const {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}

};

class Database {
public:
	vector <Person> people;


	void AddPerson(Person person) {
		people.push_back(person);
	
	}

	void ShowPeople() {
		for (Person p : people)
		{
			cout << " = = = = = = = = = = = = " << endl;
			p.Show();
		}
	}

	void DeleteLastPerson() {
		people.pop_back();

	}

};

void WriteToFile(const vector <Person> & people   , string  path = "people.txt") {
	ofstream fs(path, ios::out);
	if (fs.is_open())
	{
		for (Person p : people)
		{
			fs << p.name << "#" << p.age << "\n";
		}
	}
	else
	{
		throw string("File coldn't open...");
	}
	fs.close();
}

void ReadFromFile(vector <Person> & people   , string  path = "people.txt") {
	ifstream fs(path);
	if (fs.is_open())
	{
		while (!fs.eof())
		{
			string row;
			getline(fs, row);
			int counter = 0;

			Person p;
			string str_age;

			for (char character : row)
			{
				if (character != '#' && counter == 0)
				{
					p.name += character;
				}
				else if (character != '#' && counter == 1)
				{
					str_age += character;
				}
				else {
					counter++;
				}
			}
			if (str_age.size() != 0)
			{
				p.age = stoi(str_age);
				people.push_back(p);
			}

		}
	
	}
	else
	{
		throw string("File not fount...");
	}
	fs.close();
}



void main() {
	Database db;
	try
	{
	
		ReadFromFile(db.people);
	}
	catch (string ex)
	{
		cout << ex << endl;
		WriteToFile(db.people);
	}




	int choice;

	do
	{
		cout << "\n\n1.Show People \n2.Add Person \n3.Delete last person \n0.Exit \nChoose: ";
		cin >> choice;
		if (choice == 1)
		{
			db.ShowPeople();
		}
		else if (choice ==2)
		{
			Person newPerson;
			cin.ignore();
			cout << "Name: ";
			getline(cin, newPerson.name);
			cout << "Age: ";
			cin >> newPerson.age;
			db.AddPerson(newPerson);
			WriteToFile(db.people);
		}
		else if (choice ==3)
		{
			db.DeleteLastPerson();
			WriteToFile(db.people);
		}
		else
		{
			if (choice == 0 )
			{
				cout << "Goodbye..." << endl;
			}
			else
			{
				cout << "Wrong Input" << endl;
			}
		}
	} while (choice!=0);

}




#pragma endregion









