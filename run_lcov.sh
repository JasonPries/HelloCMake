lcov --capture --directory . --output-file build/coverage/coverage.info --no-external
genhtml build/coverage/coverage.info --output-directory build/coverage/
google-chrome build/coverage/index.html
