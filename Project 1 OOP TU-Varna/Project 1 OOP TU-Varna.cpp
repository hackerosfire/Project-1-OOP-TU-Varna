// Project 1 OOP TU-Varna.cpp : Defines the entry point for the console application.
//

#include<iostream>
#include<string>
#include<vector>
#include<list>

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
	string GetFN()
	{
		return fn;
	}
	string GetDiscipline()
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

};

int main()
{
    return 0;
}

