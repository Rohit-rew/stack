#include <iostream>
using namespace std;

class Stack{
public : 

    int count = 0;
    int stackArray[10]; 

    int push(int val){
        if(!isFull()){
            stackArray[count] = val;
            count++;
            return val;
        }else {
            return -1;
        }
    }

    int pop(){
        int removedVal = stackArray[count-1];
        stackArray[count] = NULL;
        count--;
        return removedVal;
    }

    int heaVal(){
        return stackArray[count-1];
    }

    bool isFull(){
        if(count == 10){
            return true;
        }else{
            return false;
        }
    }

    bool isEmpty(){
        if(count==0){
            return true;
        }else{
            return false;
        }
    }

    int count (){
        return count;
    }

    int printAll(){
        for (int i = 0; i < count; i++)
        {
            cout << stackArray[i] << endl;
        }
        
    }

};


int main(){

    Stack* stack1 = new Stack();
    stack1->push(12);
    stack1->push(13);
    stack1->push(14);
    stack1->push(15);
    stack1->push(16);
    stack1->push(17);

    cout << "Removed val : " << stack1->pop() << endl;
    cout << "Head val : " << stack1->heaVal() << endl;

}


