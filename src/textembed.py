import sys

def main():
    lines = []
    with open(sys.argv[1]) as f:
        lines = f.read().splitlines()

    count = 0
    result = "char* parsed_txt[] = {\n"

    for line in lines:
        result += "    \"{0}\\0\",\n".format(line)
        count += 1

    result += "};"
    print(result)
    print("int parsed_txt_len = {0};".format(count))

if __name__ == '__main__':
    main()
