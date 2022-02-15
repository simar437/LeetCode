class Bank {
    vector<long long>& balance;
    const size_t length;
    bool check(const int account) const {
        return account - 1 >= length;
    }
public:
    Bank(vector<long long>& _balance) 
    :balance{ _balance }, length{ size(balance) } {}
    
    bool transfer(int account1, int account2, long long money) {
        if (check(account1) || check(account2))
            return false;
        return withdraw(account1, money) && deposit(account2, money);
    }
    
    bool deposit(int account, long long money) {
        if (check(account))
            return false;
        balance[account - 1] += money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if (check(account) || balance[account - 1] < money)
            return false;
        balance[account - 1] -= money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */