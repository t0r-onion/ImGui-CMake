
# ImGui + CMake.

I didn't see a nice portable ImGui and CMake crossover so decided to make one and maybe someone will use it.

# Prerequisites
- cmake version atleast 3.29.0
- (Ninja) / (Visual Studio 20XX)

# How To Build With Ninja + CMake.

- Step 1: Clone The GitHub Repository: 

```bash
   git clone https://github.com/t0r-onion/ImGui-CMake.git
```

- Step 2: CD Into The Cloned Dir:
```bash
   cd ImGui-CMake
```

- Step 3: Make A Build Directory:
```bash
   mkdir build && cd build
```

- Step 4: Build With CMake Ninja:
```bash
   cmake -G Ninja .. 
```

- Step 5: Build It With Ninja: 
```bash 
   ninja
```

# How To Build With Visual Studio

- Step 1: Clone The GitHub Repository: 

```bash
   git clone https://github.com/t0r-onion/ImGui-CMake.git
```

- Step 2: CD Into The Cloned Dir:
```bash
   cd ImGui-CMake
```

- Step 3: Make A Build Directory:
```bash
   mkdir build && cd build
```

- Step 4: Build With Visual Studio (Generate .sln's):
```bash
   cmake ..
```


    
