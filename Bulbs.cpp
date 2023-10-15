int Solution::bulbs(vector<int> &A) {
    int chk=0;
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        if((A[i]+chk)%2==1) continue;
        else
        {
            chk++;
            ans++;
        }
    }
    return ans;
}
