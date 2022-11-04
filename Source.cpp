#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	ammar t1;
	char myname[10] = "ALI" ;

	t1.setname(myname);
	cout << t1.getname(myname) << endl;

	char * b = t1.getname(myname);
	delete[]b; // NOW IT WILL NOT DELETE THE ADDRESS OF  "myname" // 
	b = nullptr;

	cout << t1.getname(myname) << endl; //NOW, you can see only b is deleted but the returning nn address is not effected by this // 
	// SO, it is showing the perfect Answer // 

	system("pause");
	return 0;
}