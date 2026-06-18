class Solution {
    public void g(int n,int l, int r, String s,List<String> k)
    {
        if(r == n)
        {
            k.add(s);
            return;
        }
        if(l < n)
        {
            g(n,l+1,r,s+"(",k);
        }
        if(r < l)
        {
            g(n,l,r+1,s+")",k);
        }
    }
    public List<String> generateParenthesis(int n) {
        List<String> l = new ArrayList<>();
        g(n,0,0,"",l);
        return l;
    }
}