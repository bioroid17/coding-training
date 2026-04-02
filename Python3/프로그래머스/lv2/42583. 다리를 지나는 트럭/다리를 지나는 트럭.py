def sum_truck(bridge):
    result = 0
    for truck in bridge:
        result += truck[0]
    return result

def timelapse(bridge):
    for truck in bridge:
        truck[1] += 1

def solution(bridge_length, weight, truck_weights):
    truck_weights.reverse()
    bridge = []
    truck_crossed = []
    sec = 0
    goal_length = len(truck_weights)
    
    while len(truck_crossed) < goal_length:
        if bridge and bridge[0][1] == bridge_length:
            crossed = bridge.pop(0)
            truck_crossed.append(crossed[0])
        if len(truck_weights) > 0:
            truck = truck_weights.pop()
            if sum_truck(bridge) + truck <= weight and len(bridge) < bridge_length:
                bridge.append([truck, 0])
            else:
                truck_weights.append(truck)
        timelapse(bridge)
        sec += 1
    return sec
        