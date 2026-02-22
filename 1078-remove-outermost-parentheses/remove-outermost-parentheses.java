class Solution {
    public String removeOuterParentheses(String s) {
        Stack<Character> st = new Stack<>();
        String res = "";
        for(int i = 0;i < s.length();i++)
        {
            char c = s.charAt(i);

            if(c == '(')
            {
                if(!st.isEmpty())
                {
                    res += '(';
                }
                st.push(c);
            }

            else if(c == ')')
            {
                st.pop();
                if(!st.isEmpty())
                {
                    res += ')';
                }
            }
        }

        return res;
    }
}