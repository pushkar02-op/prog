#include<iostream>
#include<string>
using namespace std;
class stack {
    private:
        int top;
        int arr[5];
    public:
        stack(){
            
            top=-1;
            for(int i=0; i<5; i++){
                arr[i]=0;
            }
        }
        bool isEmpty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }
        bool isFull(){
            if(top==4){
                return true;
            }
            else
            {
                return false;
            }
        }
        void push(int val){
            if(isFull()){
                cout<<"The stack is full\n";
            }
            else{
                top++;
                arr[top]=val;
            }
        }
        int pop(){
             if(isEmpty()){
                cout<<"stack is Empty\n";
                return 0;
            }
            else{
                int popval;
                popval= arr[top];
                arr[top]=0;
                top--;
                return popval;
            }
        }
        int count(){
            int num=top+1;
            return num;
        }
        void display(){
            for(int i=0; i<5; i++){
                cout<<arr[i]<<" ";
            }
        }
        void change(int item, int posi){
            arr[posi]=item;
        }
        void peek(int posi){
           cout<< arr[posi]<<endl;
        }

};



int main(){
    stack s1;
    stack();
    int exp,value,position;
    do{
        cout<<"Enter 1 for push\n";
        cout<<"Enter 2 to pop\n";
        cout<<"Enter 3 to count\n";
        cout<<"Enter 4 to Display\n";
        cout<<"Enter 5 to change the  item at index\n";
        cout<<"enter 6 to peek\n";
        cin>>exp;
        switch (exp)
        {
        case 1:
            cout<<"Enter your item to push";
            cin>>value;
            s1.push(value);
            break;
        case 2:
            value=s1.pop();
            cout<<value<<endl;
            break;
        case 3:
            value=s1.count();
            cout<<value<<endl;
            break;
        case 4:
            s1.display();
            cout<<endl;
            break;
        case 5:
            cout<<"Enter the intem and index to change\n";
            cin>>value>>position;
            s1.change(value, position);
            break;
        case 6:
            cout<<"Enter the index to peek\n";
            cin>>position;
            s1.peek(position);
            break;
        default:
            
            break;
        }
        

    }while(exp!=0);



   
return 0;
}