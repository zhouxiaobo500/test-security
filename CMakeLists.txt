cat <<EOF > CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(VulnCTest)

find_package(OpenSSL 1.0.1g REQUIRED) # 故意写一个有漏洞的老版本号用于测试

add_executable(main main.c)
target_link_libraries(main OpenSSL::SSL OpenSSL::Crypto)
EOF