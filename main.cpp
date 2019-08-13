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
      if ((rear + 1) % (rear - front) == front)
        return;
 
      A[rear] = x;
      rear++;
    }
    
    void Dequeue(){
      if(Isempty())
        return;
    
      else{
        queue[front] = 0;
        front++;
      }
      
    }
    
    int front(){
      return A[front];
    }
    
    bool Isempty(){
      if(front == rear)
        return true;
      else
        return false;
    }
    
  }

}//Class Queue


int main(){

  // Input here to test queue

}
