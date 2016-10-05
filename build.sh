mkdir -p build
cd build

cmake .. && make

./HelloCMake
./test/run_tests

mkdir -p coverage

COV_FILE="./coverage/coverage.info"
COV_DIR="./coverage"
COV_SITE=$COV_DIR/"index.html"

lcov -c -d .. -o $COV_FILE
lcov -r $COV_FILE "/usr/include/*" "*/gtest/*" -o $COV_FILE
genhtml $COV_FILE -o $COV_DIR
google-chrome $COV_SITE
