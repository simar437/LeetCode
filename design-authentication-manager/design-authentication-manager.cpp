class AuthenticationManager {
    const int time;
    map<string, int> m;
public:
    AuthenticationManager(int timeToLive) 
    :time{timeToLive} {}
    
    void generate(string&& tokenId, int currentTime) {
        m[tokenId] = currentTime;
    }
    
    void renew(string&& tokenId, int currentTime) {
        if (m.find(tokenId) == m.end() || (m[tokenId] + time <= currentTime))
            return;
        m[tokenId] = currentTime;
    }
    
    int countUnexpiredTokens(int currentTime) {
        return count_if(m.begin(), m.end(), [&] (const auto& x){
            return x.second + time > currentTime;
        });
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */