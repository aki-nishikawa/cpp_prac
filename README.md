# cpp_prac

研究室の新人教育用．

本資料は基本的に [これらの資料](#reference) を参考につくってるので，もっと厳密な理解がしたいとかあれば参照してください．

## 対象
 - Python は授業でやった．他の言語はよくわからん．
 - これまでの教育で Linux ちょっと触れるようになった．

## コンテンツ

1. general  
    - 文法, メモリ, ファイルの分割, ビルド
    - ドキュメント書けたら描きます．

2. opencv  
    Open CV で遊ぼう.
    
    apt でインストールするか，ソースからビルドするかはお好みだが，一回ぐらいビルドする経験があってもいいとは思う．

    - Open CV のインストール
        - Ubuntu
        ```
            sudo apt install libopencv-dev
        ```
        - Mac
        ```
            brew install opencv
        ```

    - 消す時
        - Ubuntu
        ```
            sudo apt remove libopencv-dev
        ```
        - Mac
        ```
            brew uninstall opencv
        ```

    カメラ使う系のプログラムは Mac で環境構築できているなら使えます．


## 戯言

理系って人にもの教えるとき厳密な内容を教えようとするけど，ぶっちゃけそんな詳しくなくていいよなって思う（反省）．

### Python しかさわったことない人にとって C/C++ が難しくなる点

- コンパイルするタイプの言語である
    - python, javascript, perl はスクリプト言語
        - 処理系がユーザの書いたプログラムを1行ずつ実行していく
        - 実行すればプログラムはとりあえず動くが，問題が発生するとそこで止まる
    - c, c++, golang,  rust はコンパイルして
        - ユーザの書いたコードを元に処理系が実行バイナリを生成するタイプの言語
        - コンパイル時のエラーと実行時のエラーが生じる
- 型がある
    - python, javascript, perl は動的型付言語
        - 処理系が勝手に型を解釈してくれる
    - c, c++, golang,  rust は静的型付言語
        - プログラマが変数の型を指定する必要がある
        - 型を推論してくれるコンパイラもある
- メモリを意識したコーディングをする必要がある
    - SD のカリキュラム的に「メモリ？何それ？」になる
- OS (Linux) との結合が密
    - Python もそうだが，言語の処理系が Linux に標準搭載されていることもあり，標準ライブラリのインストールされている場所がユーザから見えにくい (ユーザのホームディレクトリにない)
        - このせいで，ライブラリのパス等が原因でハマった時の解決の難易度が高い
    - Anaconda 等の仮想環境をしようしてインストールした Python や，Goalng, Rust などの処理系が OS から分離されている言語は必要なものが全部インストール先にあるので楽に感じる．

## Reference
1. https://github.com/kaityo256/python2cpp
2. https://atcoder.jp/contests/apg4b/
3. https://rinatz.github.io/cpp-book/
4. https://cpp.rainy.me
5. https://opencv.org/