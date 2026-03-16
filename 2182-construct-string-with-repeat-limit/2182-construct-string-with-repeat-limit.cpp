class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {

        unordered_map<char,int> mp;

        for(char c : s)
            mp[c]++;

        priority_queue<pair<char,int>> pq;

        for(auto x : mp)
            pq.push({x.first, x.second});

        string result="";

        while(!pq.empty()){

            auto top = pq.top();
            pq.pop();

            char largest = top.first;
            int freq = top.second;

            int len = min(freq, repeatLimit);

            for(int i=0;i<len;i++)
                result += largest;

            if(freq - len > 0){

                if(pq.empty())
                    return result;

                auto seclargest = pq.top();
                pq.pop();

                result += seclargest.first;

                if(seclargest.second - 1 > 0)
                    pq.push({seclargest.first, seclargest.second - 1});

                pq.push({largest, freq - len});
            }
        }

        return result;
    }
};