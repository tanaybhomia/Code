#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream obj;
    obj.open("file1.txt",ios::app);
    obj<<"I Live in Wada";
    obj<<"I am Planning to move out of here";
    obj.close();
    return 0;
}
