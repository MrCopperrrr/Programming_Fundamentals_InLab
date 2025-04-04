//1
void replaceString(string& s, const string& s1, const string& s2) {
    size_t pos = s.rfind(s1); // Tìm vị trí cuối cùng của chuỗi s1 trong s
    if (pos != string::npos) { // Nếu tìm thấy chuỗi s1
        s.replace(pos, s1.length(), s2); // Thay thế chuỗi s1 bằng s2 tại vị trí pos
    }
    cout << s << endl; // In ra chuỗi s
}