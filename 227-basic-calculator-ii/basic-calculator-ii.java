class Solution {
    public int calculate(String s)
    {
        Stack<Integer> st1 = new Stack<>();
        char sign = '+';
        long n = 0;

        for(int i = 0;i < s.length();i++)
        {
            char c = s.charAt(i);

            if(Character.isDigit(c))
            {
                n = n*10+(c-'0');
            }

            if((!Character.isDigit(c) && !Character.isWhitespace(c)) || i == s.length() - 1)
            {
                if(sign == '+') st1.push((int)n);

                else if (sign == '-') st1.push((int)(-n));
                else if (sign == '*') st1.push(st1.pop()*(int)(n));
                else if (sign == '/') st1.push(st1.pop()/(int)(n));

                sign = c;
                n = 0;
            }

        }

        int res = 0;
        while(!st1.isEmpty())
        {
            res += st1.pop();
        }
        return res;
    }
}