def isValid(s):

    a = []
    for i in range(len(s)):
        if s[i] == '{' or s[i] == '[' or s[i] == '(':
            a.append(s[i])

        if s[i] == '}':
            if len(a) == 0:
                return False
            else:
                if a[-1] == '{':
                    a.pop()

                else:
                    break
        if s[i] == ']':
            if len(a) == 0:
                return False
            else:
                if a[-1] == '[':
                    a.pop()
                else:
                    break
        if s[i] == ')':
            if len(a) == 0:
                return False
            else:
                if a[-1] == '(':
                    a.pop()
                else:
                    break

    if len(a) == 0:
        return True
    else:
        return False


print(isValid('[()()]'))
