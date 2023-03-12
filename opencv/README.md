# Open CV

Open CV とは OSS の Computer Vision 向けライブラリ．

画像処理等を行う際はよく使用される．


## Open CV のインストール

Open CV は C++ で書かれたライブラリである．インストール方法は，ビルド済みバイナリ形式のライブラリをインストールする方法と，ソースコードをダウンロードして自前でビルドする方法がある．

前者は簡単にインストール可能だが，拡張性に欠ける．また，ビルド済みバイナリを公式が提供している訳ではない場合もあるので注意．

後者はビルドが面倒だが，自分でコードを書き換えるなどしてカスタマイズすることが可能．また，Open CV などの巨大なライブラリはオプション機能を提供している場合があり，それを使用する場合は自前でビルドする必要がある場合がある．

人生で一回ぐらいはビルドしてもいいと思う．

- パッケージ管理ツールを使用してビルド済みライブラリをインストールする方法

    - Ubuntu

        ```
        # install
        sudo apt install libopencv-dev

        # uninstall
        sudo apt remove libopencv-dev
        ```
    
    - Mac

        ```
        # install
        brew install opencv

        # uninstall
        brew uninstall opencv
        ```

- ソースコードから自前でビルドする方法

    [ググって](https://docs.opencv.org/4.x/d0/d3d/tutorial_general_install.html) ください


## コンテンツ

本資料においては 4 つのプログラムを用意している．

- displayImage

    画像のパスを指定すると画像が画面に表示される

- realtimeCamera

    カメラで取得した画像をリアルタイムで画面に表示する

- realtimeBlurCamera

    上述のカメラ画像を GaussianBlur でぼかす

- faceDetection

    カメラで取得した画像から顔認識を行う

### ビルド方法

```
cd opencv
mkdir build && cd build
cmake ..
make -j
```
