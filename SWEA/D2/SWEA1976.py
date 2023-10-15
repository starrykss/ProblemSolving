# SWEA 1976. 시각 덧셈

T = int(input())

for test_case in range(1, 1 + T):
    H1, M1, H2, M2 = map(int, input().split())

    # 시간을 분으로 만들기
    minute = (H1 * 60) + M1 + (H2 * 60) + M2

    result_hour = minute // 60
    result_minute = minute % 60

    # 12시간제
    if result_hour > 12:
        result_hour -= 12

    print(f"#{test_case} {result_hour} {result_minute}")