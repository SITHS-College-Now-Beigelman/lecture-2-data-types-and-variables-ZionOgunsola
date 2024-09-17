//Zion Ogunsola
//Lecture 2 
//9/16/2024

#include <iostream> //Includes iostreams

#include <string> //
using namespace std ;
int main() //Begins code

{
string Astring = "Data Sets"; //Defines string as variable Astring which is equal to Data Sets
int Ainteger = 4; //Defines int as variable Ainteger which is equal to 4
float Afloatdecimal = 4.5; //Defines float as variable Afloatdecimal which is equal to 4.5
double Adoubledecimal = 4.50; //Defines double as variable Adoubledecimal which is equal to 4.50
char Achar1 = 'A';  //Defines char as Achar1 which is equal to A
char Achar2 = 'B'; //Defines char as Achar2 which is equal to A
bool Acomparison = true; //Defines bool as variable Acomparison  which is equal to true

cout <<"int = " << Ainteger << endl; //Outputs int and int value
cout <<"float = " << Afloatdecimal << endl; //Outputs float and float value
cout <<"double = " << Adoubledecimal << endl; //Outputs double and double value
cout <<"char = " << Achar1 << endl; //Outputs char and char value
cout <<"char = " << Achar2<< endl; //Outputs char and char value
cout <<"bool = " << Acomparison << endl; ///Outputs bool and bool value
cout <<"string = " << Astring << endl; //Outputs string and string value


cout <<"A<B = " << (Achar1<Achar2) <<endl; //Outputs comparison between A and B

cout <<"2+3.5 = " <<2+3.5 << endl; //Outputs expression and value of expression
cout <<"6 / 4 + 3.9 = " <<6/4+39 << endl; //Outputs expression and value of expression
cout <<"5.4 * 2 - (13.6 + 18 / 2) = " <<5.4 * 2 - (13.6 + 18 / 2) << endl;//Outputs expression and value of expression

cout <<"" << endl;
int inches; //variable to store total inches
inches = 100; //store 100 in variable inches

cout << inches << "inch(es) = "; //output the value of inches and the equal sign
cout << inches / 12 << "feet (foot) and "; //output maximum number of feet (foot)
cout << inches % 12 << "inch(es)" <<endl; //output the value of inches and the equal sign


    return 0; //Returns function to beginning
}