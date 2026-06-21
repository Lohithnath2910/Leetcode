class Solution {
    public List<Integer> majorityElement(int[] nums) {
        List<Integer> l = new ArrayList<>();

        int c1 = 0,c2 = 0;
        int cn1 = 0,cn2 = 0;

        for(int x : nums)
        {
            if(x == c1)
            {
                cn1++;
            }
            else if(x == c2)
            {
                cn2++;
            }
            else if(cn1 == 0 && x != c1)
            {
                c1 = x;
                cn1 = 1;
            }
            else if(cn2 == 0 && x != c2)
            {
                c2 = x;
                cn2 = 1;
            }
            else
            {
                cn1--;
                cn2--;
            }
        }

        cn1 = 0;
        cn2 = 0;
        for(int x : nums)
        {
            if(c1 == x)
            {
                cn1++;
            }
            else if(c2 == x)
            {
                cn2++;
            }
        }
        if(cn1 > nums.length/3) l.add(c1);
        if(cn2 > nums.length/3) l.add(c2);

        return l;
    }
}