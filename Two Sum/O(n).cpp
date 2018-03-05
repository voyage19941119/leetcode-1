    //把问题转化为，对于nums中的每一个数，寻找target-nums[i],而unordered_map的时间复杂度是常数级
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;    
        //ｋｅｙ值是nums中的数，　value值是其对应nums中的下标
        unordered_map<int,int> m;
        for(int i=0; i<nums.size(); i++)
        {
            int v = target-nums[i];
            if(m.find(v)!=m.end())
            {
                res.push_back(m[v]);
                res.push_back(i);
            }
            //放在后面，避免某个数加上自己等于target
            m[nums[i]]=i;
        }
        return res; 
    }
};
