#include <iostream>
using namespace std;
 
void countOut(int count)
{
    cout << "push " << count<<" ";
 
    if (count > 1) // условие завершения 
        countOut(count-1);
 
    cout << "pop " << count<<" " ;
}
 
int main()
{
    countOut(4);
    return 0;
}