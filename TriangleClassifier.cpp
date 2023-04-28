/*
 * This program will ask the user to input the 3 side lengths of a triangle, and will then determine if the triangle satisfies the triangle
 * inequality. If the side lengths satisfy the theorem, the program will determine of the triangle's area, perimeter, and will classify
 * the triangle as an acute, obtuse, or right triangle and will output the results to the user. <br>
 * @author Nicholas Gendron
 * <pre>
 * CSC 1253 Project #1 Section #1 <br>
 * Date: 2-15-2021
 * File: TriangleClassifier.cpp
 * Instructor: Dr. Duncan
 * </pre>
 */


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double sideA,sideB,sideC;
	cout << "Enter the sides of a triangle -> " << " ";
	cin >> sideA >> sideB >> sideC;

if (sideA<sideB+sideC && sideB<sideA+sideC && sideC<sideA+sideB)
{

	cout << setprecision(3) << fixed << "Side A = " << sideA << right << "  Side B = " << sideB << "  Side C = " << sideC << endl;
	cout << setprecision(3) << fixed << "Perimeter = " << sideA+sideB+sideC << endl;
	cout << setprecision(3) << fixed;
	cout << "Area = ";
	cout << sqrt(((sideA+sideB+sideC)/2)*(((sideA+sideB+sideC)/2)-sideA)*(((sideA+sideB+sideC)/2)-sideB)*(((sideA+sideB+sideC)/2)-sideC)) << endl;

	if (sideA>sideC)
	{
		if (sideA>sideB) //where A>B>C
		{
			if ((sideA*sideA)<(sideB*sideB)+(sideC*sideC))
			{
				cout << sideC << "^2 + " << sideB << "^2 > " << sideA << "^2" << endl;
				cout << "It is an acute triangle." << endl;
			}
			else if((sideA*sideA)>(sideB*sideB)+(sideC*sideC))
			{
				cout << sideC << "^2 + " << sideB << "^2 < " << sideA << "^2" << endl;
				cout << "It is an obtuse triangle." << endl;
			}
			else
			{
				cout << sideC << "^2 + " << sideB << "^2 = " << sideA << "^2" << endl;
				cout << "It is a right triangle." << endl;
			}
		}
		else //where B>A>C
		{
			if ((sideB*sideB)<(sideA*sideA)+(sideC*sideC))
			{
				cout << sideC << "^2 + " << sideA << "^2 > " << sideB << "^2" << endl;
				cout << "It is an acute triangle." << endl;
			}
			else if ((sideB*sideB)>(sideA*sideA)+(sideC*sideC))
			{
				cout << sideC << "^2 + " << sideA << "^2 < " << sideB << "^2" << endl;
				cout << "It is an obtuse triangle." << endl;
			}
			else
			{
				cout << sideC << "^2 + " << sideA << "^2 = " << sideB << "^2" << endl;
				cout << "It is a right triangle." << endl;
			}
		}
	}
	else
	{
		if (sideC>sideB) //where C>B>A
		{
			if((sideC*sideC)<(sideB*sideB)+(sideA*sideA))
			{
				cout << sideA << "^2 + " << sideB << "^2 > " << sideC << "^2" << endl;
				cout << "It is an acute triangle." << endl;
			}
			else if((sideC*sideC)>(sideB*sideB)+(sideA*sideA))
			{
				cout << sideA << "^2 + " << sideB << "^2 < " << sideC << "^2" << endl;
				cout << "It is an obtuse triangle." << endl;
			}
			else
			{
				cout << sideA << "^2 + " << sideB << "^2 = " << sideC << "^2" << endl;
				cout << "It is a right triangle." << endl;
			}
		}
		else //where B>C>A
		{
			if ((sideB*sideB)<(sideC*sideC)+(sideA*sideA))
			{
				cout << sideA << "^2 + " << sideC << "^2 > " << sideB << "^2" << endl;
				cout << "It is an acute triangle." << endl;
			}
			else if((sideB*sideB)>(sideC*sideC)+(sideA*sideA))
			{
				cout << sideA << "^2 + " << sideC << "^2 < " << sideB << "^2" << endl;
				cout << "It is an obtuse triangle." << endl;
			}
			else
			{
				cout << sideA << "^2 + " << sideC << "^2 = " << sideB << "^2" << endl;
				cout << "It is a right triangle." << endl;
			}

		}
	}

}
else
{
	cout << setprecision(0) << fixed << "**" << sideA << ", " << sideB << ", and " << sideC << " do not satisfy the triangle inequality.**" << endl;
}
	return(0);
}

