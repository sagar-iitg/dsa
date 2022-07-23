class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        
     vector<int> v;
     unordered_map <int,int> mp;
     priority_queue< pair<int,int>,vector< pair<int,int>>,greater< pair<int,int>>> minh;
        
        
        for(auto &val:nums)
        {
             mp[val]++;
        }
        
        for(auto &eachFreq:mp)
        {
            
            if(minh.size()<k){
                minh.push({eachFreq.second,eachFreq.first}); 
            }
           
            else
                {
                   
                    if(eachFreq.second>minh.top().first){
                        minh.pop();
                        minh.push({eachFreq.second,eachFreq.first});
                    }
                }
        }
        
        
        
        
        
        
        
        
        
        
        
        
           
        
        while(!minh.empty())
        {
            v.push_back(minh.top().second);
                minh.pop();
        }
        
        return v;
    }
};