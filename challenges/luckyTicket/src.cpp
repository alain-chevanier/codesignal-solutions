#define L 0
#define R 1

int luckyTicket(string s) {
    int count[255][2], m = s.size(), ch = m;
    for(auto c : s) count[c][L] = count[c][R] = 0;
    for(auto c : s) count[c][R]++;
    for(auto c : s) {
        ch -= std::abs(count[c][R]-- - count[c][L]++);
        ch += std::abs(count[c][R] - count[c][L]);
        m = std::min(m, ch);
    }
    return m;
}