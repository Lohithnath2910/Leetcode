class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        s = []

        for i in tokens:
            if i not in "-*/+":
                s.append(int(i))
            else:
                if len(s) > 1:
                    match i:
                        case "+":
                            b = s.pop()
                            a = s.pop()
                            s.append(a + b)

                        case "-":
                            b = s.pop()
                            a = s.pop()
                            s.append(a - b)

                        case "*":
                            b = s.pop()
                            a = s.pop()
                            s.append(a * b)

                        case "/":
                            b = s.pop()
                            a = s.pop()
                            s.append(int(a / b))
                        
        return s[0]