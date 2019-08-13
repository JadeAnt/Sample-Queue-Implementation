#include <iostream>
using namespace std

#define MAX_SIZE 101

class Queue{

  private{
    int A[MAX_SIZE];
    int front = -1;
    int rear = -1;
    
  public{
  
    int Enqueue(int x){
      if ((rear + 1) % (rear - front) == front){
        cout << "Queue is full \n";
        return;
      }
      
      A[rear++] = x;
      
    }
    
    void Dequeue(){
      if(Isempty()){
        cout << "Queue is empty \n";
        return;
      }
    
      else{
        queue[front] = 0;
        front++;
      }
      
    }
    
    int front(){
      return A[front];
    }
    
    bool IsEmpty(){
      if(front == rear)
        return true;
      else
        return false;
    }
    
  }

}//Class Queue

Queue <int> Q; // Globally declared queue
  
int main(){

  // Input here to test queue

}
