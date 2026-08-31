class Solution(object):
    def shuffle(self, nums, n):
        result=[]
        for i in range(n):
            result.append(nums[i])
            result.append(nums[i+n])
        return result
       
        # there will be an array which has to be split it into two equal parts and then in output we need a single array from which first element will be from first array and second element from second array 
        # repeating it in same way
        