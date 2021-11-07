### CMakeの最低バージョンを記述
cmake_minimum_required(VERSION 2.8)

### ソリューション名を指定
project( DisplayImage )

### OpenCVのパッケージを探す
find_package( OpenCV REQUIRED )

### ヘッダファイルのパスを指定
include_directories( ${OpenCV_INCLUDE_DIRS} )

### 実行ファイル名とソース指定
add_executable( displayImage displayImage.cpp)

### リンク先のライブラリを指定
target_link_libraries( displayImage ${OpenCV_LIBS} )