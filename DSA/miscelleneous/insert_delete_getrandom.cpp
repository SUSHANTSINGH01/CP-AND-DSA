class RandomizedSet {
public:
    set<int>st;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        
        if(st.find(val)==st.end())
        {
            st.insert(val);
            return 1;
        }
        else
        return 0;
    }
    
    bool remove(int val) 
    {
        if(st.find(val)!=st.end())
        {
            st.erase((val));
            return 1;
        }
        else
        return 0;
    }
    
    int getRandom() 
    {
       
        int r=rand()%st.size();
        auto it=st.begin();
        
        while(r--)
            it++;
        
        return *it;
    }
    
};
