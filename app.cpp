#include <iostream>
using namespace std;

class Stack{
public : 

    int count = 0;
    int stackArray[10]; 


    int add(int val){
        stackArray[count] = val;
        count++;
        return val;
    }

    void printAll(){
        for (int i = 0; i < count; i++)
        {
            cout << stackArray[i] << endl;
        }
    }

};


int main(){

    Stack* stack1 = new Stack();
    stack1->add(12);
    stack1->add(13);
    stack1->add(14);
    stack1->add(15);

    stack1->printAll();

    // cout << stack1->stackArray[2] <<endl;

}


// int main(){

//     int array[10];
//     int count = 2;
//     array[0] = 22;
//     array[1] = 33;
//     array[2] = 44;

//     cout << array[count] <<endl;

// }