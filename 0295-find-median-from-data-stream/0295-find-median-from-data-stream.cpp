class MedianFinder {
public:
    priority_queue<int>left;
    priority_queue<int,vector<int>,greater<int> >right;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(left.size()==0 || num<left.top() ) left.push(num);
           else  right.push(num);
         
        if(left.size()>right.size()+1) {
            int x=left.top();
            left.pop();
            right.push(x);
        }
        if(right.size()>left.size()+1) {
            int x=right.top();
            right.pop();
            left.push(x);
        }
        
    }
    
    double findMedian() {
       
       if(right.size()==left.size()) return (right.top()+left.top())/2.0;
       else{
        if(right.size()<left.size()) return left.top();
        else return right.top();

       }

    }
};

 