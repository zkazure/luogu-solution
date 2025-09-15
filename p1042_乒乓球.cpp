#include <bits/stdc++.h>
using namespace std;

struct score {
private:
    int a;
    int b;
public:
    score() : a(0), b(0) {}

    void initial() {
        a = 0;
        b = 0;
    }
    void round(const char &c) {
        if (c=='W')
            a++;
        else if (c=='L')
            b++;
    }
    void print_score() {
        printf("%d:%d\n", a, b);
    }
    bool end(int max_score) {
        if (a>=max_score || b>=max_score) {
            if (a<=b-2 || b<=a-2)
                return true;
        }
            
        return false;
    }
};
int main() {
    char tmp;
    score s{};
    string scores = "";
    scanf("%c", &tmp);
    while (tmp != 'E') {
        scores += tmp;
        scanf("%c", &tmp);
    }

    s.initial();
    for (char score : scores) {
        s.round(score);
        if (s.end(11)) {
            s.print_score();
            s.initial();
        }
    }
    s.print_score();
    printf("\n");

    s.initial();
    for (char score : scores) {
        s.round(score);
        if (s.end(21)) {
            s.print_score();
            s.initial();
        }
    }
    s.print_score();

    return 0;
}
