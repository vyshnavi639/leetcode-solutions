class Solution(object):
    def containsDuplicate(self, nums):
       return len(nums) != len(set(nums))

        #  true if duplicates exists in array and false it doesnt exist
        # as set in python means removes duplicates and find outs the length of only unique elements
        