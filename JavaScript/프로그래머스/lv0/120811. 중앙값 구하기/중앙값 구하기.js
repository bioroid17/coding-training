function solution(array) {
    const sorted = array.sort((a, b) => {
        if (a < b) return -1
        else if (a > b) return 1
        else return 0
    })
    return sorted[Math.trunc(array.length / 2)];
}