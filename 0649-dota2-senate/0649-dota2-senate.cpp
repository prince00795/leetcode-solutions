class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>q;
        queue<int>r;
        queue<int>d;

        for(int i=0;i<senate.length();i++){
            if(senate[i]=='R') r.push(i);
            else d.push(i);
            q.push(i);

        }
          
        while(r.size()>0 && d.size()>0){
            if(senate[q.front()]=='X') {
                q.pop();
                continue;
            }

            if(senate[q.front()]=='R') {
                senate[d.front()]='X';
                d.pop();
                q.push(q.front());
                q.pop();
                 r.push(r.front());
                r.pop();

            }
            else{
                senate[r.front()]='X';
                r.pop();
                q.push(q.front());
                q.pop(); 
                d.push(d.front());
                d.pop();
            }
            
        }

        if(r.size()==0) return "Dire";
        else return "Radiant";



        
    }
};