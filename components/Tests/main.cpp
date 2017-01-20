#include <Definitions.h>
#include <CustomTypes.h>
#include <Memallocator.h>
#include <Array.h>

struct Person {
    byte age;
    //byte height;
};

int main(int argc,  char** argv) {


    Array<Person, Memallocator> arr(10);
    
    arr[0].age = 26;
    arr[9].age = 26;


    Array<Person, Memallocator> arr2(10);


    arr2[0].age = 123;
    arr2[9].age = 123;

    Memallocator mem;

    {
        Array<Person, Memallocator> arr3(300);
        arr3[0].age = 99;
        arr3[9].age = 99;

        mem.deallocate(&arr3);
    }

    

    mem.printTilNext();
    mem.defragment();
    mem.printTilNext();



    return 0;
}