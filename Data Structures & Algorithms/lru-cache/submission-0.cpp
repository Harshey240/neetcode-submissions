class LRUCache {
private:
    unordered_map<int,int> um;
    int capacity;
    list<int> order;
public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
    
    int get(int key) {
        if(um.find(key) != um.end())
        {
            auto it = find(order.begin(),order.end(),key);
            order.erase(it);
            order.push_back(key);
            return(um[key]);
        }
        else
        {
            return(-1);
        }
    }
    
    void put(int key, int value) {
        if(um.find(key) != um.end())
        {
            auto it = find(order.begin(),order.end(),key);
            order.erase(it);
        }
        um[key]=value;
        order.push_back(key);
        if(um.size()>capacity)
        {
            um.erase(order.front());
            order.pop_front();
        }
    }
};
