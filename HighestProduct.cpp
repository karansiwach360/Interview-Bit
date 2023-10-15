int Solution::maxp3(vector<int> &A) {
    int ans=INT_MIN;
    sort(A.begin(),A.end());
    int neg=0,zero=0,pos=0,n=A.size();
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<0) neg++;
        if(A[i]==0) zero++;
        if(A[i]>0) pos++;
    }
    if(zero>0) ans=0;
    if(n<3) return ans;
    ans=max(ans,A[0]*A[1]*A[n-1]);
    ans=max(ans,A[n-1]*A[n-2]*A[n-3]);
    return ans;
}
