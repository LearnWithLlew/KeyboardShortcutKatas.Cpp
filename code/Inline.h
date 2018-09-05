#ifndef KEYBOARDSHORTCUTKATAS_CPP_INLINE_H
#define KEYBOARDSHORTCUTKATAS_CPP_INLINE_H

#define R 3
#define S 2
#define T 1



static int H(int that) {
    return that - 7;
}


class O {
public :
    int p = 1;

    O Create() {
        return O();
    }
};

class Inline {
private:
    bool N() {
        return false;
    }

    int F(int G) {
        return -3 + G;
    }

    int C(int d) {
        return d;
    }

    int B() {
        return 5;
    }

    int e = 2;

public:
    int Practice() {
        auto i = 2;
        auto a = 5;
        auto s = 2 - i;
        auto j = (B() - a + i);
        auto m = F(3);
        if (N()) {
            m += 56;
        }
        auto k = [&]() {
            auto l = m + j;
            return l - C(e);
        };
        auto q = 1 - O().Create().p;
        return 42 +R-S-T + k() + q + H(7) + s;
    }

};


#endif //KEYBOARDSHORTCUTKATAS_CPP_INLINE_H
