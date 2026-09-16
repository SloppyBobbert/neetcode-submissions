impl Solution {
    pub fn replace_elements(arr: Vec<i32>) -> Vec<i32> {
        let len = arr.len();
        let mut jq = vec![0; len];

        let mut max = -1;
        
        for i in (0..len).rev() {
            jq[i] = max;
            max = max.max(arr[i]);
        }
        jq

    }
}
