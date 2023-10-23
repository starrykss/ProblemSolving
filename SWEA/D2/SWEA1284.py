# SWEA 1284. 수도 요금 경쟁

T = int(input())

for test_case in range(1, 1 + T):
    P, Q, R, S, W = map(int, input().split())

    # P : 1L당 요금 (A사)
    # Q : RL 이하 요금 (B사)
    # S : RL 보다 많을 경우 초과량에 대해 1L당 요금
    # W : 한 달 동안 사용하는 수도의 양

    fare_A = P * W
    fare_B = Q if W <= R else Q + (S * (W - R))

    answer = fare_A if fare_A <= fare_B else fare_B

    print(f"#{test_case} {answer}")