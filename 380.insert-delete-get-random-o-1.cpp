/*
 * @lc app=leetcode id=380 lang=cpp
 *
 * [380] Insert Delete GetRandom O(1)
 */

// @lc code=start
class RandomizedSet {
public:
    unordered_set <int>u;
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(u.find(val)==u.end()){
            u.insert(val);
            return true;}
        else
            return false;
    }
    
    bool remove(int val) {
        if(u.find(val)!=u.end()){
            u.erase(val);return true;}
        return false;
    }
    
    int getRandom() {
        int size = u.size();
        int random = rand() % size;            
        
        auto it = u.begin();
        advance(it, random);

        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
// @lc code=end

