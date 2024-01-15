class Solution:
    def canPartitionKSubsets(self, nums: List[int], k: int) -> bool:
        if(sum(nums)%k!=0):
            return False
        nums.sort()
        target=sum(nums)//k
        x=len(nums)/k
        if(nums[-1]>target):
            return False
        l=x*[0]
        for i in range(len(nums)-1):
            l[i%k]+=nums[i]
            if(l[i%k]>target):
                return False
        return True
    
          

            
        
        