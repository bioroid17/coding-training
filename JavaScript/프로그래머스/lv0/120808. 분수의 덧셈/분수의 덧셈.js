function findGCD(answer){
    const mod = answer[1] % answer[0];
    if (mod === 0) return answer[0];
    else return findGCD([mod, answer[0]]);
}

function solution(numer1, denom1, numer2, denom2) {
    let answer = [numer1 * denom2 + numer2 * denom1, denom1 * denom2];
    let sortedAnswer = [0, 0]
    if (answer[0] > answer[1]){
        sortedAnswer[0] = answer[1];
        sortedAnswer[1] = answer[0]
    } else {
        sortedAnswer[1] = answer[1];
        sortedAnswer[0] = answer[0]
    }
    const gcd = findGCD(sortedAnswer);
    answer[1] /= gcd
    answer[0] /= gcd
    
    return answer;
}