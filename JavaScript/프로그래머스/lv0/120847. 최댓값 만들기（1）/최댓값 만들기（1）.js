function solution(numbers) {
    const sort_nums = numbers.sort((i1, i2) => {
        if(i1 > i2) return -1;
        if(i1 < i2) return 1;
        return 0;
    })
    return sort_nums[0] * sort_nums[1]
}