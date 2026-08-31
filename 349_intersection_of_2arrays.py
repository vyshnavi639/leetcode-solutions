class Solution(object):
    def intersection(self, nums1, nums2):
        return sorted(list(set(nums1) & set(nums2)))
       
        # to get unique elemets from 2 arrays as single output array