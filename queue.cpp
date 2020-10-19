#include<iostream>
#include<string>
using namespace std;
class queue{
    private:
        int front, rear;
        int arr[5];
    public:
        queue(){
            front=-1;
             rear=-1;
            for(int i=0; i<5; i++){
                arr[i]=0;
            }
        }
        bool isEmpty(){
            if(front==-1 && rear==-1){
                return true;
            }
            else{
                return false;
            }
        }
        bool isFull(){
            if(rear==4){
                return true;
            }
            else
            {
                return false;
            }
        }
        void enqueue(int val){
            if(isFull()){
                cout<<"Queue is Full\n";
            }
            else{
                rear++;
                arr[rear]=val;
            }
        }
        int dequeue(){
            if(isEmpty()){
                cout<<"Queue is Empty\n";
                return 0;
            }
            else if (front==rear)
            {
                int value=arr[front];
                arr[front]=0;
                rear=-1;
                front=-1;
                return value;
            }
            else{
                int value=arr[front];
                arr[front]=0;
                front--;
                return value;
            }
        }
        void display(){
            for(int i=0; i<5; i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
};


int main(){
    queue q1;
    int option, value;
    do{
        cout<<"Enter 1 to enqueue\n";
        cout<<"Enter 2 to dequeue\n";
        cout<<"Enter 3 to display\n";
        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"Enter number in queue\n";
            cin>>value;
            q1.enqueue(value);
            break;
        case 2:
            int deq=q1.dequeue();
            cout<< deq<<endl;
            break;
        case 3:
            q1.display();
            break;
        default:
            cout<<"option Invalid";
            break;
        }
    } while(option!=0);
    
    return 0;
}