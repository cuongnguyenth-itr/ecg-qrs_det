CMAKE_MINIMUM_REQUIRED(VERSION 2.8.12 FATAL_ERROR)

PROJECT(psimd-download NONE)

INCLUDE(ExternalProject)
ExternalProject_Add(psimd
	GIT_REPOSITORY https://github.com/Maratyszcza/psimd.git
	GIT_TAG master
	SOURCE_DIR "/home/huucuong/cpp/libs/3rdparty/tflite_build/psimd-source"
	BINARY_DIR "/home/huucuong/cpp/libs/3rdparty/tflite_build/psimd"
	CONFIGURE_COMMAND ""
	BUILD_COMMAND ""
	INSTALL_COMMAND ""
	TEST_COMMAND ""
)
