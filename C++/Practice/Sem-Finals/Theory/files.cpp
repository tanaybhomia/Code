#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream obj;
    obj.open("demofile",ios::app);
    obj<<"\n";
    obj<<"Appended the Text";
    obj.close();
    obj.open("demofile",ios::trunc);
    obj.close();
    return 0;
}