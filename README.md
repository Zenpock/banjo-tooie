# Banjo Tooie Decomp

| Category  | DecompedSize /    Total | OfFolder%  | OfTotal%|
| ------------- | ------------- | ------------- | ------------- |
| all  | 565212 /  2903928  | 19.4637% | 19.4637% / 100.0000% |
| boot  | 15840 /    15840  | 100.0000% | 0.5455% /   0.5455% |
| core1  | 64828 /   153316  | 42.2839% |2.2324% /   5.2796%|
| core2  | 137744 /   616044  | 22.3594% | 4.7434% /  21.2142% |
| overlays  | 346800 /  2118728  | 16.3683% | 11.9424% /  72.9608% |

## Setup

- Clone this repo recursively with git.
  - If you've already cloned, then init submodules recursively instead.
  - `git submodule update --init --recursive`
- Install packages for the C++ libraries fmtlib and toml11.
  - Ubuntu: `sudo apt install libfmt-dev libtoml11-dev gcc-mips-linux-gnu`
- Install pip requirements for splat.
  - `python3 -m pip install -r tools/splat/requirements.txt`
- Install pip requirements for this project.
  - `python3 -m pip install -r tools/requirements.txt`
- Place a copy of Banjo Tooie NTSC-U (SHA1 = af1a89e12b638b8d82cc4c085c8e01d4cba03fb3) in this folder and name it `baserom.us.z64`.
- Run `make setup` to decompress the rom and split it.
- Run `make` (with an optional job count) to build the rom.
