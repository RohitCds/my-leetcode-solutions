class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        k: dict[int, int] = {}
        for i,n in enumerate(nums):
            if n in k:
                return [k[n], i]
            k[target-n] = i
        return []
            

        
