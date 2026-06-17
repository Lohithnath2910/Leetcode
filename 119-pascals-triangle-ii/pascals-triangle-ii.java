class Solution {
    public List<Integer> getRow(int numRows) {
        if(numRows == 0)
        {
            return new ArrayList<>(Arrays.asList(1));
        }
        else if(numRows == 1)
        {
            return new ArrayList<>(Arrays.asList(1,1));
        }

        List<List<Integer>> l = new ArrayList<>();

        for(int i = 0;i <= numRows;i++)
        {
            int temp = 0;
            l.add(new ArrayList<>());
            while(temp <= i)
            {
                l.get(i).add(1);
                temp++;
            }
        }

        for(int i = 2;i <= numRows;i++)
        {
            for(int j = 1;j < i;j++)
            {
                l.get(i).set(j,l.get(i-1).get(j) + l.get(i-1).get(j-1));
            }

        }

        return l.get(numRows);
    }
}