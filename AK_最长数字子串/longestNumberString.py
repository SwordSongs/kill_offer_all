import re
input_val = input("please input your string: ")
regex = re.compile('\D*')
split_string = re.split(regex, input_val)
print(max(split_string, key=len))