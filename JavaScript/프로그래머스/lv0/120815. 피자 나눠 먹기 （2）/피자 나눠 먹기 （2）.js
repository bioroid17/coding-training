function find_gcd(a, b){
    const mod = a % b;
    if(mod == 0) return b
    else return find_gcd(b, mod)
}

function solution(n) {
    const gcd = find_gcd(Math.max(6, n), Math.min(6, n))
    return n / gcd
}