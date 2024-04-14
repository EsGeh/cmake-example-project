# CMake Example Project

Example C++ project structure using CMake to be used as base for other projects.

    $ git clone git@github.com:EsGeh/cmake-example-project.git
    $ mv cmake-example-project <my-project-name>
    $ cd <my-project-name>
    $ rm -rf .git
    $ git init
    $ git remote add origin <remote_url>

Project Structure

- `./app/`: Executable Source code
- `./tests/`: Tests (based on [Catch2](https://github.com/catchorg/Catch2))

# Requirements

- [CMake]() 3.15
- [Fish Shell](https://fishshell.com/)

# Build

    $ ./scripts/build.fish

# Test

    $ ./scripts/test.fish

# Run

    $ ./scripts/run.fish
