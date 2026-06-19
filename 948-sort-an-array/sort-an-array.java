class Solution {
    public int[] sortArray(int[] nums) {
        Thread sortThread = new Thread(()-> Arrays.sort(nums));
        sortThread.start();
        try{
            sortThread.join();
        }catch(Exception e){

        }
        return nums;
    }
}