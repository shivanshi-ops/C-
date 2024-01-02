//Create a program that calculates the area of a rectangle using user input for length and width.
#include<iostream>
using namespace std;
int main()
{
    double len, width;
    cout<<"Enter Length: ";
    cin>>len;
    cout<<"Enter width :";
    cin>>width;
    double area = len * width;
    cout<<"The area of rectangle is "<<area;

}