#include <iostream>
using namespace std;
class student
{
    private:
    void getinfo()
    {
        cout<<"Enter the Roll Number for the student";
        cin>>roll;
    }
    public:
    int roll;
    void displayinfo()
    {
        getinfo();
        cout<<"Roll number of the student is ="<<roll;
    }
};
int main()
{
    student obj;
    obj.displayinfo();
    return 0;
}