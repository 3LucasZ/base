# CMake generated Testfile for 
# Source directory: /home/rosbot/dev_ws/src/rosbridge_suite/rosapi
# Build directory: /home/rosbot/dev_ws/build/rosapi
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(rosapi_test_stringify_field_types "/usr/bin/python3" "-u" "/opt/ros/eloquent/share/ament_cmake_test/cmake/run_test.py" "/home/rosbot/dev_ws/build/rosapi/test_results/rosapi/rosapi_test_stringify_field_types.xunit.xml" "--package-name" "rosapi" "--output-file" "/home/rosbot/dev_ws/build/rosapi/ament_cmake_pytest/rosapi_test_stringify_field_types.txt" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/home/rosbot/dev_ws/src/rosbridge_suite/rosapi/test/test_stringify_field_types.py" "-o" "cache_dir=/home/rosbot/dev_ws/build/rosapi/ament_cmake_pytest/rosapi_test_stringify_field_types/.cache" "--junit-xml=/home/rosbot/dev_ws/build/rosapi/test_results/rosapi/rosapi_test_stringify_field_types.xunit.xml" "--junit-prefix=rosapi")
set_tests_properties(rosapi_test_stringify_field_types PROPERTIES  LABELS "pytest" TIMEOUT "60" WORKING_DIRECTORY "/home/rosbot/dev_ws/src/rosbridge_suite/rosapi")
