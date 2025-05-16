\firmware

Overview:
Contains all firmware relevant to this project.
Released binaries, or built outputs should be placed in \firmware\revX.
The FW revision and PCBA revision should always be identical.
IE. PCBA revX will always be flashed with FW revX.
If there were no changes to FW, leave breadcrumbs in the form of readme's.

template_project
├── firmware
│   ├── rev0		(folder)
│   │   ├── codebase.zip
│   │   └── rev0.bin
│   ├── rev1		(folder)
│   │   ├── codebase.zip
│   │   └── rev1.bin
│   ├── rev2		(folder)
│   │   └── same_as_rev1.txt
│   ├── foo.py
│   ├── bar.hpp
│   └── bar.cpp