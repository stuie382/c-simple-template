# Project README

This project aims to be a basic starter template for creating projects using the C
programming language. It includes GoogleTest as
the unit test framework.

## Dependencies

This project uses CMake as the build system, so it is required to be installed on
the system. GoogleTest will be downloaded and installed during the build.

## Project Structure

The project has the following structure and directories:

* __app__ - This is where the entry point to the project will go. The name of the output binary is also defined in the CMakeLists.txt in this directory.
* __cmake__ - This is where supporting utilities for cmake are stored
* __include__ - This is where the header files for the project are stored. Directories can be used to help organise the files to make it easier for humans to understand
* __src__ - This is where the source code for the project is stored. This creates a library that is linked against the binary produced in the app directory
* __tests__ - This is where the unit tests for the project are stored

## Developer guide

The first thing you should do is to checkout and build this project as is, to ensure that everything is working as expected. These instructions are written assuming you are working on the command line.

* In the project root, make a build directory and change into that directory
* From the build directory, run the following command ````cmake ..````
* Once CMake has finished (assuming no errors) run the make command with no arguments
* Once Make has finished, go into the `app` directory and run the binary called 'app'. This should print 'Hello World' to the console.
* Then go into the 'tests' directory and run the 'template-demo-test' binary. This should report OK.

If you have got this far, then the next step is to start to customise the project for your needs. The CMakeLists.txt in the project root currently has the PROJECT_NAME variable set to 'CHANGE-ME', so this should be changed. The project also has a description that needs to be updated to reflect your project. After that, it's up to you.
