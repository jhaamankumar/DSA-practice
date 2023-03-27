class solution{
    int changeUtil(vector<int>& coins,int n,int amount){
       if(amount==0) return 1; 
       if(amount<0 || (n<=0 && amount>=1))
       return 0;
       return changeUtil(coins,n,amount-coins[n-1])+chengeUtil(coins+1,n+1,amount);
    }
    int change(int amount,vector<int>& coin){
        return changeUtil(coins,coin.size(),amount);
    }
}