# Libs & Project Structure in CPP

## Build:

Project is built with CMake,
to build simply run :

```bash
cmake -Bbuild -S . && cmake --build build

```

## Install:

installation is made with CMake for versions 3.15+:

```bash
cmake --install

```

## Challenge:

-   import headers without directory -> "add.hpp" instead of "add/add.hpp" - Maybe SYSTEM or INTERFACE libraries will help with that

## References:

Trying to implement what is given on

[stackoverflow article](https://stackoverflow.com/questions/13703647/how-to-properly-add-include-directories-with-cmake)

[Nice Readme on GitLab](https://cliutils.gitlab.io/modern-cmake/)

```

```
