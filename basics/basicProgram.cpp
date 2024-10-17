/*
THIS IS HOW THE new OPERATOR WORKS IRL.
ONLY, INSTEAD OF USING THE STANDARD ONE, IT WILL USE THE ONE I CREATED

*/

#include <iostream>
using namespace std;

void* operator new(size_t size){
    cout << "Allocating " << size << " bytes" << endl;
    return malloc(size); // -> allocate the size in the heap
}

struct Object{
    int x, y, z;
};

int main(){ 
    // string name = "Jose";

    Object *obj = new Object;

}