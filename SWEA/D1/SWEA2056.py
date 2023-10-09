# SWEA 2056. 연월일 달력

T = int(input())

for test_case in range(1, T + 1):
    input_date = str(input())
    
    year = input_date[0:4]
    month = input_date[4:6]
    day = input_date[6:8]

    # 오류 체크
    if month in ["01", "03", "05", "07", "08", "10", " 12"]:
        if 1 <= int(day) and int(day) <= 31:
            answer = f"{year}/{month}/{day}"
        else:
            answer = -1
    elif month in ["04", "06", "09", "11"]:
        if 1 <= int(day) and int(day) <= 30:
            answer = f"{year}/{month}/{day}"
        else:
            answer = -1
    elif month in ["02"]:
        if 1 <= int(day) and int(day) <= 28:
            answer = f"{year}/{month}/{day}"
        else:
            answer = -1
    else:
        answer = -1
    
    print(f"#{test_case} {answer}")