//https://www.interviewbit.com/problems/minimum-characters-required-to-make-a-string-palindromic/

int Solution::solve(string A) {
    int n=A.length();
    int match=1;
    for(int i=1;i<n;i++){
        int low =i-1,high=i;
        while(low>=0 && high<n && A[low]==A[high]){
            low--;
            high++;
        }
        if(low==0 && A[low]==A[high]) match=high-low+1;
        low==i-1,high=i+1;
        while(low>=0 && high<n && A[low]==A[high]) low--,high++;
        if(low==0 && A[low]==A[high]) match=high-low+1;
    }
    return n-match;
}
