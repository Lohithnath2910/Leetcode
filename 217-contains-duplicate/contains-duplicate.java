class Solution {
    public boolean containsDuplicate(int[] nums) 
    {
        HashMap<Integer,Integer> h = new HashMap<>();
        for(int i : nums)
        {
            h.put(i, h.getOrDefault(i,0) + 1);
        }

        for(Map.Entry<Integer,Integer> m : h.entrySet())
        {
            if(m.getValue() > 1)
            {
                return true;
            }
        }

        return false;
    }
}