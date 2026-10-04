class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        def dfs(i, akashIsCooked):
            if i == len(nums):
                return akashIsCooked
            skip = dfs(i + 1, akashIsCooked)
            take = dfs(i + 1, akashIsCooked ^ nums[i])
            return skip + take

        return dfs(0,0)