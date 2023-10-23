# SWEA 1928. Base64 Decoder

# 인코딩 작업
## 1. 입력받은 문자열 안의 각각의 요소를 테이블의 값(10진수)으로 변경하기
## 2. 각각의 테이블의 값(10진수)을 6자리의 2진수로 변경 후 합치기 (빈 공간은 0으로 채우기)
def encode(input_string):
    values_table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
    output_string = ""
    
    for ch in input_string:
        value_table = ""

        # 입력 문자열의 각 요소를 테이블의 값으로 바꾸기
        for idx, item in enumerate(values_table):
            if item == ch:
                value_table = idx
                break
        
        # 10진수를 2진수로 바꾸기 & 앞의 0b 문자 지우기
        value_binary = bin(value_table)[2:]

        # 6자리로 만들고, 빈 공간은 0으로 채우기
        value_binary = value_binary.zfill(6)

        # 2진수들을 합치기
        output_string += value_binary

    return output_string

# 디코딩 작업
## 1. 2진수 문자열에서 8자리씩 뽑아내기
## 2. 뽑아낸 8자리 2진수를 10진수로 바꾸기
## 3. 10진수를 문자로 바꾼 후 합치기
def decode(input_string, digit):
    output_string = ""

    for i in range(0, len(input_string), digit):
        binary_value = input_string[i:i + digit]    # 8자리 뽑아내기

        # 2진수를 10진수로 바꾸기
        decimal_value = int(binary_value, 2)

        # 10진수를 문자로 바꾸기
        char_value = chr(decimal_value)

        # 문자 합치기
        output_string += char_value
    
    return output_string


T = int(input())

for test_case in range(1, 1 + T):
    S = input()

    print(f"#{test_case} {decode(encode(S), 8)}")