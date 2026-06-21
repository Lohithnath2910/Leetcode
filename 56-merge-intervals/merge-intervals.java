class Solution {
    public int[][] merge(int[][] intervals) {
        List<List<Integer>> l = new ArrayList<>();
        for(int i = 0;i < intervals.length;i++)
        {
            List<Integer> in = new ArrayList<>();
            in.add(intervals[i][0]);
            in.add(intervals[i][1]);
            l.add(in);
        }

        Collections.sort(l, (a,b) -> {
            if(a.get(0) == b.get(0))
            {
                return a.get(1) - b.get(1);
            }
            return a.get(0) - b.get(0);
        });

        List<List<Integer>> ans = new ArrayList<>();
        int s = l.get(0).get(0);
        int e = l.get(0).get(1);
        for(int i = 1;i <l.size();i++)
        {
            if(l.get(i).get(0) <= e)
            {
                s = Math.min(s,l.get(i).get(0));
                e = Math.max(e,l.get(i).get(1));
            }

            else
            {
                List<Integer> aa = new ArrayList<>();
                aa.add(s); 
                aa.add(e);
                ans.add(aa);
                s = l.get(i).get(0); 
                e = l.get(i).get(1); 
            }
        }


        List<Integer> a = new ArrayList<>();
        a.add(s); 
        a.add(e);
        ans.add(a);

        int[][] res =  new int[ans.size()][2];
        for(int i = 0;i < ans.size();i++)
        {
            res[i][0] = ans.get(i).get(0);
            res[i][1] = ans.get(i).get(1);
        }
        return res;
    }
}