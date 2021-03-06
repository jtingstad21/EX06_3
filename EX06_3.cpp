// EX06_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int year, rank, bscore, gscore;
	char ch;
	string name, bname, gname, filename;
	cout << "enter year" << endl;
	cin >> year;
	switch (year)
	{
	case 2001: filename = "2001.txt";
		break;
	case 2002: filename = "2002.txt";
		break;
	case 2003: filename = "2003.txt";
		break;
	case 2004: filename = "2004.txt";
		break;
	case 2005: filename = "2005.txt";
		break;
	case 2006: filename = "2006.txt";
		break;
	case 2007: filename = "2007.txt";
		break;
	case 2008: filename = "2008.txt";
		break;
	case 2009: filename = "2009.txt";
		break;
	case 2010: filename = "2010.txt";
		break;
	default: cout << "invalid year" << endl;
		return 0;
	}

	cout << "enter gender: " << endl;
	cin >> ch;
	cout << "enter name: " << endl;
	cin >> name;


	ifstream input(filename.c_str());
	/*if (input.fail())
	{
		cout << filename << " file does not exist" << endl;
		return 0;
	}*/

	if (!input.eof())
	{
		while (!input.eof())
		{
			input >> rank >> bname >> bscore >> gname >> gscore;
			
			if (ch == 'm' || ch == 'M')
			{
				if (name == bname)
				{
					cout << name << " is ranked #" << rank << " in year " << year << endl;
					return 0;
				}
			}
			else 
			{
				if (name == gname)
				{
					cout << name << " is ranked #" << rank << " in year " << year << endl;
					return 0;
				}
			}
		}
	}

	input.close();

	return 0;
}

