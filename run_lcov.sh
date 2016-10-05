./build/HelloCMake
./build/test/run_tests

COV_FILE="./build/coverage/coverage.info"
COV_DIR="./build/coverage"
COV_SITE=$COV_DIR/"index.html"

lcov -c -d . -o $COV_FILE
lcov -r $COV_FILE "/usr/include/*" "*/gtest/*" -o $COV_FILE
genhtml $COV_FILE -o $COV_DIR
google-chrome $COV_SITE

echo $COV_REMOVE
