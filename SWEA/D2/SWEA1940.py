# SWEA 1940. 가랏! RC카!

T = int(input())

for test_case in range(1, 1 + T):
    N = int(input())

    distance = 0    # 이동 거리
    speed = 0    # 이동 속도

    for i in range(N):
        input_string = input()

        command = int(input_string.split()[0])
        
        if command == 0:    # 속도 유지
            new_speed = 0
            speed += new_speed
        elif command == 1:    # 가속
            new_speed = int(input_string.split()[1])
            speed += new_speed
        elif command == 2:    # 감속
            new_speed = int(input_string.split()[1])

            # 현재 속도보다 감속할 속도가 더 클 경우
            if speed < new_speed:
                new_speed = 0

            speed -= new_speed
        
        distance += speed

    print(f"#{test_case} {distance}")