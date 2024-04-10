 sort(deck.begin(),deck.end());
        vector<int> ans(deck.size());
        queue<int> qt;

        int n = deck.size();

        for(int i = 0 ;i<n;i++)
        {
            qt.push(i);
        }
        for(int i =0;i<n;i++)
        {
            ans[qt.front()] = deck[i];
            qt.pop();
            if(!qt.empty())
            {
                qt.push(qt.front());
                qt.pop();
            }
  
        } 
  return ans;