#include<iostream>
#include<string>
using namespace std;
void logMsg ( const string &msg ,int level = 1)
{
    const string tag[] = {"INFO" , "WARNING" , "ERROR"};
    cout << "["<< tag [level]<<"]"<< msg << endl;
}
double interest (double principal, double year , double rate = 7.5)
{
    return( principal * rate * year )/100;
}
int main ()
{
    logMsg("system started");
    logMsg("low memory", 2);
    cout << "interest="<< interest (10000 , 2)<< endl;
    cout << "interest="<< interest (10000 , 2 , 9.5)<< endl;
    return 0;
}