class Solution {
    public List<Integer> getRow(int rowIndex) {
        if (rowIndex == 0) {
            return new ArrayList<>(Arrays.asList(1));
        } else if (rowIndex == 1) {
            return new ArrayList<>(Arrays.asList(1, 1));
        }

        List<List<Integer>> l = new ArrayList<>();

        for (int i = 0; i <= rowIndex; i++) {
            l.add(new ArrayList<>());

            for (int j = 0; j <= i; j++) {
                l.get(i).add(1);
            }
        }

        for (int i = 2; i <= rowIndex; i++) {
            for (int j = 1; j < i; j++) {
                l.get(i).set(j,
                    l.get(i - 1).get(j - 1) + l.get(i - 1).get(j));
            }
        }

        return l.get(rowIndex);
    }
}