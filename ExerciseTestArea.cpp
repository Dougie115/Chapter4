/*
Book: C++ Programming
Author:D.S Malik
Chapter 4 Exercise 5
Code by:Douglas J Lopez
Ready to run on ExerciseTestArea.cpp
Just copy txt files and run.
*/

#include<cmath>
#include<iostream>
#include <string> 
#include <iomanip>

using namespace std;

int main()
{
    //Variable declaration
    double length1,length2,length3;
    
    //Output
    cout<<endl;
    cout<<"It is possible to determine if a triangle is a right triangle  using \nPythagoras' theorem."<<endl;
    cout<<"If the squares of the two shorter sides add up to the square of the \nhypotenuse, the triangle is a right triangle.\n";
    cout<<"This program will determine a right triangle if the 3 sides are provided.\n"<<endl;
    cout<<"Please enter the length of the 3 sides of the triangle: ";

    //User Input
    cin>>length1>>length2>>length3;
    cout<<endl;

    //We give temporary names to the operation of the different sides squared and added.
    double temp;
    temp = (pow(length2,2)) + (pow(length3,2));

    double temp2;
    temp2 = (pow(length1,2)) + (pow(length3,2));

    double temp3;
    temp3 = (pow(length1,2)) + (pow(length2,2));

    /*
    Using if statements we can determine if any of the sides entered, in no particular order, will
    provide us with a right triangle
    */

    if (pow(length1,2) == temp)
    {
        
        cout<<"This is a right triangle!"<<endl;
        cout<<endl;
        
    }
    
    else if (pow(length2,2) == temp2)
    {
        
        cout<<"This is a right triangle!"<<endl;
        cout<<endl;
        
    }

    else if (pow(length3,2) == temp3)
    {
        
        cout<<"This is a right triangle!"<<endl;
        cout<<endl;
        
    }
    
    /*
    If none of the three numbers give us the desired result, not a right triangle message is displayed.
    */

    else 
    {
        cout<<"This is not a right triangle!"<<endl;
        cout<<endl;
    }

    return 0;
    
}