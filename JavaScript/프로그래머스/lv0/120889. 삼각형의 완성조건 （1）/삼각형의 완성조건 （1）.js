function solution(sides) {
    const sorted = sides.sort()
    return sides[0] + sides[1] > sides[2] ? 1 : 2;
}