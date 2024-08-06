import random
import string

def convert_char(c):
    if c.isalpha():
        if random.choice([True, False]):
            return c.upper()
        else:
            return c.lower()
    return c

def convert_string(input_string):
    return ''.join(convert_char(c) for c in input_string)

input_string = input("Enter a string: ")
converted_output = convert_string(input_string)
print("Converted output:", converted_output)
