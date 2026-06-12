class Solution {
    public String longestCommonPrefix(String[] strs) {
        String f = strs[0];

        for(String s : strs)
        {
            while(!s.startsWith(f))
            {
                f = f.substring(0,f.length() - 1);
                if(f.isEmpty()) return "";
            }
        }
        return f;
    }
}