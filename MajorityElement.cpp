int Solution::majorityElement(const vector<int> &A) {
    srand(time(0));
    int n=A.size();
    while(true)
    {
        int idx=abs(rand())%n;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(A[i]==A[idx])
            {
                cnt++;
            }
            if(cnt>(n/2)) break;
            if(cnt+(n-1-i)<=(n/2)) break;
        }
        if(cnt>(n/2)) return A[idx];
    }
}
