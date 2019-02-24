// Project 1 OOP TU-Varna.cpp : Defines the entry point for the console application.
//

#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<fstream>

using namespace std;
class Student
{
private:
	string fn;
	string disciplineName;
public:
	static string originalDisciplineName;
	Student()
	{
		fn = "12362171";
		disciplineName = "OOP";
		originalDisciplineName = disciplineName;
	}
	Student(string inputFN,string inputDiscipline)
	{
		fn = inputFN;
		disciplineName = inputDiscipline;
		originalDisciplineName = disciplineName;
	}
	string GetFN()const
	{
		return fn;
	}
	string GetDiscipline()const
	{
		return disciplineName;
	}
	void SetFN(string inputFN)
	{
		fn = inputFN;
	}
	void SetDiscipline(string inputDiscipline)
	{
		disciplineName = inputDiscipline;
	}
	static bool CompareStudent(const Student &inputStudent)
	{
		if (originalDisciplineName.compare(inputStudent.GetDiscipline())==0)
		{
			return 1;
		}
		return 0;
	}
	Student& Student::operator=(const Student& inputStudent)
	{
		fn = inputStudent.GetFN();
		disciplineName = inputStudent.GetDiscipline();
	}
	bool operator<(const Student& inputStudent)
	{
		if (fn<inputStudent.GetFN()==true && disciplineName<inputStudent.GetDiscipline() == true)
		{
			return true;
		}
		return false;
	}
	friend istream& operator>>(istream &toStream,Student &inputStudent)
	{
		cout << "Input fn:" << endl;
		toStream >> inputStudent.fn;
		cout << "\nInput discipline" << endl;
		toStream >> inputStudent.disciplineName;
		return toStream;
	}
	friend ostream& operator<<(ostream &toStream,Student &inputStudent)
	{
		cout << "Name:" << endl;
		toStream << inputStudent.fn;
		cout << "\nDiscipline" << endl;
		toStream << inputStudent.disciplineName;
		return toStream;
	}
};
class Discipline
{
private:
	string semester;
	vector<Student>a;
	vector<Student>b;
	vector<Student>c;
	vector<Student>d;
	list<Student>disciplines;
	Discipline(string inputFile)
	{
		string name;
		ifstream myfile(inputFile);
		getline(myfile, name);
		string data;
		const string delim = " ";
		string FN;
		string DISCIPLINE;
		int counter = 0;
		try {
			while (getline(myfile, data, ' '))
			{
				if (counter % 2 == 0) {
					FN = data;
				}
				else {
					DISCIPLINE = data;
					Student zapis = Student(FN, DISCIPLINE);
					disciplines.push_back(zapis);
				}
				counter++;
			}
		}
		catch (ifstream::failure e) 
		{
			std::cerr << "Exception opening/reading/closing file\n";
		}
	}
};

int main()
{
    return 0;
}

