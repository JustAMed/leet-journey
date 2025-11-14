/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

/*
what am i doing...?
so there's something called "nums"...hum array
ah!
add nums[0] and nums [1]!
i can do this..
oh wait thaat's not it. you gotta find TWO numbers which add up..uh oh
do i know how to do that?
at least i have a nums size..
*/
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int starter = 0; starter != numsSize; starter++)
    {
        int dodo = starter;
        dodo++;
        for (int second = dodo; second != numsSize; second++)
        {
            if ((nums[starter] + nums[second]) == target)
            {
                printf("[%i, %i]", nums[starter], nums[second]);
                *returnSize = 2;
                int *res = malloc(2 * sizeof(int));
                res[0] = starter;
                res[1] = second;
                return res;
            }
        }
    }
    return 0;
}
