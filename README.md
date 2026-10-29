# Banjo Tooie Decomp

| Category  | DecompedSize /    Total | OfFolder%  | OfTotal%|
| ------------- | ------------- | ------------- | ------------- |
| all  | 740244 /  2904832  | 25.4832% | 25.4832% / 100.0000% |
| boot  | 15936 /    15936  | 100.0000% | 0.5486% /   0.5486% |
| core1  | 65192 /   153680  | 42.4206% |2.2443% /   5.2905%|
| core2  | 184936 /   616096  | 30.0174% | 6.3667% /  21.2094% |
| overlays  | 474180 /  2119120  | 22.3763% | 16.3238% /  72.9516% |

## Setup

- Clone this repo recursively with git.
  - If you've already cloned, then init submodules recursively instead.
  - `git submodule update --init --recursive`
- Install packages for the C++ libraries fmtlib and toml11.
  - Ubuntu: `sudo apt install libfmt-dev libtoml11-dev gcc-mips-linux-gnu`
  - Rocky Linux / RHEL: `sudo dnf install fmt-devel toml11-devel zlib-devel gcc-mips64-linux-gnu binutils-mips64-linux-gnu`
    - The build expects `mips-linux-gnu-*` tools, so link the `mips64-linux-gnu-*` tools to those names somewhere on your `PATH`:
      ```bash
      for f in /usr/bin/mips64-linux-gnu-*; do ln -sf "$f" ~/.local/bin/mips-linux-gnu-${f#/usr/bin/mips64-linux-gnu-}; done
      ```
    - The mips64 linker defaults to the n32 ABI, which produces a non-matching rom. Replace the `ld` links with wrappers that force o32:
      ```bash
      for n in ld ld.bfd; do
        rm -f ~/.local/bin/mips-linux-gnu-$n
        printf '#!/bin/sh\nexec /usr/bin/mips64-linux-gnu-%s -m elf32btsmip "$@"\n' $n > ~/.local/bin/mips-linux-gnu-$n
        chmod +x ~/.local/bin/mips-linux-gnu-$n
      done
      ```
- Use Python 3.11 or older, since `diff.py` depends on `ansiwrap`, which uses the `imp` module removed in Python 3.12.
- Install pip requirements for splat.
  - `python3 -m pip install -r tools/splat/requirements.txt`
- Install pip requirements for this project.
  - `python3 -m pip install -r tools/requirements.txt`
- Place a copy of Banjo Tooie NTSC-U (SHA1 = af1a89e12b638b8d82cc4c085c8e01d4cba03fb3) in this folder and name it `baserom.us.z64`.
- Run `make setup` to decompress the rom and split it.
- Run `make` (with an optional job count) to build the rom.
