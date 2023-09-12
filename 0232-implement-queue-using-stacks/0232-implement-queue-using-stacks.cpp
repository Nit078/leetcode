class MyQueue {
public:
    stack <int> input;
    stack <int> output;
    MyQueue() {
        
    }
    
    void push(int x) {
       input.push(x); 
    }
    
    int pop() {
      if(output.empty()==false){
          int temp=output.top();
          output.pop();
          return temp;
      }  
        else{
            while(input.empty()==false){
                int temp=input.top();
                input.pop();
                output.push(temp);
                
            }
           
        return pop();
        }
    }
    
    int peek() {
        if(output.empty()==false){
            
            return output.top();
          
            
      }
    
        else{
            while(input.empty()==false){
                int temp=input.top();
                     input.pop();
                output.push(temp);
               
            }
          
        
        return peek();  
    }
    }
    
    bool empty() {
       if(input.size()==0 && output.size()==0 )
           return true;
        else
            return false;
    }
   
     
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */