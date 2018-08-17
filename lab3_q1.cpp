// introducing the library
#include<iostream>
using namespace std;
// write the main function

int main()
{ 
 //declaring integer type variable
 int a=2;
int b=4;
//add two numbers
int c=a+b ;
int q=a*b;
int w=a-b;
int e=a/b;
//print  integers
cout << "the sum is " c << endl;
cout << "the multiplication  is " q << endl;
cout <<"the difference is "  w << endl;
cout << "the quotient is " e << endl;
cout <<"the modulus is "<< a%b << endl;
//operations on floating/double type variable
float s=2.345;
float f= 5.898;
float x=s+f;
float v=s*f;
float n=s-f;
float m=s/f;
double DOUBLE1=s+f;
double DOUBLE2=s-f;
double DOUBLE3=s*f;
double DOUBLE4=s/f;

//printing results of float/double operations
cout << "the sum is " x << endl;
cout << "the multiplication  is "v << endl;
cout << "the difference  is " n << endl;
cout << "quotient  is " m << endl;
cout <<"the modulus is "<< s%f << endl;
cout << "the sum   is " DOUBLE1 << endl;
cout << "the multiplication " DOUBLE2 << endl;
cout << "the quotient   is " DOUBLE3 << endl;
cout << "the difference  is " DOUBLE4 << endl;

//operations on boleans
 bool r =(a==f);
cout << r << endl;
bool t=(q<f);
cout << t << endl;
bool y=(w<=e);
cout << y << endl;
// declaring characters 
 char u='s';
char var =u;
// finding remainders
 


cout <<"the size of integer "<<sizeof(int) << endl;
cout <<"the size of character "<<sizeof(char) <<endl;
cout <<"the size of float "<<sizeof(float)<<endl;
cout <<"the size of boolean type "<<sizeof(bool)<<endl;
cout <<"the size of double type "<<sizeof(double)<<endl;
cout <<"the modulus is "<< a%b << endl;








return 0;
}
