class Solution(object):
    def twoSum(self, nums, target):
        for i,num in enumerate(nums):
            if (target-num) in nums:
                if nums.index(target-num)!=i:
                    return [i,nums.index(target-num)]

s = Solution()
print(s.twoSum([2,7,11,15], 9))
print(s.twoSum([3,2,4], 6))
