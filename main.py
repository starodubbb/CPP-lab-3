import mylib

lib = mylib.Mylib()

# Додавання float
result_float = lib.addFloats(1.5, 2.5)
print(f"Результат додавання float: {result_float}")

# Додавання double
result_double = lib.addDoubles(3.14, 6.28)
print(f"Результат додавання double: {result_double}")

# Додавання int
result_int = lib.addInts(10, 20)
print(f"Результат додавання int: {result_int}")

# Додавання string
result_string = lib.addStrings("Hello, ", "world!")
print(f"Результат додавання string: {result_string}")