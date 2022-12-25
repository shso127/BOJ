#include <bits/stdc++.h>
using namespace std;

const int MX = 600001;
char dat[MX];
int pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, char c) {
    dat[unused] = c;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr) {
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void traverse() {
    int cur = nxt[0];
    while (cur != -1) {
        cout << dat[cur];
        cur = nxt[cur];
    }
}

int main(void) {
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);

    string s;
    cin >> s;
    int cursor = 0;
    for (auto c : s) {
        insert(cursor, c);
        cursor++;
    }

    int m;
    cin >> m;
    while (m--) {
        char c;
        cin >> c;
        if (c == 'L') {
            if (pre[cursor] != -1) cursor = pre[cursor];
        }
        else if (c == 'D') {
            if (nxt[cursor] != -1) cursor = nxt[cursor];
        }
        else if (c == 'B') {
            if (cursor != 0) {
                erase(cursor);
                cursor = pre[cursor];
            }
        }
        else {//P ÀÏ¶§
            char c1;
            cin >> c1;
            insert(cursor, c1);
            cursor = nxt[cursor];
        }
    }
    
    traverse();
}