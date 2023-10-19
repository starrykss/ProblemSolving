# SWEA 1948. 날짜 계산기

T = int(input())

for test_case in range(1, 1 + T):
    M1, D1, M2, D2 = map(int, input().split())

    # 1월 : 31일 / 2월 : 28일 / 3월 : 31일 / 4월 : 30일
    # 5월 : 31일 / 6월 : 30일 / 7월 : 31일 / 8월 : 31일
    # 9월 : 30일 / 10월 : 31일 / 11월 : 30일 / 12월 : 31일
    date_dict = { 1: 31, 2: 28, 3: 31, 4: 30, 5: 31, 6: 30, 7: 31, 8: 31, 9: 30, 10: 31, 11: 30, 12: 31 }
    
    # 첫 번째 날짜에서 총 일수 구하기
    origin_total_date = 0

    for month in range(1, M1):
        origin_total_date += date_dict[month]
    
    origin_total_date += D1

    # 두 번째 날짜에서 총 일수 구하기
    target_total_date = 0

    for month in range(1, M2):
        target_total_date += date_dict[month]
    
    target_total_date += D2

    # 정답 구하기 (첫 번째 날짜 총 일수 - 두 번째 날짜 총 일수)
    answer = target_total_date - origin_total_date + 1

    print(f"#{test_case} {answer}")