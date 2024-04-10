class Solution {

public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        int n = tickets.size();
        while(true)
        {
            for(int i = 0;i<n;i++)
            {
                if(tickets[i] == 0) 
                {
                    continue;
                }
                else 
                {
                tickets[i]--;
                time++;
                if(tickets[k] == 0 ) break;
                }
            }
            if(tickets[k] == 0) break;
        }
        return time;
    }
};
    