//Allocating & Initializing Lists

#include <iostream>
#include <list>
#include <iterator>

using namespace std;

const int MAX_ITEMS = 10;
list<int>::iterator iter;
list<int>::iterator sIter;

void loadList1();					//function for loading empty list
void loadList2();					//function for loading list with fill constructor
void loadList3();					//function for loading with initializer list
void loadList4();					//function for loading from another list
void showList(list<int> listEx);    //function for printing the elements in a list 

int main() {
  
	cout << "* * * Allocating Lists * * *\n";
	loadList1();
	loadList2();
	loadList3();
	loadList4();
	
	cout << "\nEnd of Program";
	return 0;
}
void showList(list<int> listEx) 
{ 
    for(iter = listEx.begin(); iter != listEx.end(); ++iter) 
        cout  << *iter << ' ' ; 
    
    cout << '\n'; 
}
void loadList1()
{
	list<int> list1;
	for (int load_Idx = 1; load_Idx <= MAX_ITEMS; load_Idx++)
	{
		list1.push_back(load_Idx);
	}
    cout << "\nList 1 - Empty List: ";
    showList(list1);
}
void loadList2()
{
	list<int> list2(10, 21);
    cout << "\nList 2 - Fill Constructor: ";
    showList(list2);
}
void loadList3()
{
	list<string> list3({"Malachite", "Gamboge", "Razzmatazz"});
	cout << "\nList 3 - Initializer List: ";
    for (list<string>::iterator i=list3.begin(); i!=list3.end(); i++) 
       cout << *i << " ";
    cout << endl; 
}
void loadList4()
{
	int arrList[] = {21, 22, 23, 24, 25} ;
    const int ARR_COUNT = 5;
    list<int> list4;
    for(int idx = 0; idx <ARR_COUNT; idx++)
    {     list4.push_back(arrList[idx]);  }
    cout << "\nList 4 - Array list: " ;
    showList(list4);
}