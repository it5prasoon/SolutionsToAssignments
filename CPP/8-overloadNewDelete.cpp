#include<iostream>
using namespace std;

class CustomMemory{

public: 
	void* operator new(size_t objectSize);//Overloaded new 
	void operator delete(void* ptr); //Overloaded delete
};

void* CustomMemory::operator new(size_t objectSize)
{
	cout<<"Custom memory allocation"<<endl;
	return malloc(objectSize);

}
void CustomMemory::operator delete(void* ptr)
{
	cout<<"Custom memory de- allocation"<<endl;
	free(ptr);
}


int main(){
	CustomMemory *obj = new CustomMemory();
	delete obj;
}

/* 
Output:
Custom memory allocation
Custom memory de- allocation 
*/
