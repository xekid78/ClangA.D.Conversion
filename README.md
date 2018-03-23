# ClangA.D.Conversion
西暦から和暦を割り出す

## 処理
昭和元年から10年までの西暦和暦変換を行います

## コード
```
#include <stdio.h>

int main(void) {
    int seireki, syowa;
    for (seireki = 1926; seireki <= 1935; seireki++) {
        printf("西暦%d年は", seireki);
        syowa = seireki - 1925;
        printf("昭和%d年です\n", syowa);
    }
    return 0;
}
```

## 出力結果  
```
西暦1926年は昭和1年です
西暦1927年は昭和2年です
西暦1928年は昭和3年です
西暦1929年は昭和4年です
西暦1930年は昭和5年です
西暦1931年は昭和6年です
西暦1932年は昭和7年です
西暦1933年は昭和8年です
西暦1934年は昭和9年です
西暦1935年は昭和10年です
```
  
## 開発環境
| 開発ツール |  |
|:-|:-|
| OS | Windows10 |
| 仮想化ソフト | Oracle VM VirtualBox 5.2 |
| 構築ソフト | Vagrant 2.0.2 |
| 仮想化上OS | CentOS 6.9 |
| SSHクライアント | PuTTY 0.6.8 |
| FTPクライアント | Cyberduck 6.3.5 |
| エディタ | Atom 1.24.0 |
| 開発言語 | gcc 4.4.7 |
