def solution(nums):
    pokemons = {}
    for num in nums:
        if num not in pokemons:
            pokemons[num] = 1
        else:
            pokemons[num] += 1
    return min(len(nums)//2, len(pokemons.keys()))