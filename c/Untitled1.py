# Write text to file, overwrite if file exists
with open("demo.txt", "w", encoding="utf-8") as f:
    f.write("Hello world\n")
    f.write("This is line 2\n")

with open("demo.txt", "r", encoding="utf-8") as f:
    content = f.read()
print("Full content:")
print(content)
